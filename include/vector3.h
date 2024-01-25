#ifndef VECTOR3_H
#define VECTOR3_H

#include "type_define.h"
#include "types.h"

/** @brief Transform a 2D vector into a 3D vector. */
extern vec3 vec3_create_from_vec2(const vec2 *v);
/** @brief Transform a 4D vector into a 3D vector. */
extern vec3 vec3_create_from_vec3(const vec4 *v);

// Add the f32s together and return a vector
extern vec3 vec3_addv(f32 a, f32 b, f32 c, f32 x, f32 y, f32 z);
// Add a vector with the given f32s
extern void vec3_vadd(vec3 *v, f32 a, f32 b, f32 c);
// Add a vector to another vector
extern void vec3_vvadd(vec3 *v, const vec3 *v1);

// Subtract the f32s and return a vector
extern vec3 vec3_subv(f32 a, f32 b, f32 c, f32 x, f32 y, f32 z);
// Subtract a vector with the given f32s
extern void vec3_vsub(vec3 *v, f32 a, f32 b, f32 c);
// Subtract a vector with another vector
extern void vec3_vvsub(vec3 *v, const vec3 *v1);

// Scalar multiplication that returns a vector
extern vec3 vec3_scalar_multv(f32 a, f32 b, f32 c, f32 s);
// Scalar multiplication with a vector
extern void vec3_scalar_vmult(vec3 *v, f32 s);

// Scalar division with f32s and return a vector
extern vec3 vec3_scalar_divv(f32 a, f32 b, f32 c, f32 s);
// Scalar division with a vector
extern void vec3_scalar_vdiv(vec3 *v, f32 s);

// Create a vector with f32s and do square root and return a vector
extern vec3 vec3_square_rootv(f32 a, f32 b, f32 c);
// Calculate the square root of the given vector
extern void vec3_square_vroot(vec3 *v);

// Calculate the magnitude of the f32s
extern f32 vec3_magv(f32 a, f32 b, f32 c);
// Calculate the magnitude of the vector
extern f32 vec3_vmag(const vec3 *v);

// Normalize the vector with f32s and return a vector
extern vec3 vec3_normalizev(f32 a, f32 b, f32 c);
// Normalize the vector
extern void vec3_vnormalize(vec3 *v);

/** @brief Create a dot product between the 3 + 3 components. */
extern f32 vec3_dot(f32 a, f32 b, f32 c,
                    f32 x, f32 y, f32 z);
/** @brief Create a dot product with a 3D vector and 3 components. */
extern f32 vec3_vdot(const vec3 *v, f32 x, f32 y, f32 z);
/** @brief Create a dot product between the two 3D vectors. */
extern f32 vec3_vvdot(const vec3 *v, const vec3 *v1);

/** @brief Create a cross product from 3 + 3 components and return a 3D vector. */
extern vec3 vec3_cross_product(f32 a, f32 b, f32 c,
                               f32 x, f32 y, f32 z);
/** @brief Create a cross product from a 3D vector and 3 components and return a 3D vector. */
extern vec3 vec3_cross_vproduct(const vec3 *v,
                                f32 x, f32 y, f32 z);
/** @brief Create a cross product from 2 3D vectors and return a 3D vector. */
extern vec3 vec3_cross_vvproduct(const vec3 *v, const vec3 *v1);

/** @brief Calculate the magnitude of the cross product with 3 + 3 components. */
extern f32 vec3_cross_product_mag(f32 a, f32 b, f32 c,
                                  f32 x, f32 y, f32 z);
/** @brief Calculate the magnitude of the cross product with a 3D vector and 3 components. */
extern f32 vec3_cross_product_vmag(const vec3 *v, f32 x, f32 y, f32 z);
/** @brief Calculate the magnitude of the cross product with 2 3D vectors. */
extern f32 vec3_cross_product_vvmag(const vec3 *v, const vec3 *v1);

/** @brief Calculate the vector triple product of 3 3D vectors. */
extern vec3 vec3_triple_product(const vec3 *v, const vec3 *v1, const vec3 *v2);

/** @brief Calculate the scalar triple product with 3 + 3 + 3 components and return an f32. */
extern f32 vec3_scalar_triple_productv(f32 a, f32 b, f32 c,
                                       f32 x, f32 y, f32 z, 
                                       f32 x1, f32 y1, f32 z1);
/** @brief Calculate the scalar triple product with a 3D vector and 3 + 3 components and return an f32. */
extern f32 vec3_scalar_triple_vproduct(const vec3 *v,
                                       f32 x, f32 y, f32 z,
                                       f32 x1, f32 y1, f32 z1);
/** @brief Calculate the scalar triple product with 2 3D vectors and 3 components and return an f32. */
extern f32 vec3_scalar_triple_vvproduct(const vec3 *v, const vec3 *v1,
                                        f32 x1, f32 y1, f32 z1);
/** @brief Calculate the scalar triple product with 3 3D vectors and return an f32. */
extern f32 vec3_scalar_triple_vvvproduct(const vec3 *v, const vec3 *v1, const vec3 *v2);

#endif // VECTOR3_H