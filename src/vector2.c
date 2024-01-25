#include <math.h>

#include "../include/vector2.h"
#include "../include/types.h"
#include "../include/type_define.h"

/** @brief Transform a 3D vector into a 2D vector. */
inline vec2 vec2_create_from_vec3(const vec3 *v) {
        vec2 v1;
        v1.x = v->x;
        v1.y = v->y;
        return v1;
}
/** @brief Transform a 4D vector into a 2D vector. */
inline vec2 vec2_create_from_vec4(const vec4 *v) {
        vec2 v1;
        v1.x = v->x;
        v1.y = v->y;
        return v1;
}

/** @brief Add the 2 + 2 components and return a 2D Vector. */
inline vec2 vec2_addv(f32 a, f32 b, f32 x, f32 y) {
        vec2 v;
        v.x = a + x;
        v.y = b + y;
        return v;
}
/** @brief Add the 2D Vector with 2 components. */
inline void vec2_vadd(vec2 *v, f32 a, f32 b) {
        v->x += a;
        v->y += b;
}
/** @brief Add the 2D Vector with another 2D Vector. */
inline void vec2_vvadd(vec2 *v, const vec2 *v1) {
        v->x += v1->x;
        v->y += v1->y;
}


/** @brief Subtract the 2 + 2 components and return a 2D Vector. */
inline vec2 vec2_subv(f32 a, f32 b, f32 x, f32 y) {
        vec2 v;
        v.x = a - x;
        v.y = b - y;
        return v;
}
/** @brief Subtract the 2D Vector with the 2 components. */
inline void vec2_vsub(vec2 *v, f32 a, f32 b) {
        v->x -= a;
        v->y -= b;
}
/** @brief Subtract the 2D Vector with another 2D Vector. */
inline void vec2_vvsub(vec2 *v, const vec2 *v1) {
        v->x -= v1->x;
        v->y -= v1->y;
}


/** @brief Multiply the 2 components by the scalar and return a 2D Vector. */
inline vec2 vec2_scalar_multv(f32 a, f32 b, f32 s) {
        vec2 v;
        v.x = a * s;
        v.y = b * s;
        return v;
}
/** @brief Multiply the 2D Vector with the scalar. */
inline void vec2_scalar_vmult(vec2 *v, f32 s) {
        v->x *= s;
        v->y *= s;
}


/** @brief Devide the 2 components by the scalar and return a 2D Vector. */
inline vec2 vec2_scalar_divv(f32 a, f32 b, f32 s) {
        s = 1.0F / s;
        vec2 v;
        v.x = a * s;
        v.y = b * s;
        return v;
}
/** @brief Devide the 2D Vector by the scalar on each component. */
inline void vec2_scalar_vdiv(vec2 *v, f32 s) {
        s = 1.0F / s;
        v->x *= s;
        v->y *= s;
}


/** @brief Calculate the square root of each 2 components and return a 2D Vector. */
inline vec2 vec2_square_rootv(f32 a, f32 b) {
        vec2 v;
        v.x = sqrtf(a);
        v.y = sqrtf(b);
        return v;
}
/** @brief Calculate the square root of the 2D Vector on each component. */
inline void vec2_square_vroot(vec2 *v) {
        v->x = sqrtf(v->x);
        v->y = sqrtf(v->y);
}


/** @brief Calculate the magnitude with 2 components. */
inline f32 vec2_magv(f32 a, f32 b) {
        return sqrtf(a * a + b * b);
}
/** @brief Calculate the magnitude of the 2D Vector. */
inline f32 vec2_vmag(const vec2 *v) {
        return sqrtf(v->x * v->x + v->y * v->y);
}


/** @brief Normalize the 2 components and return a 2D Vector. */
inline vec2 vec2_normalizev(f32 a, f32 b) {
        f32 m = vec2_magv(a, b);
        return vec2_scalar_divv(a, b, m);
}
/** @brief Normalize the 2D Vector. */
inline void vec2_vnormalize(vec2 *v) {
        f32 m = vec2_vmag(v);
        vec2_scalar_vdiv(v, m);
}


/** @brief Create a dot product between the 2 + 2 components. */
inline f32 vec2_dot(f32 a, f32 b, f32 x, f32 y) {
        return (a * x + b * y);
}
/** @brief Create a dot product with a 2D vector and 2 components. */
inline f32 vec2_vdot(const vec2 *v, f32 x, f32 y) {
        return (v->x * x + v->y * y);
}
/** @brief Create a dot product between the two 2D vectors. */
inline f32 vec2_vvdot(const vec2 *v, const vec2 *v1) {
        return (v->x * v1->x + v->y * v1->y);
}