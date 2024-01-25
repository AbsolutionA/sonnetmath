#include <math.h>

#include "../include/vector3.h"
#include "../include/types.h"
#include "../include/type_define.h"

/** @brief Transform a 2D vector into a 3D vector. */
inline vec3 vec3_create_from_vec2(const vec2 *v) {
        vec3 v1;
        v1.x = v->x;
        v1.y = v->y;
        v1.z = 0.0f;
        return v1;
}
/** @brief Transform a 4D vector into a 3D vector. */
inline vec3 vec3_create_from_vec3(const vec4 *v) {
        vec3 v1;
        v1.x = v->x;
        v1.y = v->y;
        v1.z = v->z;
        return v1;
}

/** @brief Add the 3 + 3 components and return a 3D Vector. */
inline vec3 vec3_addv(f32 a, f32 b, f32 c, f32 x, f32 y, f32 z) {
        vec3 v;
        v.x = a + x;
        v.y = b + y;
        v.z = c + z;
        return v;
}
/** @brief Add the 3D Vector with 3 components. */
inline void vec3_vadd(vec3 *v, f32 a, f32 b, f32 c) {
        v->x += a;
        v->y += b;
        v->z += c;
}
/** @brief Add the 3D Vector with another 3D Vector. */
inline void vec3_vvadd(vec3 *v, const vec3 *v1) {
        v->x += v1->x;
        v->y += v1->y;
        v->z += v1->z;
}


/** @brief Subtract the 3 + 3 components and return a 3D Vector. */
inline vec3 vec3_subv(f32 a, f32 b, f32 c, f32 x, f32 y, f32 z) {
        vec3 v;
        v.x = a - x;
        v.y = b - y;
        v.z = c - z;
        return v;
}
/** @brief Subtract the 3D Vector with the 3 components. */
inline void vec3_vsub(vec3 *v, f32 a, f32 b, f32 c) {
        v->x -= a;
        v->y -= b;
        v->z -= c;
}
/** @brief Subtract the 3D Vector with another 3D Vector. */
inline void vec3_vvsub(vec3 *v, const vec3 *v1) {
        v->x -= v1->x;
        v->y -= v1->y;
        v->z -= v1->z;
}


/** @brief Multiply the 3 components by the scalar and return a 3D Vector. */
inline vec3 vec3_scalar_multv(f32 a, f32 b, f32 c, f32 s) {
        vec3 v;
        v.x = a * s;
        v.y = b * s;
        v.z = c * s;
        return v;
}
/** @brief Multiply the 3D Vector with the scalar. */
inline void vec3_scalar_vmult(vec3 *v, f32 s) {
        v->x *= s;
        v->y *= s;
        v->z *= s;
}


/** @brief Devide the 3 components by the scalar and return a 3D Vector. */
inline vec3 vec3_scalar_divv(f32 a, f32 b, f32 c, f32 s) {
        s = 1.0F / s;
        vec3 v;
        v.x = a * s;
        v.y = b * s;
        v.z = c * s;
        return v;
}
/** @brief Devide the 3D Vector by the scalar on each component. */
inline void vec3_scalar_vdiv(vec3 *v, f32 s) {
        s = 1.0F / s;
        v->x *= s;
        v->y *= s;
        v->z *= s;
}


/** @brief Calculate the square root of each 3 components and return a 3D Vector. */
inline vec3 vec3_square_rootv(f32 a, f32 b, f32 c) {
        vec3 v;
        v.x = sqrtf(a);
        v.y = sqrtf(b);
        v.z = sqrtf(c);
        return v;
}
/** @brief Calculate the square root of the 3D Vector on each component. */
inline void vec3_square_vroot(vec3 *v) {
        v->x = sqrtf(v->x);
        v->y = sqrtf(v->y);
        v->z = sqrtf(v->z);
}


/** @brief Calculate the magnitude with 3 components. */
inline f32 vec3_magv(f32 a, f32 b, f32 c) {
        return sqrtf(a * a + b * b + c * c);
}
/** @brief Calculate the magnitude of the 3D Vector. */
inline f32 vec3_vmag(const vec3 *v) {
        return sqrtf(v->x * v->x + v->y * v->y + v->z * v->z);
}


/** @brief Normalize the 3 components and return a 3D Vector. */
inline vec3 vec3_normalizev(f32 a, f32 b, f32 c) {
        f32 m = vec3_magv(a, b, c);
        return vec3_scalar_divv(a, b, c, m);
}
/** @brief Normalize the 3D Vector. */
inline void vec3_vnormalize(vec3 *v) {
        f32 m = vec3_vmag(v);
        vec3_scalar_vdiv(v, m);
}


