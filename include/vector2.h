#ifndef VECTOR2_H
#define VECTOR2_H

#include "type_define.h"
#include "types.h"

/** @brief Transform a 3D vector into a 2D vector. */
extern vec2 vec2_create_from_vec3(const vec3 *v);
/** @brief Transform a 4D vector into a 2D vector. */
extern vec2 vec2_create_from_vec4(const vec4 *v);

// Add the f32s together and return a vector
extern vec2 vec2_addv(f32 a, f32 b, f32 x, f32 y);
// Add a vector with the given f32s
extern void vec2_vadd(vec2 *v, f32 a, f32 b);
// Add a vector to another vector
extern void vec2_vvadd(vec2 *v, const vec2 *v1);

// Subtract the f32s and return a vector
extern vec2 vec2_subv(f32 a, f32 b, f32 x, f32 y);
// Subtract a vector with the given f32s
extern void vec2_vsub(vec2 *v, f32 a, f32 b);
// Subtract a vector with another vector
extern void vec2_vvsub(vec2 *v, const vec2 *v1);

// Scalar multiplication that returns a vector
extern vec2 vec2_scalar_multv(f32 a, f32 b, f32 s);
// Scalar multiplication with a vector
extern void vec2_scalar_vmult(vec2 *v, f32 s);

// Scalar division with f32s and return a vector
extern vec2 vec2_scalar_divv(f32 a, f32 b, f32 s);
// Scalar division with a vector
extern void vec2_scalar_vdiv(vec2 *v, f32 s);

// Create a vector with f32s and do square root and return a vector
extern vec2 vec2_square_rootv(f32 a, f32 b);
// Calculate the square root of the given vector
extern void vec2_square_vroot(vec2 *v);

// Calculate the magnitude of the f32s
extern f32 vec2_magv(f32 a, f32 b);
// Calculate the magnitude of the vector
extern f32 vec2_vmag(const vec2 *v);

// Normalize the vector with f32s and return a vector
extern vec2 vec2_normalizev(f32 a, f32 b);
// Normalize the vector
extern void vec2_vnormalize(vec2 *v);

/** @brief Create a dot product between the 2 + 2 components. */
extern f32 vec2_dot(f32 a, f32 b, f32 x, f32 y);
/** @brief Create a dot product with a 2D vector and 2 components. */
extern f32 vec2_vdot(const vec2 *v, f32 x, f32 y);
/** @brief Create a dot product between the two 2D vectors. */
extern f32 vec2_vvdot(const vec2 *v, const vec2 *v1);

#endif // VECTOR2_H