# Built-in Math Functions in C

## Overview

This section covers built-in mathematical functions available in C's `math.h` library. These functions provide common mathematical operations like rounding, square roots, powers, and absolute values, saving you from writing these calculations manually.

## Topics Covered

- **ceil()**: Rounding up to the nearest integer
- **floor()**: Rounding down to the nearest integer
- **round()**: Rounding to the nearest integer
- **sqrt()**: Calculating square roots
- **pow()**: Computing powers (x^y)
- **abs()**: Finding absolute values

## What You'll Learn

- Using the `math.h` header file
- Rounding numbers using different methods
- Calculating square roots and powers
- Finding absolute values
- Understanding function parameters and return types
- Linking math library when compiling

## Key Concepts

### Including Math Library

```c
#include <math.h>
```

### Compilation Note

When using math functions, compile with the `-lm` flag:

```bash
gcc program.c -o program -lm
```

### Available Functions

- **ceil(x)**: Returns smallest integer >= x
- **floor(x)**: Returns largest integer <= x
- **round(x)**: Returns nearest integer to x
- **sqrt(x)**: Returns square root of x
- **pow(x, y)**: Returns x raised to power y
- **abs(x)**: Returns absolute value of x (for integers)

## Modules in This Section

1. **ceil**: Rounding up
2. **floor**: Rounding down
3. **round**: Rounding to nearest
4. **sqrt**: Square root calculation
5. **pow**: Power calculation
6. **abs**: Absolute value
