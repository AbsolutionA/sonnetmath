#include <math.h>
#include <emmintrin.h>

#include "../include/vector4.h"
#include "../include/types.h"
#include "../include/type_define.h"


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

/** @brief Add the 4 + 4 components and return a 4D Vector. */
inline vec4 vec4_addv(f32 a, f32 b, f32 c, f32 d, f32 x, f32 y, f32 z, f32 w) {
        vec4 v;
        v.x = a + x;
        v.y = b + y;
        v.z = c + z;
        v.w = d + w;
        return v;
}
/** @brief Add the 4D Vector with 4 components. */
inline void vec4_vadd(vec4 *v, f32 a, f32 b, f32 c, f32 w) {
        v->x += a;
        v->y += b;
        v->z += c;
        v->w += w;
}
/** @brief Add the 4D Vector with another 4D Vector. */
inline void vec4_vvadd(vec4 *v, const vec4 *v1) {
        v->x += v1->x;
        v->y += v1->y;
        v->z += v1->z;
        v->w += v1->w;
}


/** @brief Subtract the 4 + 4 components and return a 4D Vector. */
inline vec4 vec4_subv(f32 a, f32 b, f32 c, f32 d, f32 x, f32 y, f32 z, f32 w) {
        vec4 v;
        v.x = a - x;
        v.y = b - y;
        v.z = c - z;
        v.w = d - w;
        return v;
}
/** @brief Subtract the 4D Vector with the 4 components. */
inline void vec4_vsub(vec4 *v, f32 a, f32 b, f32 c, f32 w) {
        v->x -= a;
        v->y -= b;
        v->z -= c;
        v->w -= w;
}
/** @brief Subtract the 4D Vector with another 4D Vector. */
inline void vec4_vvsub(vec4 *v, const vec4 *v1) {
        v->x -= v1->x;
        v->y -= v1->y;
        v->z -= v1->z;
        v->w -= v1->w;
}


/** @brief Multiply the 4 components by the scalar and return a 4D Vector. */
inline vec4 vec4_scalar_multv(f32 a, f32 b, f32 c, f32 w, f32 s) {
        vec4 v;
        v.x = a * s;
        v.y = b * s;
        v.z = c * s;
        v.w = w * s;
        return v;
}
/** @brief Multiply the 4D Vector with the scalar. */
inline void vec4_scalar_vmult(vec4 *v, f32 s) {
        v->x *= s;
        v->y *= s;
        v->z *= s;
        v->w *= s;
}


/** @brief Devide the 4 components by the scalar and return a 4D Vector. */
inline vec4 vec4_scalar_divv(f32 a, f32 b, f32 c, f32 w, f32 s) {
        s = 1.0F / s;
        vec4 v;
        v.x = a * s;
        v.y = b * s;
        v.z = c * s;
        v.w = w * s;
        return v;
}
/** @brief Devide the 4D Vector by the scalar on each component. */
inline void vec4_scalar_vdiv(vec4 *v, f32 s) {
        s = 1.0f / s;
        v->x *= s;
        v->y *= s;
        v->z *= s;
        v->w *= s;
}


/** @brief Calculate the square root of each 4 components and return a 4D Vector. */
inline vec4 vec4_square_rootv(f32 a, f32 b, f32 c, f32 w) {
        vec4 v;
        v.x = sqrtf(a);
        v.y = sqrtf(b);
        v.z = sqrtf(c);
        v.w = sqrtf(w);
        return v;
}
/** @brief Calculate the square root of the 4D Vector on each component. */
inline void vec4_square_vroot(vec4 *v) {
        v->x = sqrtf(v->x);
        v->y = sqrtf(v->y);
        v->z = sqrtf(v->z);
        v->w = sqrtf(v->w);
}


/** @brief Calculate the magnitude with 4 components. */
inline f32 vec4_magv(f32 a, f32 b, f32 c, f32 w) {
        return sqrtf(a * a + b * b + c * c + w * w);
}       
/** @brief Calculate the magnitude of the 4D Vector. */
inline f32 vec4_vmag(const vec4 *v) {
        return sqrtf(v->x * v->x + v->y * v->y + v->z * v->z + v->w * v->w);
}


/** @brief Normalize the 4 components and return a 4D Vector. */
inline vec4 vec4_normalizev(f32 a, f32 b, f32 c, f32 w) {
        f32 m = vec4_magv(a, b, c, w);
        return vec4_scalar_divv(a, b, c, w, m);
}
/** @brief Normalize the 4D Vector. */
inline void vec4_vnormalize(vec4 *v) {
        f32 m = vec4_vmag(v);
        vec4_scalar_vdiv(v, m);
}


