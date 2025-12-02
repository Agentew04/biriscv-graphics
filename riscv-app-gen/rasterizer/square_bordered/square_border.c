/*
    Programa: Prenche um array como um quadrado vermelho de bordas azuis. Finalidade de teste
    Autor: João Vitor Belmonte Rates
    Data: 21/11/2025
    Descricao: Prenche um array como um quadrado vermelho de bordas azuis. Finalidade de teste
*/

#define TEST
#define PPM_BINARY
#define WIDTH 64
#define BACKGROUND_COLOR  0xDEADBEEF
#define BORDER_COLOR 0xDEADBEEF

#include "instructions.h"

// typedef unsigned int uint32_t;
// typedef int int32_t;
// typedef char uint8_t;
// typedef char int8_t;



uint32_t buffer_signature = 0xDEADBEEF; // To help locate the buffer in memory
vec4_u8_t buffer[WIDTH*WIDTH];
uint32_t address_of_buffer = (uint32_t)&buffer;
static inline void dcache_flush(void)
{
    asm volatile ("csrw pmpcfg0, x0"); // 0x3a0
}


int main(void){ 

    for(int x=0; x<WIDTH*WIDTH; x++){
        buffer[x] = 0x0DEAD;
        dcache_flush(); 
    }
    
    return 0;
}
