/*
    Programa: Rasterizador de triangulos simples
    Autor: Rodrigo Appelt
    Data: 25/10/2025
    Descricao: Programa simples que renderiza um triangulo em um framebuffer. Utiliza
        iluminacao por pixel, similar ao trabalho que um shader faria. Funcionalidades que serao
        aceleradas estao fatoradas em funcoes inline, que podem ser substituidas por assembly
        quando TEST nao estiver definido. Possibilita a compilacao sem a biblioteca padrao
        do C, para execucao em hardware embarcado.

    Parametros de configuracao
        - TEST: define se eh uma build de debug ou a build final para o hardware,
                a qual vai pular a parte de escrita no arquivo. Apenas escrevendo no framebuffer.
                Tambem ativa o uso de assembly inline nas funcoes de aceleracao.
        - WIDTH e HEIGHT: dimensoes do framebuffer
        - PPM_BINARY: define se o arquivo de saida sera em formato binario (P6) ou ascii (P3)
        - BACKGROUND_COLOR: cor de fundo que preenche os pixels fora do triangulo. Puramente estetico.
        - MARGIN: margem entre o triangulo e as bordas da imagem. Puramente estetico.
        - USE_CG_INSTRUCTIONS: habilita o uso de instrucoes customizadas para aceleracao
          de funcoes criticas.
*/
//#define TEST
#define WIDTH 256
#define HEIGHT 256
#define PPM_BINARY // comment to use ascii ppm
#define BACKGROUND_COLOR VEC4_U8(15, 15, 100, 0)
#define MARGIN 25
#define USE_CG_INSTRUCTIONS

/*
Fim dos parametros de configuracao
*/

#ifdef TEST
#include <stdlib.h>
#include <stdint.h>
#include <math.h>
#include <stdio.h>
#else
typedef unsigned int uint32_t; // define <stdint.h> types
typedef int int32_t;
typedef unsigned char uint8_t;
typedef char int8_t;
#endif

#define VEC_X(v) ((v) >> 24)
#define VEC_Y(v) (((v) >> 16) & 0xFF)
#define VEC_Z(v) (((v) >> 8) & 0xFF)
#define VEC_W(v) ((v) & 0xFF)
#define VEC4_U8(x, y, z, w) (((x) << 24) | ((y) << 16) | ((z) << 8) | (w))


typedef uint32_t vec4_u8_t;

#include "instructions.h"

vec4_u8_t buffer[HEIGHT*WIDTH];

int main(void){
    vec4_u8_t v0 = pack_vec4_u8(MARGIN,255-MARGIN,0,0);
    vec4_u8_t v2 = pack_vec4_u8(127,MARGIN,0,0);
    vec4_u8_t v1 = pack_vec4_u8(255-MARGIN,255-MARGIN,0,0);

    vec4_u8_t c0 = pack_vec4_u8(255,0,0,0);
    vec4_u8_t c1 = pack_vec4_u8(0,255,0,0);
    vec4_u8_t c2 = pack_vec4_u8(0,0,255,0);
    
    int32_t denom = ((int32_t)unpack_unsigned_y(v1) - (int32_t)unpack_unsigned_y(v2))
        * ((int32_t)unpack_unsigned_x(v0) - (int32_t)unpack_unsigned_x(v2)) 
        + ((int32_t)unpack_unsigned_x(v2) - (int32_t)unpack_unsigned_x(v1))
        * ((int32_t)unpack_unsigned_y(v0) - (int32_t)unpack_unsigned_y(v2));
    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            // coordenadas baricentricas, xyz sao em termos da distancia de cada vertice do trig
            int32_t w0 = ((int32_t)unpack_unsigned_y(v1) - (int32_t)unpack_unsigned_y(v2))
                * (x - VEC_X(v2)) 
                + ((int32_t)unpack_unsigned_x(v2) - (int32_t)unpack_unsigned_x(v1))
                * (y - (int32_t)unpack_unsigned_y(v2));
            int32_t w1 = ((int32_t)unpack_unsigned_y(v2) - (int32_t)unpack_unsigned_y(v0))
                * (x - (int32_t)unpack_unsigned_x(v2)) 
                + ((int32_t)unpack_unsigned_x(v0) - (int32_t)unpack_unsigned_x(v2))
                * (y - (int32_t)unpack_unsigned_y(v2));
            int32_t w2 = denom - w0 - w1;

            if((denom > 0 && w0 >= 0 && w1 >= 0 && w2 >= 0)
                || denom < 0 && w0 <= 0 && w1 <= 0 && w2 <= 0){
                // inside triangle

                uint8_t t1 = (w1 * 255) / denom;
                uint8_t t2 = (w2 * 255) / denom;
                vec4_u8_t c01 = lerp_vec4_u8(c0, c1, t1);
                vec4_u8_t c = lerp_vec4_u8(c01, c2, t2);
                buffer[y * WIDTH + x] = c;
            }else{
                // background color
                buffer[y * WIDTH + x] = BACKGROUND_COLOR;
            }
        }
    }

    #ifdef TEST
    // dont even write to file is running in simulator. there is no filesystem

    #ifdef PPM_BINARY
    FILE* f = fopen("raster.ppm", "wb"); // wb needed because \n is 2 bytes in 'w' mode
    fprintf(f, "P6 %d %d 255\n", WIDTH, HEIGHT);
    #else
    FILE* f = fopen("raster.ppm", "w");
    fprintf(f, "P3 %d %d 255\n", WIDTH, HEIGHT);
    #endif
    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            vec4_u8_t color = buffer[y * WIDTH + x];
            #ifdef PPM_BINARY
            // GIMP reads as RBG
            fputc(VEC_X(color), f);
            fputc(VEC_Y(color), f);
            fputc(VEC_Z(color), f);
            #else
            fprintf(f, "%d %d %d ", VEC_X(color), VEC_Y(color), VEC_Z(color));
            #endif
        }
        #ifndef PPM_BINARY
        fprintf(f, "\n");
        #endif
    }
    fclose(f);
    #endif
    
    return 0;
}