#ifndef TYPES_H
#define TYPES_H

#include <stdint.h>
#include <assert.h>

// Unsigned Integers.

/** @brief 8-bit unsigned integer */
typedef uint8_t u8;

/** @brief 16-bit unsigned integer */
typedef uint16_t u16;

/** @brief 32-bit unsigned integer */
typedef uint32_t u32;

/** @brief 64-bit unsigned integer */
typedef uint64_t u64;

// Signed integers.

/** @brief 8-bit signed integer */
typedef int8_t i8;

/** @brief 16-bit signed integer */
typedef int16_t i16;

/** @brief 32-bit signed integer */
typedef int32_t i32;

/** @brief 64-bit signed integer */
typedef int64_t i64;


// Floats.

/** @brief 32-bit float */
typedef float f32; 

/** @brief 64-bit float */
typedef double f64; 



static_assert(sizeof(u8) == 1, "It has to be 8-bit. \n");
static_assert(sizeof(u16) == 2, "It has to be 16-bit. \n");
static_assert(sizeof(u32) == 4, "It has to be 32-bit. \n");
static_assert(sizeof(u64) == 8, "It has to be 64-bit. \n");

static_assert(sizeof(i8) == 1, "It has to be 8-bit. \n");
static_assert(sizeof(i16) == 2, "It has to be 16-bit. \n");
static_assert(sizeof(i32) == 4, "It has to be 32-bit. \n");
static_assert(sizeof(i64) == 8, "It has to be 64-bit. \n");


static_assert(sizeof(f32) == 4, "It has to be 32-bit. \n");
static_assert(sizeof(f64) == 8, "It has to be 64-bit. \n");

#endif