/*
    Programa: Rasterizador com iluminacao por pixel
    Autor: João Vitor Belmonte Rates
    Data: 09/11/2025
    Descricao: Testa a instrução de adição de vetores compactos
        com saturação de valores.
*/

//#define TEST
#define PPM_BINARY
#define USE_CG_INSTRUCTIONS
#define MAX_VECTOR VEC4_I8(0x00,0xFF,0x00,0xFF)
#define UNIT_VECTOR VEC4_U8(1,1,1,1)

typedef unsigned int uint32_t;
typedef int int32_t;
//typedef char uint8_t;
typedef char int8_t;

#include "../instructions.h"

uint32_t buffer_signature = 0xDEADBEEF; // To help locate the buffer in memory


static inline void dcache_flush(void)
{
    asm volatile ("csrw pmpcfg0, x0");
}

int main(void){ 
    vec4_i8_t a = 0xFF00FFFE; // VEC4_I8(255,0,255,0)
    vec4_i8_t b = UNIT_VECTOR;
    vec4_i8_t s = add_sat_4(a, b); // NO_APP
    
    int e = 12;
    e++;
    *(volatile uint32_t*)0xFFFF0FFC = 0x12345678;

    
    return 0;
}
