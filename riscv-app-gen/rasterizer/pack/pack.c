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

void test1(){
    int x = 12;
    int y = 47;
    int z = 120;
    int w = 255;

    vec4_u8_t packed = pack_vec4_u8((unsigned char)x,(unsigned char)y,(unsigned char)z,(unsigned char)w);
    if(packed != 0b00001100001011110111100011111111){
        test_success = 0;
        return;
    }
    test_success = 1;
}

int main(void){

    test1();

    // stop simulation. check test_sucess addr
    stop_sim();
    return 0;
}