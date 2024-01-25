#include "../include/mat4x4.h"
#include "../include/types.h"
#include "../include/type_define.h"

/** @brief 4x4 Matrix - 
 *  m.t[n] => 0 = x, 1 = y, 2 = z, 3 = w;
*/
inline void mat4x4_parse(mat4x4 *dest,
                         f32 n00, f32 n01, f32 n02, f32 n03,
                         f32 n10, f32 n11, f32 n12, f32 n13,
                         f32 n20, f32 n21, f32 n22, f32 n23,
                         f32 n30, f32 n31, f32 n32, f32 n33) {

        dest->t[0][0] = n00;
        dest->t[0][1] = n10;
        dest->t[0][2] = n20;
        dest->t[0][3] = n30;

        dest->t[1][0] = n01;
        dest->t[1][1] = n11;
        dest->t[1][2] = n21;
        dest->t[1][3] = n31;
        
        dest->t[2][0] = n02;
        dest->t[2][1] = n12;
        dest->t[2][2] = n22;
        dest->t[2][3] = n32;

        dest->t[3][0] = n03;
        dest->t[3][1] = n13;
        dest->t[3][2] = n23;
        dest->t[3][3] = n33;
}


inline mat4x4 mat4x4_create(f32 n00, f32 n01, f32 n02, f32 n03,
                            f32 n10, f32 n11, f32 n12, f32 n13,
                            f32 n20, f32 n21, f32 n22, f32 n23,
                            f32 n30, f32 n31, f32 n32, f32 n33) {
        
        mat4x4 m;

        m.t[0][0] = n00;
        m.t[0][1] = n10;
        m.t[0][2] = n20;
        m.t[0][3] = n30;

        m.t[1][0] = n01;
        m.t[1][1] = n11;
        m.t[1][2] = n21;
        m.t[1][3] = n31;
        
        m.t[2][0] = n02;
        m.t[2][1] = n12;
        m.t[2][2] = n22;
        m.t[2][3] = n32;

        m.t[3][0] = n03;
        m.t[3][1] = n13;
        m.t[3][2] = n23;
        m.t[3][3] = n33;

        return m;
}


inline mat4x4 mat4x4_vcreate(const vec4 *v0,
                             f32 n10, f32 n11, f32 n12, f32 n13,
                             f32 n20, f32 n21, f32 n22, f32 n23,
                             f32 n30, f32 n31, f32 n32, f32 n33) {
        
        mat4x4 m;

        m.t[0][0] = v0->x;
        m.t[0][1] = n10;
        m.t[0][2] = n20;
        m.t[0][3] = n30;

        m.t[1][0] = v0->y;
        m.t[1][1] = n11;
        m.t[1][2] = n21;
        m.t[1][3] = n31;
        
        m.t[2][0] = v0->z;
        m.t[2][1] = n12;
        m.t[2][2] = n22;
        m.t[2][3] = n32;

        m.t[3][0] = v0->w;
        m.t[3][1] = n13;
        m.t[3][2] = n23;
        m.t[3][3] = n33;

        return m;
}


inline mat4x4 mat4x4_vvcreate(const vec4 *v0,
                              const vec4 *v1,
                              f32 n20, f32 n21, f32 n22, f32 n23,
                              f32 n30, f32 n31, f32 n32, f32 n33) {
        
        mat4x4 m;

        m.t[0][0] = v0->x;
        m.t[0][1] = v1->x;
        m.t[0][2] = n20;
        m.t[0][3] = n30;

        m.t[1][0] = v0->y;
        m.t[1][1] = v1->y;
        m.t[1][2] = n21;
        m.t[1][3] = n31;
        
        m.t[2][0] = v0->z;
        m.t[2][1] = v1->z;
        m.t[2][2] = n22;
        m.t[2][3] = n32;

        m.t[3][0] = v0->w;
        m.t[3][1] = v1->w;
        m.t[3][2] = n23;
        m.t[3][3] = n33;

        return m;
}


inline mat4x4 mat4x4_vvvcreate(const vec4 *v0,
                               const vec4 *v1,
                               const vec4 *v2,
                               f32 n30, f32 n31, f32 n32, f32 n33) {
        
        mat4x4 m;

        m.t[0][0] = v0->x;
        m.t[0][1] = v1->x;
        m.t[0][2] = v2->x;
        m.t[0][3] = n30;

        m.t[1][0] = v0->y;
        m.t[1][1] = v1->y;
        m.t[1][2] = v2->y;
        m.t[1][3] = n31;
        
        m.t[2][0] = v0->z;
        m.t[2][1] = v1->z;
        m.t[2][2] = v2->z;
        m.t[2][3] = n32;

        m.t[3][0] = v0->w;
        m.t[3][1] = v1->w;
        m.t[3][2] = v2->w;
        m.t[3][3] = n33;

        return m;
}


inline mat4x4 mat4x4_vvvvcreate(const vec4 *v0, 
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
inline vec4 mat4x4_multv(const mat4x4 *m, const vec4 *v) {

        vec4 v1;

        v1.x = m->t[0][0] * v->x + m->t[0][1] * v->y + m->t[0][2] * v->z + m->t[0][3] * v->w; 
        v1.y = m->t[1][0] * v->x + m->t[1][1] * v->y + m->t[1][2] * v->z + m->t[1][3] * v->w; 
        v1.z = m->t[2][0] * v->x + m->t[2][1] * v->y + m->t[2][2] * v->z + m->t[2][3] * v->w; 
        v1.w = m->t[3][0] * v->x + m->t[3][1] * v->y + m->t[3][2] * v->z + m->t[3][3] * v->w; 

        return v1;
}