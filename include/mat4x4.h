#ifndef MAT4X4_H
#define MAT4X4_H


#include "../include/type_define.h"


typedef struct mat4x4 {
        f32 t[4][4];
} mat4x4;


extern void mat4x4_parse(mat4x4 *dest,
                         f32 n00, f32 n01, f32 n02, f32 n03,
                         f32 n10, f32 n11, f32 n12, f32 n13,
                         f32 n20, f32 n21, f32 n22, f32 n23,
                         f32 n30, f32 n31, f32 n32, f32 n33);

extern mat4x4 mat4x4_create(f32 n00, f32 n01, f32 n02, f32 n03,
                            f32 n10, f32 n11, f32 n12, f32 n13,
                            f32 n20, f32 n21, f32 n22, f32 n23,
                            f32 n30, f32 n31, f32 n32, f32 n33);

extern mat4x4 mat4x4_vcreate(const vec4 *v0,
                             f32 n10, f32 n11, f32 n12, f32 n13,
                             f32 n20, f32 n21, f32 n22, f32 n23,
                             f32 n30, f32 n31, f32 n32, f32 n33);

extern mat4x4 mat4x4_vvcreate(const vec4 *v0,
                              const vec4 *v1,
                              f32 n20, f32 n21, f32 n22, f32 n23,
                              f32 n30, f32 n31, f32 n32, f32 n33);

extern mat4x4 mat4x4_vvvcreate(const vec4 *v0,
                               const vec4 *v1,
                               const vec4 *v2,
                               f32 n30, f32 n31, f32 n32, f32 n33);

extern mat4x4 mat4x4_vvvvcreate(const vec4 *v0, 
                                const vec4 *v1, 
                                const vec4 *v2, 
                                const vec4 *v3);

extern mat4x4 mat4x4_mult(const mat4x4 *m0, const mat4x4 *m1);

extern vec4 mat4x4_multv(const mat4x4 *m, const vec4 *v);


#endif //MAT4X4_H