/** @brief Create a dot product between the 4 + 4 components. */
inline f32 vec4_dot(f32 a, f32 b, f32 c, f32 d, f32 x, f32 y, f32 z, f32 w) {
        return (a * x + b * y + c * z + d * w);
}
/** @brief Create a dot product with a 4D vector and 4 components. */
inline f32 vec4_vdot(const vec4 *v, f32 x, f32 y, f32 z, f32 w) {
        return (v->x * x + v->y * y + v->z * z + v->w * w);
}
/** @brief Create a dot product between the two 4D vectors. */
inline f32 vec4_vvdot(const vec4 *v, const vec4 *v1) {
        return (v->x * v1->x + v->y * v1->y + v->z * v1->z + v->w * v1->w);
}



/***********************************
 *                                 *
 *                                 *
 * @brief This is for SIMD SSE.    *
 * WIP but works if you're willing *
 * to use, but while testing no    *
 * change in performance.          *     
 **********************************/
/** |  |  |  |  |  |  |  |  |  |  |
 *  V  V  V  V  V  V  V  V  V  V  V
*/


/** @brief SIMD SSE - Add the 4 + 4 components and return a 4D Vector. */
inline vec4 sse_vec4_addv(f32 a, f32 b, f32 c, f32 d, f32 x, f32 y, f32 z, f32 w) {
        __m128 v1 = _mm_set_ps(d, c, b, a);
        __m128 v2 = _mm_set_ps(w, z, y, x);
        __m128 r = _mm_add_ps(v1, v2);

        vec4 v;
        _mm_store_ps((f32*)&v, r);
        return v;
}
/** @brief SIMD SSE - Add the 4D Vector with 4 components. */
inline void sse_vec4_vadd(vec4 *v, f32 a, f32 b, f32 c, f32 w) {
        __m128 v1 = _mm_set_ps(v->w, v->z, v->y, v->x);
        __m128 v2 = _mm_set_ps(w, c, b, a);
        __m128 r = _mm_add_ps(v1, v2);

        _mm_store_ps((f32*)v, r);
        
}
/** @brief SIMD SSE - Add the 4D Vector with another 4D Vector. */
inline void sse_vec4_vvadd(vec4 *v, vec4 *v1) {
        __m128 v2 = _mm_set_ps(v->w, v->z, v->y, v->x);
        __m128 v3 = _mm_set_ps(v1->w, v1->z, v1->y, v1->x);
        __m128 r = _mm_add_ps(v2, v3);

        _mm_store_ps((f32*)v, r);
}


/** @brief SIMD SSE - Subtract the 4 + 4 components and return a 4D Vector. */
inline vec4 sse_vec4_subv(f32 a, f32 b, f32 c, f32 d, f32 x, f32 y, f32 z, f32 w) {
        __m128 v1 = _mm_set_ps(d, c, b, a);
        __m128 v2 = _mm_set_ps(w, z, y, x);
        __m128 r = _mm_sub_ps(v1, v2);

        vec4 v;
        _mm_store_ps((f32*)&v, r);
        return v;
}
/** @brief SIMD SSE - Subtract the 4D Vector with the 4 components. */
inline void sse_vec4_vsub(vec4 *v, f32 a, f32 b, f32 c, f32 w) {
        __m128 v1 = _mm_set_ps(v->w, v->z, v->y, v->x);
        __m128 v2 = _mm_set_ps(w, c, b, a);
        __m128 r = _mm_sub_ps(v1, v2);

        _mm_store_ps((f32*)v, r);
} 
/** @brief SIMD SSE - Subtract the 4D Vector with another 4D Vector. */
inline void sse_vec4_vvsub(vec4 *v, vec4 *v1) {
        __m128 v2 = _mm_set_ps(v->w, v->z, v->y, v->x);
        __m128 v3 = _mm_set_ps(v1->w, v1->z, v1->y, v1->x);
        __m128 r = _mm_sub_ps(v2, v3);

        _mm_store_ps((f32*)v, r);
}