/** @brief Create a dot product between the 3 + 3 components. */
inline f32 vec3_dot(f32 a, f32 b, f32 c, f32 x, f32 y, f32 z) {
        return (a * x + b * y + c * z);
}
/** @brief Create a dot product with a 3D vector and 3 components. */
inline f32 vec3_vdot(const vec3 *v, f32 x, f32 y, f32 z) {
        return (v->x * x + v->y * y + v->z * z);
}
/** @brief Create a dot product between the two 3D vectors. */
inline f32 vec3_vvdot(const vec3 *v, const vec3 *v1) {
        return (v->x * v1->x + v->y * v1->y + v->z * v1->z);
}


/** @brief Create a cross product from 3 + 3 components and return a 3D vector. */
inline vec3 vec3_cross_productv(f32 a, f32 b, f32 c,
                               f32 x, f32 y, f32 z) {
        
        vec3 v;
        v.x = b * z - c * y;
        v.y = c * x - a * z;
        v.z = a * y - b * x;

        return v;
}
/** @brief Create a cross product from a 3D vector and 3 components and return a 3D vector. */
inline vec3 vec3_cross_vproduct(const vec3 *v,
                                f32 x, f32 y, f32 z) {
        
        vec3 v1;
        v1.x = v->y * z - v->z * y;
        v1.y = v->z * x - v->x * z;
        v1.z = v->x * y - v->y * x;

        return v1;
}
/** @brief Create a cross product from 2 3D vectors and return a 3D vector. */
inline vec3 vec3_cross_vvproduct(const vec3 *v, const vec3 *v1) {
        
        vec3 v2;
        v2.x = v->y * v1->z - v->z * v1->y;
        v2.y = v->z * v1->x - v->x * v1->z;
        v2.z = v->x * v1->y - v->y * v1->x;

        return v2;
}

/** @brief Calculate the magnitude of the cross product with 3 + 3 components. */
inline f32 vec3_cross_product_mag(f32 a, f32 b, f32 c, f32 x, f32 y, f32 z) {
        vec3 cp = vec3_cross_productv(a, b, c, x, y, z);
        f32 m = vec3_vmag(&cp);

        return m;
}
/** @brief Calculate the magnitude of the cross product with a 3D vector and 3 components. */
inline f32 vec3_cross_product_vmag(const vec3 *v, f32 x, f32 y, f32 z) {
        vec3 cp = vec3_cross_vproduct(v, x, y, z);
        f32 m = vec3_vmag(&cp);

        return m;
}
/** @brief Calculate the magnitude of the cross product with 2 3D vectors. */
inline f32 vec3_cross_product_vvmag(const vec3 *v, const vec3 *v1) {
        vec3 cp = vec3_cross_vvproduct(v, v1);
        f32 m = vec3_vmag(&cp);

        return m;
}

/** @brief Calculate the vector triple product of 3 3D vectors. */
inline vec3 vec3_triple_productv(const vec3 *v, const vec3 *v1, const vec3 *v2) {

        // bac
        f32 dotvv2 = vec3_vvdot(v, v2);
        // cab
        f32 dotvv1 = vec3_vvdot(v, v1);

        vec3 v3;
        // bac - cab
        v3.x = v1->x * dotvv2 - v2->x * dotvv1;
        v3.y = v1->y * dotvv2 - v2->y * dotvv1;
        v3.z = v1->z * dotvv2 - v2->z * dotvv1;

        return v3;
}

/** @brief Calculate the scalar triple product with 3 + 3 + 3 components and return an f32. */
inline f32 vec3_scalar_triple_productv(f32 a, f32 b, f32 c, f32 x, f32 y, f32 z, f32 x1, f32 y1, f32 z1) {
        vec3 v3 = vec3_cross_productv(a, b, c, x, y, z);
        f32 dot = vec3_vdot(&v3, x1, y1, z1);
        
        return dot;
}
/** @brief Calculate the scalar triple product with a 3D vector and 3 + 3 components and return an f32. */
inline f32 vec3_scalar_triple_vproduct(const vec3 *v, f32 x, f32 y, f32 z, f32 x1, f32 y1, f32 z1) {
        vec3 v3 = vec3_cross_vproduct(v, x, y, z);
        f32 dot = vec3_vdot(&v3, x1, y1, z1);
        
        return dot;
}
/** @brief Calculate the scalar triple product with 2 3D vectors and 3 components and return an f32. */
inline f32 vec3_scalar_triple_vvproduct(const vec3 *v, const vec3 *v1, f32 x1, f32 y1, f32 z1) {
        vec3 v3 = vec3_cross_vvproduct(v, v1);
        f32 dot = vec3_vdot(&v3, x1, y1, z1);
        
        return dot;
}
/** @brief Calculate the scalar triple product with 3 3D vectors and return an f32. */
inline f32 vec3_scalar_triple_vvvproduct(const vec3 *v, const vec3 *v1, const vec3 *v2) {
        vec3 v3 = vec3_cross_vvproduct(v, v1);
        f32 dot = vec3_vvdot(v2, &v3);
        
        return dot;
}