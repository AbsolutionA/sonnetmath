#include <math.h>

#include "../include/vector2.h"
#include "../include/types.h"
#include "../include/math_types.h"

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


/** @brief Add the 2D Vector with another 2D Vector. */
inline void vec2_add(vec2 *v, const vec2 *v1) {
        v->x += v1->x;
        v->y += v1->y;
}


/** @brief Subtract the 2D Vector with another 2D Vector. */
inline void vec2_sub(vec2 *v, const vec2 *v1) {
        v->x -= v1->x;
        v->y -= v1->y;
}


/** @brief Multiply the 2D Vector with the scalar. */
inline void vec2_scalar_mult(vec2 *v, const f32 s) {
        v->x *= s;
        v->y *= s;
}


/** @brief Devide the 2D Vector by the scalar on each component. */
inline void vec2_scalar_div(vec2 *v, f32 s) {
        s = 1.0F / s;
        v->x *= s;
        v->y *= s;
}


/** @brief Calculate the square root of the 2D Vector on each component. */
inline void vec2_square_root(vec2 *v) {
        v->x = sqrtf(v->x);
        v->y = sqrtf(v->y);
}


/** @brief Calculate the magnitude of the 2D Vector. */
inline f32 vec2_magnitude(const vec2 *v) {
        return sqrtf(v->x * v->x + v->y * v->y);
}


/** @brief Normalize the 2D Vector. */
inline void vec2_normalize(vec2 *v) {
        f32 m = vec2_magnitude(v);
        vec2_scalar_div(v, m);
}


/** @brief Create a dot product between the two 2D vectors. */
inline f32 vec2_dot(const vec2 *v, const vec2 *v1) {
        return (v->x * v1->x + v->y * v1->y);
}