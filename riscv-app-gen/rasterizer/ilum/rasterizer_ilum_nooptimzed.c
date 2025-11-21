/*
    Programa: Rasterizador com iluminacao por pixel
    Data: 09/11/2025
    Descricao: Programa simples que renderiza uma cena com uma esfera iluminada
        por uma luz direcional. Utiliza iluminacao por pixel e o modelo
        de iluminacao PHONG simplificado(sem iluminacao especular).
*/

#define TEST
#define PPM_BINARY
#define WIDTH 256
#define HEIGHT 256
#define BACKGROUND_COLOR VEC4_U8(15,15,100,0)
#define SPHERE_COLOR VEC4_U8(200,50,50,0)
//#define DISPLAY_NORMALS
#define SPHERE_RADIUS 80
#define LIGHT_DIR VEC4_I8(10, -1, 20, 0)
#define KA 50

typedef unsigned int uint32_t;
typedef int int32_t;
typedef char uint8_t;
typedef char int8_t;

#include "vec.h"

uint32_t buffer_signature = 0xDEADBEEF; // To help locate the buffer in memory
vec4_u8_t buffer[HEIGHT*WIDTH];

int32_t isqrt(int32_t n){
    if (n <= 0) return 0;
    int32_t x = n;
    int32_t y = (x + 1) >> 1;
    while (y < x){ x = y; y = (x + n / x) >> 1; }
    return x;
}

int main(void){ 
    vec4_i8_t light_dir_norm = LIGHT_DIR;

    int32_t light_len2 =
        (int8_t)VEC4_X(LIGHT_DIR) * (int8_t)VEC4_X(LIGHT_DIR) +
        (int8_t)VEC4_Y(LIGHT_DIR) * (int8_t)VEC4_Y(LIGHT_DIR) +
        (int8_t)VEC4_Z(LIGHT_DIR) * (int8_t)VEC4_Z(LIGHT_DIR);

    int32_t light_len = isqrt(light_len2);

    light_dir_norm = VEC4_I8(
        ((int8_t)VEC4_X(LIGHT_DIR) * 127) / light_len,
        ((int8_t)VEC4_Y(LIGHT_DIR) * 127) / light_len,
        ((int8_t)VEC4_Z(LIGHT_DIR) * 127) / light_len,
        0
    );

    for(int x=-WIDTH/2; x<WIDTH/2; x++){
        for(int y=-HEIGHT/2; y<HEIGHT/2; y++){

            int dist2 = x*x + y*y;

            if (dist2 <= SPHERE_RADIUS*SPHERE_RADIUS){

                int32_t nz = isqrt(SPHERE_RADIUS*SPHERE_RADIUS - dist2);

                vec4_i8_t n = VEC4_I8(
                    (int8_t)((x*127) / SPHERE_RADIUS),
                    (int8_t)((y*127) / SPHERE_RADIUS),
                    (int8_t)((nz*127) / SPHERE_RADIUS),
                    0
                );

                int32_t n_len2 =
                    (int8_t)VEC4_X(n)*(int8_t)VEC4_X(n) +
                    (int8_t)VEC4_Y(n)*(int8_t)VEC4_Y(n) +
                    (int8_t)VEC4_Z(n)*(int8_t)VEC4_Z(n);

                int32_t n_len = isqrt(n_len2);

                n = VEC4_I8(
                    ((int8_t)VEC4_X(n) * 127) / n_len,
                    ((int8_t)VEC4_Y(n) * 127) / n_len,
                    ((int8_t)VEC4_Z(n) * 127) / n_len,
                    0
                );

                #ifndef DISPLAY_NORMALS
                int32_t dot = dot3(n, light_dir_norm) / 127;
                if (dot < 0) dot = 0;

                int32_t intensity = (dot * 255) / 127;
                if (intensity < KA) intensity = KA;

                vec4_u8_t color = lerp_vec4_u8(0, SPHERE_COLOR, intensity);

                buffer[(y+HEIGHT/2) * WIDTH + x + WIDTH/2] = color;
                #else
                n = VEC4_I8(
                    VEC4_X(n)+127,
                    VEC4_Y(n)+127,
                    VEC4_Z(n)+127,
                    0
                );
                buffer[(y+HEIGHT/2) * WIDTH + x + WIDTH/2] = n;
                #endif

            } else {
                buffer[(y+HEIGHT/2) * WIDTH + x + WIDTH/2] = BACKGROUND_COLOR;
            }
        }
    }

    // SEM ESCRITA DE ARQUIVO.
    // buffer[] agora contém a imagem final em RGB.
    // Será lido pelo teste / Verilator.

    return 0;
}
