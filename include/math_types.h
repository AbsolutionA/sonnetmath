#ifndef MATH_TYPES_H
#define MATH_TYPES_H

#include "types.h"



/** @brief A structure for representing 2D vectors */
typedef struct vec2 {
        f32 x, y;
} vec2;

/** @brief A structure for representing 3D vectors */
typedef struct vec3 {
        f32 x, y, z;
} vec3;

/** @brief A structure for representing 4D vectors */
typedef struct vec4 {
      f32 x, y, z, w;
} vec4;

// For SIMD purposes
// /** @brief A structure for representing 4D vectors */
// typedef struct __attribute__((aligned(16))) vec4 {
//       f32 x, y, z, w;
// } vec4;


#endif // MATH_TYPES_H