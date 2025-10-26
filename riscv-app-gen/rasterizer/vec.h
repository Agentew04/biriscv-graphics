typedef unsigned int vec4_u8_t;
typedef unsigned int vec4_i8_t;

#define VEC4_X(v) ((v) >> 24)
#define VEC4_Y(v) (((v) >> 16) & 0xFF)
#define VEC4_Z(v) (((v) >> 8) & 0xFF)
#define VEC4_W(v) ((v) & 0xFF)
// signed components has masking because two complement overflows 1's into higher bits
#define VEC4_I8(x, y, z, w) (((x & 0xFF) << 24) | ((y & 0xFF) << 16) | ((z & 0xFF) << 8) | (w & 0xFF))
#define VEC4_U8(x, y, z, w) (((x) << 24) | ((y) << 16) | ((z) << 8) | (w))