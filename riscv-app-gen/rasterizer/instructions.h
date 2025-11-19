#ifndef INSTRUCTIONS_H
#define INSTRUCTIONS_H

#if defined(TEST) || !defined(USE_CG_INSTRUCTIONS)
#define VEC4_X(v) ((v) >> 24)
#define VEC4_Y(v) (((v) >> 16) & 0xFF)
#define VEC4_Z(v) (((v) >> 8) & 0xFF)
#define VEC4_W(v) ((v) & 0xFF)
// signed components has masking because two complement overflows 1's into higher bits
#define VEC4_I8(x, y, z, w) (((x & 0xFF) << 24) | ((y & 0xFF) << 16) | ((z & 0xFF) << 8) | (w & 0xFF))
#define VEC4_U8(x, y, z, w) (((x) << 24) | ((y) << 16) | ((z) << 8) | (w))
#endif

#ifndef uint32_t
typedef unsigned int uint32_t; // define <stdint.h> types
typedef int int32_t;
typedef unsigned char uint8_t;
typedef char int8_t;
#endif

#ifndef vec4_u8_t
typedef uint32_t vec4_u8_t;
typedef uint32_t vec4_i8_t;
#endif


/*
Autor: Rodrigo Appelt

Deve ser preservada a ordem das instrucoes inline abaixo,
pois ainda nao entendi a logica de posicionamento de comentarios
no assembly gerado...

Apenas uma instrucao por asm volatile. Senao o comentario nao fica
ao lado #NO_APP
*/

static inline vec4_u8_t lerp_vec4_u8(vec4_u8_t a, vec4_u8_t b, uint8_t t) {
    #if defined(TEST) || !defined(USE_CG_INSTRUCTIONS) || !defined(USE_CG_LERP)
    uint8_t x = VEC4_X(a) + t * (VEC4_X(b) - VEC4_X(a)) / 255;
    uint8_t y = VEC4_Y(a) + t * (VEC4_Y(b) - VEC4_Y(a)) / 255;
    uint8_t z = VEC4_Z(a) + t * (VEC4_Z(b) - VEC4_Z(a)) / 255;
    uint8_t w = VEC4_W(a) + t * (VEC4_W(b) - VEC4_W(a)) / 255;
    return VEC4_U8(x, y, z, w);
    #else
    
    asm volatile(
        ".word 0x0 #lerp4 %0 %1 %2"
        : "+r" (t)
        : "r" (a), "r" (b)
        : "memory"
    );
    return t;
    #endif
}

static inline vec4_u8_t pack_vec4_u8(uint8_t x, uint8_t y, uint8_t z, uint8_t w) {
    #if defined(TEST) || !defined(USE_CG_INSTRUCTIONS) || !defined(USE_CG_PACK)
    return VEC4_U8(x, y, z, w);
    #else
    vec4_u8_t result;
    asm volatile(
        ".word 0x0 #pack.xy %0 %1 %2"
        : "=r" (result)
        : "r" (x), "r" (y)
    );
    asm volatile(
        ".word 0x0 #pack.zw %0 %2 %3"
        : "=r" (result)
        : "r" (result), "r" (z), "r" (w)
    );
    return result;
    #endif
}

static inline uint8_t unpack_unsigned_x(vec4_u8_t v) {
    #if defined(TEST) || !defined(USE_CG_INSTRUCTIONS) || !defined(USE_CG_UNPACK)
    return (uint8_t)VEC4_X(v);
    #else
    uint8_t result;
    asm volatile(
        ".word 0x0 #unpack.u.x %0 %1 0"
        : "=r" (result)
        : "r" (v)
    );
    return result;
    #endif
}

static inline uint8_t unpack_unsigned_y(vec4_u8_t v) {
    #if defined(TEST) || !defined(USE_CG_INSTRUCTIONS) || !defined(USE_CG_UNPACK)
    return (uint8_t)VEC4_Y(v);
    #else
    uint8_t result;
    asm volatile(
        ".word 0x0 #unpack.u.y %0 %1 0"
        : "=r" (result)
        : "r" (v)
    );
    return result;
    #endif
}

