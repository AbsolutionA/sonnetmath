#ifndef VECTOR2_H
#define VECTOR2_H

#include "math_types.h"
#include "types.h"

/** @defgroup vec2_ Contains all of the 2D vector operations/functions.
 * @{ 
 */


/**
 * @brief Transform a 3D vector into a 2D vector. 
 * 
 * This is used to create a new 2D vector with values
 * of the 3D vector.
 * 
 * @param [*v] Takes a pointer to a vec3 input.
 * @return [vec2] Returns a 2D vector.
 * @note The last component (z) of the 3D vector is lost ofcourse.
*/
extern vec2 vec2_create_from_vec3(const vec3 *v); 

/** 
 * @brief Transform a 4D vector into a 2D vector.
 * 
 * This is used to create a new 2D vector with values
 * of the 4D vector.
 * 
 * @param [*v] Takes a pointer to a vec4 input.
 * @return [vec2] Returns a 2D vector.
 * @note The last two components of the 4D vector (z, w) are lost ofcourse.
 */
extern vec2 vec2_create_from_vec4(const vec4 *v); 

/** 
 * @brief Add a 2D vector to another 2D vector.
 * 
 * It will add the second 2D vector to the first 2D vector. 
 * 
 * @param [*v] Takes a pointer to a vec2.
 * @param [*v1] Takes a pointer to a vec2.
 * @note The first input will be modified.
 */
extern void vec2_add(vec2 *v, const vec2 *v1);

/** 
 * @brief Subtract a 2D vector with another 2D vector. 
 * 
 * The first 2D vector will be subtracted by the second 2D vector.
 * 
 * @param [*v] Takes a pointer to a vec2.
 * @param [*v1] Takes a pointer to a vec2.
 * @note The first input will be modified.
 */
extern void vec2_sub(vec2 *v, const vec2 *v1);

/** 
 * @brief Scalar multiplication with a 2D vector. 
 * 
 * Do multiplication with a scalar on all components of a 2D vector (x, y).
 * 
 * @param [*v] Takes a pointer to a vec2.
 * @param [s] Takes a float/f32 value.
 * @note The first input will be modified.
 */
extern void vec2_scalar_mult(vec2 *v, f32 const s);

/** 
 * @brief Scalar division with a 2D vector. 
 * 
 * Do division with a scalar on all components of a 2D vector (x, y).
 * 
 * @param [*v] Takes a pointer to a vec2.
 * @param [s] Takes a float/f32 value.
 * @note The first input will be modified.
 */
extern void vec2_scalar_div(vec2 *v, f32 s);

/** 
 * @brief Calculate the square root of the given 2D vector. 
 * 
 * Calculate the square root of a 2D vector on all components (x, y).
 * 
 * @param [*v] Takes a pointer to a vec2.
 * @note The first input will be modified.
 */
extern void vec2_square_root(vec2 *v);

/** 
 * @brief Calculate the magnitude of the 2D vector. 
 * 
 * @param [*v] Takes a pointer to a vec2.
 * @return [float/f32] Returns the magnitude of the 2D vector.
 */
extern f32 vec2_magnitude(const vec2 *v);

/** 
 * @brief Normalize the 2D vector. 
 * 
 * Will normalize the 2D vector on all components (x, y).
 * 
 * @param [*v] Takes a pointer to a vec2.
 * @note The first input will be modified.
 */
extern void vec2_normalize(vec2 *v);

/** 
 * @brief Create a dot product between the two 2D vectors. 
 * 
 * @param [*v] Takes a pointer to a vec2.
 * @param [*v1] Takes a pointer to a vec2.
 * @return [float/f32]
 */ 
extern f32 vec2_dot(const vec2 *v, const vec2 *v1);

/** @}*/

#endif // VECTOR2_H