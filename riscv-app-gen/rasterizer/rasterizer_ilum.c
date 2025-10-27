/*
    Programa: Rasterizador com iluminacao por pixel
    Autor: Rodrigo Appelt
    Data: 25/10/2025
    Descricao: Programa simples que renderiza uma cena com uma esfera iluminada
        por uma luz direcional. Utiliza iluminacao por pixel e o modelo
        de iluminacao PHONG simplificado(sem iluminacao especular).
    Nota: Nao foi incluido iluminacao especular pois necessita do calculo
        de um expoente, porem nao temos a possibilidade de uso de numeros
        de ponto flutuante.

    Parametros de configuracao:
        -TEST: define se eh uma build de teste ou a final para o hardware.
            A build de teste escreve o resultado em um arquivo PPM e nao 
            utiliza aceleracoes. A final insere slots para instrucoes customizadas
            de aceleracao de computacao.
        -PPM_BINARY: define se o arquivo de saida sera em formato binario (P6) ou ascii (P3)
        -WIDTH e HEIGHT: dimensoes do framebuffer
        -BACKGROUND_COLOR: cor de fundo que preenche os pixels fora da esfera.
        -SPHERE_COLOR: define a cor da esfera
        -SPHERE_RADIUS: define o tamanho em pixels do raio da esfera
        -LIGHT_DIR: direcao da luz, em coordenadas inteiras (x,y,z). Nao precisa ser normalizada.
        -
*/

#define TEST
#define PPM_BINARY
#define WIDTH 256
#define HEIGHT 256
#define BACKGROUND_COLOR VEC4_U8(15,15,100,0)
#define SPHERE_COLOR VEC4_U8(200,50,50,0)
//#define DISPLAY_NORMALS // descomentar para mostrar as normais da esfera
// Parametros da esfera
#define SPHERE_RADIUS 80
// Parametros da iluminacao
#define LIGHT_DIR VEC4_I8(10, -1, 20, 0)
#define KA 50 // ambient

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
typedef char uint8_t;
#endif

#include "vec.h"

vec4_u8_t buffer[HEIGHT*WIDTH];

int32_t isqrt(int32_t n){
    if (n <= 0) return 0;
    int32_t x = n;
    int32_t y = (x + 1) >> 1;
    while (y < x){ x = y; y = (x + n / x) >> 1; }
    return x;
}

static inline vec4_u8_t lerp_vec4_u8(vec4_u8_t a, vec4_u8_t b, uint8_t t) {
    #ifdef TEST
    uint8_t x = VEC4_X(a) + t * (VEC4_X(b) - VEC4_X(a)) / 255;
    uint8_t y = VEC4_Y(a) + t * (VEC4_Y(b) - VEC4_Y(a)) / 255;
    uint8_t z = VEC4_Z(a) + t * (VEC4_Z(b) - VEC4_Z(a)) / 255;
    uint8_t w = VEC4_W(a) + t * (VEC4_W(b) - VEC4_W(a)) / 255;
    return VEC4_U8(x, y, z, w);
    #else
    asm volatile(
        ".word 0xCAFECAFE #lerp %0 %1 %2"
        : "+r" (t)
        : "r" (a), "r" (b)
        : "memory"
    );
    return t;
    #endif
}

static inline int32_t dot3(vec4_u8_t a, vec4_u8_t b) {
    #ifdef TEST
    return (int8_t)VEC4_X(a) * (int8_t)VEC4_X(b) + (int8_t)VEC4_Y(a) * (int8_t)VEC4_Y(b) + (int8_t)VEC4_Z(a) * (int8_t)VEC4_Z(b);
    #else
    int32_t result;
    asm volatile(
        ".word 0xCAFDCAFD #dot3 %0 %1 %2"
        : "=r" (result)
        : "r" (a), "r" (b)
    );
    return result;
    #endif
}

