#include "../include/mat4x4.h"
#include "../include/types.h"
#include "../include/math_types.h"

/** @brief 4x4 Matrix - 
 *  The Matrix takes input in row-major order. 
 *  But inside the function it will be transposed into a column-major order
 * 
 *  m.t[n] => 0 = x, 1 = y, 2 = z, 3 = w;
*/
inline void mat4x4_parse(mat4x4 *dest,
                         const vec4 *v0,
                         const vec4 *v1,
                         const vec4 *v2,
                         const vec4 *v3) {

        dest->t[0][0] = v0->x;
        dest->t[0][1] = v1->x;
        dest->t[0][2] = v2->x;
        dest->t[0][3] = v3->x;

        dest->t[1][0] = v0->y;
        dest->t[1][1] = v1->y;
        dest->t[1][2] = v2->y;
        dest->t[1][3] = v3->y;
        
        dest->t[2][0] = v0->z;
        dest->t[2][1] = v1->z;
        dest->t[2][2] = v2->z;
        dest->t[2][3] = v3->z;

        dest->t[3][0] = v0->w;
        dest->t[3][1] = v1->w;
        dest->t[3][2] = v2->w;
        dest->t[3][3] = v3->w;
}


inline mat4x4 mat4x4_create(const vec4 *v0, 
                            const vec4 *v1, 
                            const vec4 *v2, 
                            const vec4 *v3) {
        
        mat4x4 m;

        m.t[0][0] = v0->x;
        m.t[0][1] = v1->x;
        m.t[0][2] = v2->x;
        m.t[0][3] = v3->x;

        m.t[1][0] = v0->y;
        m.t[1][1] = v1->y;
        m.t[1][2] = v2->y;
        m.t[1][3] = v3->y;
        
        m.t[2][0] = v0->z;
        m.t[2][1] = v1->z;
        m.t[2][2] = v2->z;
        m.t[2][3] = v3->z;

        m.t[3][0] = v0->w;
        m.t[3][1] = v1->w;
        m.t[3][2] = v2->w;
        m.t[3][3] = v3->w;

        return m;
}

/** @brief 4x4 matrix multiplication with a 4x4 matrix and return a new 4x4 matrix. */
inline mat4x4 mat4x4_mult(const mat4x4 *m0, const mat4x4 *m1) {
        
        mat4x4 m;

        m.t[0][0] = m0->t[0][0] * m1->t[0][0] + m0->t[0][1] * m1->t[1][0] + m0->t[0][2] * m1->t[2][0] + m0->t[0][3] * m1->t[3][0]; 
        m.t[0][1] = m0->t[0][0] * m1->t[0][1] + m0->t[0][1] * m1->t[1][1] + m0->t[0][2] * m1->t[2][1] + m0->t[0][3] * m1->t[3][1]; 
        m.t[0][2] = m0->t[0][0] * m1->t[0][2] + m0->t[0][1] * m1->t[1][2] + m0->t[0][2] * m1->t[2][2] + m0->t[0][3] * m1->t[3][2]; 
        m.t[0][3] = m0->t[0][0] * m1->t[0][3] + m0->t[0][1] * m1->t[1][3] + m0->t[0][2] * m1->t[2][3] + m0->t[0][3] * m1->t[3][3];
        
        m.t[1][0] = m0->t[1][0] * m1->t[0][0] + m0->t[1][1] * m1->t[1][0] + m0->t[1][2] * m1->t[2][0] + m0->t[1][3] * m1->t[3][0]; 
        m.t[1][1] = m0->t[1][0] * m1->t[0][1] + m0->t[1][1] * m1->t[1][1] + m0->t[1][2] * m1->t[2][1] + m0->t[1][3] * m1->t[3][1]; 
        m.t[1][2] = m0->t[1][0] * m1->t[0][2] + m0->t[1][1] * m1->t[1][2] + m0->t[1][2] * m1->t[2][2] + m0->t[1][3] * m1->t[3][2]; 
        m.t[1][3] = m0->t[1][0] * m1->t[0][3] + m0->t[1][1] * m1->t[1][3] + m0->t[1][2] * m1->t[2][3] + m0->t[1][3] * m1->t[3][3];

        m.t[2][0] = m0->t[2][0] * m1->t[0][0] + m0->t[2][1] * m1->t[1][0] + m0->t[2][2] * m1->t[2][0] + m0->t[2][3] * m1->t[3][0]; 
        m.t[2][1] = m0->t[2][0] * m1->t[0][1] + m0->t[2][1] * m1->t[1][1] + m0->t[2][2] * m1->t[2][1] + m0->t[2][3] * m1->t[3][1]; 
        m.t[2][2] = m0->t[2][0] * m1->t[0][2] + m0->t[2][1] * m1->t[1][2] + m0->t[2][2] * m1->t[2][2] + m0->t[2][3] * m1->t[3][2]; 
        m.t[2][3] = m0->t[2][0] * m1->t[0][3] + m0->t[2][1] * m1->t[1][3] + m0->t[2][2] * m1->t[2][3] + m0->t[2][3] * m1->t[3][3];

        m.t[3][0] = m0->t[3][0] * m1->t[0][0] + m0->t[3][1] * m1->t[1][0] + m0->t[3][2] * m1->t[2][0] + m0->t[3][3] * m1->t[3][0]; 
        m.t[3][1] = m0->t[3][0] * m1->t[0][1] + m0->t[3][1] * m1->t[1][1] + m0->t[3][2] * m1->t[2][1] + m0->t[3][3] * m1->t[3][1]; 
        m.t[3][2] = m0->t[3][0] * m1->t[0][2] + m0->t[3][1] * m1->t[1][2] + m0->t[3][2] * m1->t[2][2] + m0->t[3][3] * m1->t[3][2]; 
        m.t[3][3] = m0->t[3][0] * m1->t[0][3] + m0->t[3][1] * m1->t[1][3] + m0->t[3][2] * m1->t[2][3] + m0->t[3][3] * m1->t[3][3];

        return m;
}

/** @brief Multiply a 4x4 matrix with a 4D vector and return a 4D vector. */
inline vec4 mat4x4_vec4_mult(const mat4x4 *m, const vec4 *v) {

        vec4 v1;

        v1.x = m->t[0][0] * v->x + m->t[0][1] * v->y + m->t[0][2] * v->z + m->t[0][3] * v->w; 
        v1.y = m->t[1][0] * v->x + m->t[1][1] * v->y + m->t[1][2] * v->z + m->t[1][3] * v->w; 
        v1.z = m->t[2][0] * v->x + m->t[2][1] * v->y + m->t[2][2] * v->z + m->t[2][3] * v->w; 
        v1.w = m->t[3][0] * v->x + m->t[3][1] * v->y + m->t[3][2] * v->z + m->t[3][3] * v->w; 

        return v1;
}