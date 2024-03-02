#include <math.h>
#include <emmintrin.h>

#include "../include/vector4.h"
#include "../include/types.h"
#include "../include/math_types.h"


/** @brief Transform a 2D vector into a 4D vector. */
inline vec4 vec4_create_from_vec2(const vec2 *v) {
        vec4 v1;
        v1.x = v->x;
        v1.y = v->y;
        v1.z = 0.0f;
        v1.w = 0.0f;
        return v1;
}
/** @brief Transform a 3D vector into a 4D vector. */
inline vec4 vec4_create_from_vec3(const vec3 *v) {
        vec4 v1;
        v1.x = v->x;
        v1.y = v->y;
        v1.z = v->z;
        v1.w = 0.0f;
        return v1;
}


/** @brief Add the 4D Vector with another 4D Vector. */
inline void vec4_add(vec4 *v, const vec4 *v1) {
        v->x += v1->x;
        v->y += v1->y;
        v->z += v1->z;
        v->w += v1->w;
}


/** @brief Subtract the 4D Vector with another 4D Vector. */
inline void vec4_sub(vec4 *v, const vec4 *v1) {
        v->x -= v1->x;
        v->y -= v1->y;
        v->z -= v1->z;
        v->w -= v1->w;
}


/** @brief Multiply the 4D Vector with the scalar. */
inline void vec4_scalar_mult(vec4 *v, const f32 s) {
        v->x *= s;
        v->y *= s;
        v->z *= s;
        v->w *= s;
}


/** @brief Devide the 4D Vector by the scalar on each component. */
inline void vec4_scalar_div(vec4 *v, f32 s) {
        s = 1.0f / s;
        v->x *= s;
        v->y *= s;
        v->z *= s;
        v->w *= s;
}


/** @brief Calculate the square root of the 4D Vector on each component. */
inline void vec4_square_root(vec4 *v) {
        v->x = sqrtf(v->x);
        v->y = sqrtf(v->y);
        v->z = sqrtf(v->z);
        v->w = sqrtf(v->w);
}


/** @brief Calculate the magnitude of the 4D Vector. */
inline f32 vec4_magnitude(const vec4 *v) {
        return sqrtf(v->x * v->x + v->y * v->y + v->z * v->z + v->w * v->w);
}


/** @brief Normalize the 4D Vector. */
inline void vec4_normalize(vec4 *v) {
        f32 m = vec4_magnitude(v);
        vec4_scalar_div(v, m);
}


/** @brief Create a dot product between the two 4D vectors. */
inline f32 vec4_dot(const vec4 *v, const vec4 *v1) {
        return (v->x * v1->x + v->y * v1->y + v->z * v1->z + v->w * v1->w);
}



// /***********************************
//  *                                 *
//  *                                 *
//  * @brief This is for SIMD SSE.    *
//  * WIP but works if you're willing *
//  * to use.                         *
//  *                                 *    
//  *                                 * 
//  **********************************/


// /** @brief SIMD SSE - Add the 4D Vector with another 4D Vector. */
// inline void vec4_sse_add(vec4 *v, vec4 *v1) {
//         __m128 v2 = _mm_set_ps(v->w, v->z, v->y, v->x);
//         __m128 v3 = _mm_set_ps(v1->w, v1->z, v1->y, v1->x);
//         __m128 r = _mm_add_ps(v2, v3);

//         _mm_store_ps((f32*)v, r);
// }


// /** @brief SIMD SSE - Subtract the 4D Vector with another 4D Vector. */
// inline void vec4_sse_sub(vec4 *v, const vec4 *v1) {
//         __m128 v2 = _mm_set_ps(v->w, v->z, v->y, v->x);
//         __m128 v3 = _mm_set_ps(v1->w, v1->z, v1->y, v1->x);
//         __m128 r = _mm_sub_ps(v2, v3);

//         _mm_store_ps((f32*)v, r);
// }


// /** @brief SIMD SSE - Multiply the 4D Vector with the scalar. */
// inline void vec4_sse_scalar_mult(vec4 *v, const f32 s) {
//         __m128 v1 = _mm_set_ps(v->w, v->z, v->y, v->x);
//         __m128 scalar = _mm_set1_ps(s);
//         __m128 r = _mm_mul_ps(v1, scalar);

//         _mm_store_ps((f32*)v, r);
// }


// /** @brief SIMD SSE - Devide the 4D Vector by the scalar on each component. */
// inline void vec4_sse_scalar_div(vec4 *v, const f32 s) {
//         __m128 v1 = _mm_set_ps(v->w, v->z, v->y, v->x);
//         __m128 scalar = _mm_set1_ps(1.0F / s);
//         __m128 r = _mm_mul_ps(v1, scalar);

//         _mm_store_ps((f32*)&v, r);
// }



// /** @brief SIMD SSE - Calculate the square root of the 4D Vector on each component. */
// inline void vec4_sse_square_root(vec4 *v) {
//         __m128 v1 = _mm_set_ps(v->w, v->z, v->y, v->x);
//         __m128 r = _mm_sqrt_ps(v1);

//         _mm_store_ps((f32*)v, r);
// }

    
// /** @brief SIMD SSE - Calculate the magnitude of the 4D Vector. */
// inline f32 vec4_sse_magnitude(vec4 *v) {
//         __m128 v1 = _mm_set_ps(v->w, v->z, v->y, v->x);
//         __m128 sq = _mm_mul_ps(v1, v1);

//         sq = _mm_add_ps(sq, _mm_movehl_ps(sq, sq));
//         sq = _mm_add_ss(sq, _mm_shuffle_ps(sq, sq, _MM_SHUFFLE(1, 1, 1, 1)));

//         __m128 r = _mm_sqrt_ss(sq);

//         f32 magnitude;
//         _mm_store_ss(&magnitude, r);
//         return magnitude;
// }


// /** @brief SIMD SSE - Normalize the 4D Vector. */
// inline void vec4_sse_normalize(vec4 *v) {
//         f32 m = vec4_sse_magnitude(v);
//         __m128 v1 = _mm_set_ps(v->w, v->z, v->y, v->x);
//         __m128 mag = _mm_set1_ps(m);
//         __m128 r = _mm_div_ps(v1, mag);

//         _mm_store_ps((f32*)v, r);
// }
