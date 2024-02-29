#ifndef MAT4X4_H
#define MAT4X4_H


#include "../include/math_types.h"

/** @brief Documentation will be added later. */

typedef struct mat4x4 {
        f32 t[4][4];
} mat4x4;


extern void mat4x4_parse(mat4x4 *dest,
                         const vec4 *v0,
                         const vec4 *v1,
                         const vec4 *v2,
                         const vec4 *v3);

extern mat4x4 mat4x4_create(const vec4 *v0, 
                            const vec4 *v1, 
                            const vec4 *v2, 
                            const vec4 *v3);

extern mat4x4 mat4x4_mult(const mat4x4 *m0, const mat4x4 *m1);

extern vec4 mat4x4_vec4_mult(const mat4x4 *m, const vec4 *v);


#endif //MAT4X4_H