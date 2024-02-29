#include <math.h>

#include "../include/vector3.h"
#include "../include/types.h"
#include "../include/math_types.h"

/** @brief Transform a 2D vector into a 3D vector. */
inline vec3 vec3_create_from_vec2(const vec2 *v) {
        vec3 v1;
        v1.x = v->x;
        v1.y = v->y;
        v1.z = 0.0f;
        return v1;
}
/** @brief Transform a 4D vector into a 3D vector. */
inline vec3 vec3_create_from_vec4(const vec4 *v) {
        vec3 v1;
        v1.x = v->x;
        v1.y = v->y;
        v1.z = v->z;
        return v1;
}


/** @brief Add the 3D Vector with another 3D Vector. */
inline void vec3_add(vec3 *v, const vec3 *v1) {
        v->x += v1->x;
        v->y += v1->y;
        v->z += v1->z;
}


/** @brief Subtract the 3D Vector with another 3D Vector. */
inline void vec3_sub(vec3 *v, const vec3 *v1) {
        v->x -= v1->x;
        v->y -= v1->y;
        v->z -= v1->z;
}


/** @brief Multiply the 3D Vector with the scalar. */
inline void vec3_scalar_mult(vec3 *v, const f32 s) {
        v->x *= s;
        v->y *= s;
        v->z *= s;
}


/** @brief Devide the 3D Vector by the scalar on each component. */
inline void vec3_scalar_div(vec3 *v, f32 s) {
        s = 1.0F / s;
        v->x *= s;
        v->y *= s;
        v->z *= s;
}


/** @brief Calculate the square root of the 3D Vector on each component. */
inline void vec3_square_root(vec3 *v) {
        v->x = sqrtf(v->x);
        v->y = sqrtf(v->y);
        v->z = sqrtf(v->z);
}


/** @brief Calculate the magnitude of the 3D Vector. */
inline f32 vec3_magnitude(const vec3 *v) {
        return sqrtf(v->x * v->x + v->y * v->y + v->z * v->z);
}


/** @brief Normalize the 3D Vector. */
inline void vec3_normalize(vec3 *v) {
        f32 m = vec3_magnitude(v);
        vec3_scalar_div(v, m);
}


/** @brief Create a dot product between the two 3D vectors. */
inline f32 vec3_dot(const vec3 *v, const vec3 *v1) {
        return (v->x * v1->x + v->y * v1->y + v->z * v1->z);
}


/** @brief Create a cross product from 2 3D vectors and return a 3D vector. */
inline vec3 vec3_cross_product(const vec3 *v, const vec3 *v1) {
        
        vec3 v2;
        v2.x = v->y * v1->z - v->z * v1->y;
        v2.y = v->z * v1->x - v->x * v1->z;
        v2.z = v->x * v1->y - v->y * v1->x;

        return v2;
}


/** @brief Calculate the magnitude of the cross product with 2 3D vectors. */
inline f32 vec3_cross_product_magnitude(const vec3 *v, const vec3 *v1) {
        vec3 cp = vec3_cross_product(v, v1);
        f32 m = vec3_magnitude(&cp);

        return m;
}

/** @brief Calculate the vector triple product of 3 3D vectors. */
inline vec3 vec3_triple_product(const vec3 *v, const vec3 *v1, const vec3 *v2) {

        // bac
        f32 dotvv2 = vec3_dot(v, v2);
        // cab
        f32 dotvv1 = vec3_dot(v, v1);

        vec3 v3;
        // bac - cab
        v3.x = v1->x * dotvv2 - v2->x * dotvv1;
        v3.y = v1->y * dotvv2 - v2->y * dotvv1;
        v3.z = v1->z * dotvv2 - v2->z * dotvv1;

        return v3;
}

/** @brief Calculate the scalar triple product with 3 3D vectors and return an f32. */
inline f32 vec3_scalar_triple_product(const vec3 *v, const vec3 *v1, const vec3 *v2) {
        vec3 v3 = vec3_cross_product(v, v1);
        f32 dot = vec3_dot(v2, &v3);
        
        return dot;
}