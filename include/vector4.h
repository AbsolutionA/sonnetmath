#ifndef VECTOR4_H
#define VECTOR4_H

#include "math_types.h"
#include "types.h"

/** @defgroup vec4_ Contains all of the 4D vector operations/functions.
 * @{ 
 */


/**
 * @brief Transform a 2D vector into a 4D vector. 
 * 
 * This is used to create a new 4D vector with values
 * of the 2D vector.
 * 
 * @param [*v] Takes a pointer to a vec2 input.
 * @return [vec4] Returns a 4D vector.
 * @note The new components (z, w) will be initialized with 0.
*/
extern vec4 vec4_create_from_vec2(const vec2 *v); 

/** 
 * @brief Transform a 3D vector into a 4D vector.
 * 
 * This is used to create a new 4D vector with values
 * of the 2D vector.
 * 
 * @param [*v] Takes a pointer to a vec3 input.
 * @return [vec4] Returns a 4D vector.
 * @note The new component (w) will be initialized with 0.
 */
extern vec4 vec4_create_from_vec3(const vec3 *v);

/** 
 * @brief Add a 4D vector to another 4D vector.
 * 
 * It will add the second 4D vector to the first 4D vector. 
 * 
 * @param [*v] Takes a pointer to a vec4.
 * @param [*v1] Takes a pointer to a vec4.
 * @note The first input will be modified.
 */
extern void vec4_add(vec4 *v, const vec4 *v1); 

/** 
 * @brief Subtract a 4D vector with another 4D vector. 
 * 
 * The first 4D vector will be subtracted by the second 4D vector.
 * 
 * @param [*v] Takes a pointer to a vec4.
 * @param [*v1] Takes a pointer to a vec4.
 * @note The first input will be modified.
 */
extern void vec4_sub(vec4 *v, const vec4 *v1); 

/** 
 * @brief Scalar multiplication with a 4D vector. 
 * 
 * Do multiplication with a scalar on all components of a 4D vector (x, y, z, w).
 * 
 * @param [*v] Takes a pointer to a vec4.
 * @param [s] Takes a float/f32 value.
 * @note The first input will be modified.
 */
extern void vec4_scalar_mult(vec4 *v, const f32 s); 

/** 
 * @brief Scalar division with a 4D vector. 
 * 
 * Do division with a scalar on all components of a 4D vector (x, y, z, w).
 * 
 * @param [*v] Takes a pointer to a vec4.
 * @param [s] Takes a float/f32 value.
 * @note The first input will be modified.
 */
extern void vec4_scalar_div(vec4 *v, f32 s); 

/** 
 * @brief Calculate the square root of the given 4D vector. 
 * 
 * Calculate the square root of a 4D vector on all components (x, y, z, w).
 * 
 * @param [*v] Takes a pointer to a vec4.
 * @note The first input will be modified.
 */
extern void vec4_square_root(vec4 *v); 

/** 
 * @brief Calculate the magnitude of the 4D vector. 
 * 
 * @param [*v] Takes a pointer to a vec4.
 * @return [float/f32] Returns the magnitude of the 4D vector.
 */
extern f32 vec4_magnitude(const vec4 *v); 

/** 
 * @brief Normalize the 4D vector. 
 * 
 * Will normalize the 4D vector on all components (x, y, z, w).
 * 
 * @param [*v] Takes a pointer to a vec4.
 * @note The first input will be modified.
 */
extern void vec4_normalize(vec4 *v); 

/** 
 * @brief Create a dot product between the two 4D vectors. 
 * 
 * @param [*v] Takes a pointer to a vec4.
 * @param [*v1] Takes a pointer to a vec4.
 * @return [float/f32]
 */ 
extern f32 vec4_dot(const vec4 *v, const vec4 *v1); 



// Commented out for now.
// /** @brief Using SIMD SSE. WIP  */

// /** @brief Add a vector to another vector. */
// extern void vec4_sse_add(vec4 *v, vec4 *v1); 

// /** @brief Subtract a vector with another vector. */
// extern void vec4_sse_sub(vec4 *v, const vec4 *v1); 

// /** @brief Scalar multiplication with a vector. */
// extern void vec4_sse_scalar_mult(vec4 *v, const f32 s); 

// /** @brief Scalar division with a vector. */
// extern void vec4_sse_scalar_div(vec4 *v, const f32 s); 

// /** @brief Calculate the square root of the given vector. */
// extern void vec4_sse_square_root(vec4 *v); 

// /** @brief Calculate the magnitude of the vector. */
// extern f32 vec4_sse_magnitude(vec4 *v); 

// /** @brief Normalize the vector. */
// extern void vec4_sse_normalize(vec4 *v); 

/** @}*/


#endif // VECTOR4_H