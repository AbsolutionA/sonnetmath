#ifndef TYPE_DEFINE_H
#define TYPE_DEFINE_H

#include "types.h"

// A structure for representing 2D vectors
typedef struct vec2 {
        f32 x, y;
} vec2;

// A structure for representing 3D vectors
typedef struct vec3 {
        f32 x, y, z;
} vec3;

// A structure for representing 4D vectors
typedef struct __attribute__((aligned(16))) vec4 {
      f32 x, y, z, w;
} vec4;


#endif // TYPE_DEFINE_H