static inline uint8_t unpack_unsigned_z(vec4_u8_t v) {
    #if defined(TEST) || !defined(USE_CG_INSTRUCTIONS) || !defined(USE_CG_UNPACK)
    return (uint8_t)VEC4_Z(v);
    #else
    uint8_t result;
    asm volatile(
        ".word 0x0 #unpack.u.z %0 %1 0"
        : "=r" (result)
        : "r" (v)
    );
    return result;
    #endif
}

static inline uint8_t unpack_unsigned_w(vec4_u8_t v) {
    #if defined(TEST) || !defined(USE_CG_INSTRUCTIONS) || !defined(USE_CG_UNPACK)
    return (uint8_t)VEC4_W(v);
    #else
    uint8_t result;
    asm volatile(
        ".word 0x0 #unpack.u.w %0 %1 0"
        : "=r" (result)
        : "r" (v)
    );
    return result;
    #endif
}

static inline int8_t unpack_signed_x(vec4_u8_t v) {
    #if defined(TEST) || !defined(USE_CG_INSTRUCTIONS) || !defined(USE_CG_UNPACK)
    return (int8_t)VEC4_X(v);
    #else
    int8_t result;
    asm volatile(
        ".word 0x0 #unpack.s.x %0 %1 0"
        : "=r" (result)
        : "r" (v)
    );
    return result;
    #endif
}

static inline int8_t unpack_signed_y(vec4_u8_t v) {
    #if defined(TEST) || !defined(USE_CG_INSTRUCTIONS) || !defined(USE_CG_UNPACK)
    return (int8_t)VEC4_Y(v);
    #else
    int8_t result;
    asm volatile(
        ".word 0x0 #unpack.s.y %0 %1 0"
        : "=r" (result)
        : "r" (v)
    );
    return result;
    #endif
}

static inline int8_t unpack_signed_z(vec4_u8_t v) {
    #if defined(TEST) || !defined(USE_CG_INSTRUCTIONS) || !defined(USE_CG_UNPACK)
    return (int8_t)VEC4_Z(v);
    #else
    int8_t result;
    asm volatile(
        ".word 0x0 #unpack.s.z %0 %1 0"
        : "=r" (result)
        : "r" (v)
    );
    return result;
    #endif
}

static inline int8_t unpack_signed_w(vec4_u8_t v) {
    #if defined(TEST) || !defined(USE_CG_INSTRUCTIONS) || !defined(USE_CG_UNPACK)
    return (int8_t)VEC4_W(v);
    #else
    int8_t result;
    asm volatile(
        ".word 0x0 #unpack.s.w %0 %1 0"
        : "=r" (result)
        : "r" (v)
    );
    return result;
    #endif
}

static inline int32_t dot3(vec4_u8_t a, vec4_u8_t b) {
    #if defined(TEST) || !defined(USE_CG_INSTRUCTIONS) || !defined(USE_CG_DOT)
    return VEC4_X(a) * VEC4_X(b) + VEC4_Y(a) * VEC4_Y(b) + VEC4_Z(a) * VEC4_Z(b);
    #else
    int32_t result;
    asm volatile(
        ".word 0x0 #dot4 %0 %1 %2"
        : "=r" (result)
        : "r" (a), "r" (b)
    );
    return result;
    #endif
}

static inline vec4_u8_t add_sat_4(vec4_u8_t a, vec4_u8_t b) {
    #if defined(TEST) || !defined(USE_CG_INSTRUCTIONS) || !defined(USE_CG_ADDSAT)
    uint8_t x = VEC4_X(a) + VEC4_X(b);
    if (x < VEC4_X(a)) x = 255;
    uint8_t y = VEC4_Y(a) + VEC4_Y(b);
    if (y < VEC4_Y(a)) y = 255;
    uint8_t z = VEC4_Z(a) + VEC4_Z(b);
    if (z < VEC4_Z(a)) z = 255;
    uint8_t w = VEC4_W(a) + VEC4_W(b);
    if (w < VEC4_W(a)) w = 255;
    return VEC4_U8(x, y, z, w);
    #else
    vec4_u8_t result;
    asm volatile(
        ".word 0x0 #add4.sat %0 %1 %2"
        : "=r" (result)
        : "r" (a), "r" (b)
    );
    return result;
    #endif
}




#endif