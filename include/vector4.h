#ifndef VECTOR4_H
#define VECTOR4_H

#include "type_define.h"
#include "types.h"

/** @brief No using SIMD SSE. */


// TODO: Update documentation.

/** @brief Transform a 2D vector into a 4D vector. */
extern vec4 vec4_create_from_vec2(const vec2 *v);
/** @brief Transform a 3D vector into a 4D vector. */
extern vec4 vec4_create_from_vec3(const vec3 *v);

// Add the f32s together and return a vector.
extern vec4 vec4_addv(f32 a, f32 b, f32 c, f32 d,
                      f32 x, f32 y, f32 z, f32 w);
// Add a vector with the given f32s.
extern void vec4_vadd(vec4 *v, f32 a, f32 b, f32 c, f32 w);
// Add a vector to another vector.
extern void vec4_vvadd(vec4 *v, const vec4 *v1);

// Subtract the f32s and return a vector.
extern vec4 vec4_subv(f32 a, f32 b, f32 c, f32 d,
                      f32 x, f32 y, f32 z, f32 w);
// Subtract a vector with the given f32s.
extern void vec4_vsub(vec4 *v, f32 a, f32 b, f32 c, f32 w);
// Subtract a vector with another vector.
extern void vec4_vvsub(vec4 *v, const vec4 *v1);

// Scalar multiplication that returns a vector.
extern vec4 vec4_scalar_multv(f32 a, f32 b, f32 c, f32 w, f32 s);
// Scalar multiplication with a vector.
extern void vec4_scalar_vmult(vec4 *v, f32 s);

// Scalar division with f32s and return a vector.
extern vec4 vec4_scalar_divv(f32 a, f32 b, f32 c, f32 w, f32 s);
// Scalar division with a vector.
extern void vec4_scalar_vdiv(vec4 *v, f32 s);

// Create a vector with f32s and do square root and return a vector.
extern vec4 vec4_square_rootv(f32 a, f32 b, f32 c, f32 w);
// Calculate the square root of the given vector.
extern void vec4_square_vroot(vec4 *v);

// Calculate the magnitude of the f32s.
extern f32 vec4_magv(f32 a, f32 b, f32 c, f32 w);
// Calculate the magnitude of the vector.
extern f32 vec4_vmag(const vec4 *v);

// Normalize the vector with f32s and return a vector.
extern vec4 vec4_normalizev(f32 a, f32 b, f32 c, f32 w);
// Normalize the vector.
extern void vec4_vnormalize(vec4 *v);

// Create a dot product between the 4 + 4 components. 
extern f32 vec4_dot(f32 a, f32 b, f32 c, f32 d,
                    f32 x, f32 y, f32 z, f32 w);
// Create a dot product with a 4D vector and floats. 
extern f32 vec4_vdot(const vec4 *v, f32 x, f32 y, f32 z, f32 w);
/** @brief Create a dot product between the two 4D vectors. */ 
extern f32 vec4_vvdot(const vec4 *v, const vec4 *v1);


/** @brief Using SIMD SSE. */


// Add the f32s together and return a vector.
extern vec4 sse_vec4_addv(f32 a, f32 b, f32 c, f32 d,
                          f32 x, f32 y, f32 z, f32 w);
// Add a vector with the given f32s.
extern void sse_vec4_vadd(vec4 *v, f32 a, f32 b, f32 c, f32 w);
// Add a vector to another vector.
extern void sse_vec4_vvadd(vec4 *v, vec4 *v1);

// Subtract the f32s and return a vector.
extern vec4 sse_vec4_subv(f32 a, f32 b, f32 c, f32 d,
                          f32 x, f32 y, f32 z, f32 w);
// Subtract a vector with the given f32s.
extern void sse_vec4_vsub(vec4 *v, f32 a, f32 b, f32 c, f32 w);
// Subtract a vector with another vector.
extern void sse_vec4_vvsub(vec4 *v, vec4 *v1);

// Scalar multiplication that returns a vector.
extern vec4 sse_vec4_scalar_multv(f32 a, f32 b, f32 c, f32 w, f32 s);
// Scalar multiplication with a vector.
extern void sse_vec4_scalar_vmult(vec4 *v, f32 s);

// Scalar division with f32s and return a vector.
extern vec4 sse_vec4_scalar_divv(f32 a, f32 b, f32 c, f32 w, f32 s);
// Scalar division with a vector.
extern void sse_vec4_scalar_vdiv(vec4 *v, f32 s);


// Create a vector with f32s and do square root and return a vector.
extern vec4 sse_vec4_square_rootv(f32 a, f32 b, f32 c, f32 w);
// Calculate the square root of the given vector.
extern void sse_vec4_square_vroot(vec4 *v);

// Calculate the magnitude of the f32s.
extern f32 sse_vec4_magv(f32 a, f32 b, f32 c, f32 w);
// Calculate the magnitude of the vector.
extern f32 sse_vec4_vmag(vec4 *v);

// Normalize the vector with f32s and return a vector.
extern vec4 sse_vec4_normalizev(f32 a, f32 b, f32 c, f32 w);
// Normalize the vector.
extern void sse_vec4_vnormalize(vec4 *v);


#endif // VECTOR4_H