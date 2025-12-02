/*
    Programa: Teste instrução pack
    Autor: Rodrigo Appelt
    Data: 01/12/2025
    Descrição: Testa a instrução personalizada de criação de
        vetores compactos.
*/

// ativa a instrucao nova
#define USE_CG_INSTRUCTIONS
#define USE_CG_PACK

#include "../instructions.h"

int test_success;

static inline void dcache_flush(void)
{
    asm volatile ("csrw pmpcfg0, x0");
}

int test1(){
    int x = 0xAB;
    int y = 0xCD;
    int z = 0xEF;// 
    int w = 0x01;

    volatile vec4_u8_t packed = pack_vec4_u8((unsigned char)x,(unsigned char)y,(unsigned char)z,(unsigned char)w);
    if(packed != 0b00001100001011110111100011111111){
        test_success = 0;
        return packed;
    }
    test_success = 1;
    return packed;
}

int main(void){

    volatile int packed = test1();
    volatile int p2 = packed;

    // stop simulation. check test_sucess addr
    // Padding to avoid exit early
    int a = 1;
    int b = 1;
    int c = 1;
    int d = 1;
    a++;
    d+=a;
    b+=d;
    c+=b;
    volatile  int sign =  0xDEADBEEF;
    dcache_flush(); 

    stop_sim();
    return (a+b+c+d) | sign | packed;
}