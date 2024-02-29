#ifndef VECTOR3_H
#define VECTOR3_H

#include "math_types.h"
#include "types.h"

/** @defgroup vec3_ Contains all of the 3D vector operations/functions.
 * @{ 
 */


/**
 * @brief Transform a 2D vector into a 3D vector. 
 * 
 * This is used to create a new 3D vector with values
 * of the 2D vector.
 * 
 * @param [*v] Takes a pointer to a vec2 input.
 * @return [vec3] Returns a 3D vector.
 * @note The new component (z) will be initialized with 0.
*/
extern vec3 vec3_create_from_vec2(const vec2 *v); 

/** 
 * @brief Transform a 4D vector into a 3D vector.
 * 
 * This is used to create a new 3D vector with values
 * of the 4D vector.
 * 
 * @param [*v] Takes a pointer to a vec4 input.
 * @return [vec3] Returns a 3D vector.
 * @note The last component of the 4D vector (w) is lost ofcourse.
 */
extern vec3 vec3_create_from_vec4(const vec4 *v); 

/** 
 * @brief Add a 3D vector to another 3D vector.
 * 
 * It will add the second 3D vector to the first 3D vector. 
 * 
 * @param [*v] Takes a pointer to a vec3.
 * @param [*v1] Takes a pointer to a vec3.
 * @note The first input will be modified.
 */
extern void vec3_add(vec3 *v, const vec3 *v1); 

/** 
 * @brief Subtract a 3D vector with another 3D vector. 
 * 
 * The first 3D vector will be subtracted by the second 3D vector.
 * 
 * @param [*v] Takes a pointer to a vec3.
 * @param [*v1] Takes a pointer to a vec3.
 * @note The first input will be modified.
 */
extern void vec3_sub(vec3 *v, const vec3 *v1); 

/** 
 * @brief Scalar multiplication with a 3D vector. 
 * 
 * Do multiplication with a scalar on all components of a 3D vector (x, y, z).
 * 
 * @param [*v] Takes a pointer to a vec3.
 * @param [s] Takes a float/f32 value.
 * @note The first input will be modified.
 */
extern void vec3_scalar_mult(vec3 *v, const f32 s); 

/** 
 * @brief Scalar division with a 3D vector. 
 * 
 * Do division with a scalar on all components of a 3D vector (x, y, z).
 * 
 * @param [*v] Takes a pointer to a vec3.
 * @param [s] Takes a float/f32 value.
 * @note The first input will be modified.
 */
extern void vec3_scalar_div(vec3 *v, f32 s); 

/** 
 * @brief Calculate the square root of the given 3D vector. 
 * 
 * Calculate the square root of a 3D vector on all components (x, y, z).
 * 
 * @param [*v] Takes a pointer to a vec3.
 * @note The first input will be modified.
 */
extern void vec3_square_root(vec3 *v); 

/** 
 * @brief Calculate the magnitude of the 3D vector. 
 * 
 * @param [*v] Takes a pointer to a vec3.
 * @return [float/f32] Returns the magnitude of the 3D vector.
 */
extern f32 vec3_magnitude(const vec3 *v); 

/** 
 * @brief Normalize the 3D vector. 
 * 
 * Will normalize the 3D vector on all components (x, y, z).
 * 
 * @param [*v] Takes a pointer to a vec3.
 * @note The first input will be modified.
 */
extern void vec3_normalize(vec3 *v); 

/** 
 * @brief Create a dot product between the two 3D vectors. 
 * 
 * @param [*v] Takes a pointer to a vec3.
 * @param [*v1] Takes a pointer to a vec3.
 * @return [float/f32]
 */ 
extern f32 vec3_dot(const vec3 *v, const vec3 *v1); 

/** 
 * @brief Create a cross product from two 3D vectors and return a 3D vector. 
 * 
 * @param [*v] Takes a pointer to a vec3.
 * @param [*v1] Takes a pointer to a vec3.
 * @return [vec3] Returns the cross product as a vec3.
 */
extern vec3 vec3_cross_product(const vec3 *v, const vec3 *v1); 

/** 
 * @brief Calculate the magnitude of the cross product with two 3D vectors. 
 * 
 * @param [*v] Takes a pointer to a vec3.
 * @param [*v1] Takes a pointer to a vec3.
 * @return [float/f32] Returns the magnitude of the cross product.
 */
extern f32 vec3_cross_product_magnitude(const vec3 *v, const vec3 *v1); 

/** 
 * @brief Calculate the vector triple product of three 3D vectors. 
 * 
 * @param [*v] Takes a pointer to a vec3.
 * @param [*v1] Takes a pointer to a vec3.
 * @param [*v2] Takes a pointer to a vec3.
 * @return [vec3] Returns the vector triple product as a vec3.
 */
extern vec3 vec3_triple_product(const vec3 *v, const vec3 *v1, const vec3 *v2); 

/** 
 * @brief Calculate the scalar triple product with three 3D vectors and return an f32. 
 * 
 * @param [*v] Takes a pointer to a vec3.
 * @param [*v1] Takes a pointer to a vec3.
 * @param [*v2] Takes a pointer to a vec3.
 * @return [float/f32] Returns the scalar triple product.
 */
extern f32 vec3_scalar_triple_product(const vec3 *v, const vec3 *v1, const vec3 *v2); 

/** @}*/

#endif // VECTOR3_H