/** @brief SIMD SSE - Multiply the 4 components by the scalar and return a 4D Vector. */
inline vec4 sse_vec4_scalar_multv(f32 a, f32 b, f32 c, f32 w, f32 s) {
        __m128 v1 = _mm_set_ps(w, c, b, a);
        __m128 scalar = _mm_set1_ps(s);
        __m128 r = _mm_mul_ps(v1, scalar);

        vec4 v;
        _mm_store_ps((f32*)&v, r);
        return v;
        
}
/** @brief SIMD SSE - Multiply the 4D Vector with the scalar. */
inline void sse_vec4_scalar_vmult(vec4 *v, f32 s) {
        __m128 v1 = _mm_set_ps(v->w, v->z, v->y, v->x);
        __m128 scalar = _mm_set1_ps(s);
        __m128 r = _mm_mul_ps(v1, scalar);

        _mm_store_ps((f32*)v, r);
}


/** @brief SIMD SSE - Devide the 4 components by the scalar and return a 4D Vector. */
inline vec4 sse_vec4_scalar_divv(f32 a, f32 b, f32 c, f32 w, f32 s) {
        __m128 v1 = _mm_set_ps(w, c, b, a);
        __m128 scalar = _mm_set1_ps(1.0f / s);
        __m128 r = _mm_mul_ps(v1, scalar);

        vec4 v;
        _mm_store_ps((f32*)&v, r);
        return v;
}
/** @brief SIMD SSE - Devide the 4D Vector by the scalar on each component. */
inline void sse_vec4_scalar_vdiv(vec4 *v, f32 s) {
        __m128 v1 = _mm_set_ps(v->w, v->z, v->y, v->x);
        __m128 scalar = _mm_set1_ps(1.0F / s);
        __m128 r = _mm_mul_ps(v1, scalar);

        _mm_store_ps((f32*)&v, r);
}


/** @brief SIMD SSE - Calculate the square root of each 4 components and return a 4D Vector. */
inline vec4 sse_vec4_square_rootv(f32 a, f32 b, f32 c, f32 w) {
        __m128 v1 = _mm_set_ps(w, c, b, a);
        __m128 r = _mm_sqrt_ps(v1);

        vec4 v;
        _mm_store_ps((f32*)&v, r);
        return v;
}
/** @brief SIMD SSE - Calculate the square root of the 4D Vector on each component. */
inline void sse_vec4_square_vroot(vec4 *v) {
        __m128 v1 = _mm_set_ps(v->w, v->z, v->y, v->x);
        __m128 r = _mm_sqrt_ps(v1);

        _mm_store_ps((f32*)v, r);
}


/** @brief SIMD SSE - Calculate the magnitude with 4 components. */
inline f32 sse_vec4_magv(f32 a, f32 b, f32 c, f32 w) {
        __m128 v = _mm_set_ps(w, c, b, a);
        __m128 sq = _mm_mul_ps(v, v);

        sq = _mm_add_ps(sq, _mm_movehl_ps(sq, sq));
        sq = _mm_add_ss(sq, _mm_shuffle_ps(sq, sq, _MM_SHUFFLE(1, 1, 1, 1)));

        __m128 r = _mm_sqrt_ss(sq);

        f32 magnitude;
        _mm_store_ss(&magnitude, r);
        return magnitude;
}       
/** @brief SIMD SSE - Calculate the magnitude of the 4D Vector. */
inline f32 sse_vec4_vmag(vec4 *v) {
        __m128 v1 = _mm_set_ps(v->w, v->z, v->y, v->x);
        __m128 sq = _mm_mul_ps(v1, v1);

        sq = _mm_add_ps(sq, _mm_movehl_ps(sq, sq));
        sq = _mm_add_ss(sq, _mm_shuffle_ps(sq, sq, _MM_SHUFFLE(1, 1, 1, 1)));

        __m128 r = _mm_sqrt_ss(sq);

        f32 magnitude;
        _mm_store_ss(&magnitude, r);
        return magnitude;
}

/** @brief SIMD SSE - Normalize the 4 components and return a 4D Vector. */
inline vec4 sse_vec4_normalizev(f32 a, f32 b, f32 c, f32 w) {
        f32 m = sse_vec4_magv(a, b, c, w);
        __m128 v = _mm_set_ps(w, c, b, a);
        __m128 mag = _mm_set1_ps(m);
        __m128 r = _mm_div_ps(v, mag);

        vec4 normalized;
        _mm_store_ps((f32*)&normalized, r);
        return normalized;
}
/** @brief SIMD SSE - Normalize the 4D Vector. */
inline void sse_vec4_vnormalize(vec4 *v) {
        f32 m = sse_vec4_vmag(v);
        __m128 v1 = _mm_set_ps(v->w, v->z, v->y, v->x);
        __m128 mag = _mm_set1_ps(m);
        __m128 r = _mm_div_ps(v1, mag);

        _mm_store_ps((f32*)v, r);
}