int main(void){ 
    // assumimos projecao ortogonal
    // esfera centralizada na camera virtual
    vec4_i8_t light_dir_norm = LIGHT_DIR;
    // normalizar LIGHT_DIR
    int32_t light_len2 = (int8_t)VEC4_X(LIGHT_DIR)*(int8_t)VEC4_X(LIGHT_DIR) + (int8_t)VEC4_Y(LIGHT_DIR)*(int8_t)VEC4_Y(LIGHT_DIR) + (int8_t)VEC4_Z(LIGHT_DIR)*(int8_t)VEC4_Z(LIGHT_DIR);
    int32_t light_len = isqrt(light_len2);
    light_dir_norm = VEC4_I8(((int8_t)VEC4_X(LIGHT_DIR)*127)/light_len, ((int8_t)VEC4_Y(LIGHT_DIR)*127)/light_len, ((int8_t)VEC4_Z(LIGHT_DIR)*127)/light_len, 0);


    for(int x=-WIDTH/2;x<WIDTH/2;x++){
        for(int y=-HEIGHT/2;y<HEIGHT/2;y++){
            int dist2 = x*x + y*y;
            if(dist2 <= SPHERE_RADIUS*SPHERE_RADIUS){ // ponto na esfera
                // calcular normal da superficie
                int32_t nz = isqrt(SPHERE_RADIUS*SPHERE_RADIUS - dist2);
                // P = (dx, dy, nz)
                vec4_i8_t n = VEC4_I8((int8_t)((x*127)/SPHERE_RADIUS), (int8_t)((y*127)/SPHERE_RADIUS), (int8_t)((nz*127)/SPHERE_RADIUS), 0);
                int32_t n_len2 = (int8_t)VEC4_X(n)*(int8_t)VEC4_X(n) + (int8_t)VEC4_Y(n)*(int8_t)VEC4_Y(n) + (int8_t)VEC4_Z(n)*(int8_t)VEC4_Z(n);
                int32_t n_len = isqrt(n_len2);
                // normaliza
                n = VEC4_I8(((int8_t)VEC4_X(n)*127)/n_len, ((int8_t)VEC4_Y(n)*127)/n_len, ((int8_t)VEC4_Z(n)*127)/n_len, 0);

                #ifndef DISPLAY_NORMALS
                int32_t dot = dot3(n, light_dir_norm) / 127; // produto escalar normal x luz
                if(dot < 0) dot = 0; // clamp, nao iluminar lado contrario
                int32_t intensity = (dot * 255) / 127; // mapear para [0,255]
                if(intensity<KA) intensity = KA;
                vec4_u8_t color = lerp_vec4_u8(0, SPHERE_COLOR, intensity);
                buffer[(y+HEIGHT/2) * WIDTH + x + WIDTH/2] = color;
                #else
                n = VEC4_I8(VEC4_X(n)+127, VEC4_Y(n)+127, VEC4_Z(n)+127, 0); // normalizar para [0,255]
                buffer[(y+HEIGHT/2) * WIDTH + x + WIDTH/2] = n;
                #endif
                

            }else{
                // background color
                buffer[(y+HEIGHT/2) * WIDTH + x+WIDTH/2] = BACKGROUND_COLOR;
            }
        }
    }

    #ifdef TEST
    #ifdef PPM_BINARY
    FILE* f = fopen("sphere.ppm", "wb"); // wb needed because \n is 2 bytes in 'w' mode
    fprintf(f, "P6 %d %d 255\n", WIDTH, HEIGHT);
    #else
    FILE* f = fopen("sphere.ppm", "w");
    fprintf(f, "P3 %d %d 255\n", WIDTH, HEIGHT);
    #endif
    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            vec4_u8_t color = buffer[y * WIDTH + x];
            #ifdef PPM_BINARY
            // GIMP reads as RBG
            fputc(VEC4_X(color), f);
            fputc(VEC4_Y(color), f);
            fputc(VEC4_Z(color), f);
            #else
            fprintf(f, "%d %d %d ", VEC4_X(color), VEC4_Y(color), VEC4_Z(color));
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