# Square Root Function (sqrt) in C

## Overview

This program demonstrates the `sqrt()` function in C, which calculates the square root of a number. The square root of a number `x` is a value that, when multiplied by itself, gives `x`. The `sqrt()` function is part of the standard math library (`<math.h>`) and is essential for mathematical and scientific calculations.

## What You'll Learn

- How to use the `sqrt()` function
- Understanding square root operation
- Working with floating-point results
- Mathematical applications of square root
- Using the math library in C
- Handling perfect squares and non-perfect squares

## Complete Code

```c
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int ans = sqrt(16); // result : 4

    printf("%d", ans);

    return 0;
}
```

## Code Breakdown

### Step 1: Including Math Library

```c
#include <math.h>
```

**What happens:**
- Includes the standard math library
- Provides access to `sqrt()` and other mathematical functions
- Required for using `sqrt()`

### Step 2: Using sqrt() Function

```c
int ans = sqrt(16);
```

**Function Syntax:**
```c
double sqrt(double x);
```

**What happens:**
1. `sqrt(16)` is called with argument `16`
2. Function calculates: √16 = 4.0
3. Returns `4.0` (as double)
4. Value is assigned to `ans` (converted to int: `4`)

**Mathematical Operation:**
- `sqrt(16)` = 4 (because 4 × 4 = 16)
- Square root is the inverse operation of squaring

### Step 3: Displaying Result

```c
printf("%d", ans);
```

**Output:** `4`

## Understanding Square Root

### What is Square Root?

The **square root** of a number `x` is a number `y` such that `y × y = x` or `y² = x`.

**Mathematical Notation:** √x

### Examples

| Input | sqrt() Result | Verification        |
| ----- | ------------- | ------------------- |
| 16    | 4.0           | 4 × 4 = 16          |
| 25    | 5.0           | 5 × 5 = 25          |
| 9     | 3.0           | 3 × 3 = 9           |
| 100   | 10.0          | 10 × 10 = 100       |
| 2     | ~1.414        | 1.414 × 1.414 ≈ 2   |
| 5     | ~2.236        | 2.236 × 2.236 ≈ 5   |

### Perfect Squares vs Non-Perfect Squares

**Perfect Squares** (exact integer results):
- 1, 4, 9, 16, 25, 36, 49, 64, 81, 100, etc.
- `sqrt(16)` = 4.0 (exact)

**Non-Perfect Squares** (decimal results):
- 2, 3, 5, 7, 8, 10, 11, 12, etc.
- `sqrt(2)` ≈ 1.414213562 (approximate)

## Expected Output

```
4
```

**Explanation:** `sqrt(16)` calculates the square root of 16, which is 4 (since 4 × 4 = 16).

## Practical Examples

### Example 1: Perfect Squares

```c
#include <math.h>
#include <stdio.h>

int main()
{
    printf("sqrt(1) = %.0f\n", sqrt(1));    // 1
    printf("sqrt(4) = %.0f\n", sqrt(4));    // 2
    printf("sqrt(9) = %.0f\n", sqrt(9));     // 3
    printf("sqrt(16) = %.0f\n", sqrt(16));   // 4
    printf("sqrt(25) = %.0f\n", sqrt(25));   // 5
    printf("sqrt(36) = %.0f\n", sqrt(36));   // 6
    
    return 0;
}
```

**Output:**
```
sqrt(1) = 1
sqrt(4) = 2
sqrt(9) = 3
sqrt(16) = 4
sqrt(25) = 5
sqrt(36) = 6
```

### Example 2: Non-Perfect Squares

```c
#include <math.h>
#include <stdio.h>

int main()
{
    printf("sqrt(2) = %.6f\n", sqrt(2));    // 1.414214
    printf("sqrt(3) = %.6f\n", sqrt(3));    // 1.732051
    printf("sqrt(5) = %.6f\n", sqrt(5));    // 2.236068
    printf("sqrt(7) = %.6f\n", sqrt(7));    // 2.645751
    printf("sqrt(10) = %.6f\n", sqrt(10));   // 3.162278
    
    return 0;
}
```

**Output:**
```
sqrt(2) = 1.414214
sqrt(3) = 1.732051
sqrt(5) = 2.236068
sqrt(7) = 2.645751
sqrt(10) = 3.162278
```

### Example 3: Distance Calculation

```c
#include <math.h>
#include <stdio.h>

int main()
{
    int x1 = 0, y1 = 0;
    int x2 = 3, y2 = 4;
    
    // Distance formula: √((x2-x1)² + (y2-y1)²)
    double dx = x2 - x1;  // 3
    double dy = y2 - y1;  // 4
    double distance = sqrt(dx * dx + dy * dy);
    
    printf("Point 1: (%d, %d)\n", x1, y1);
    printf("Point 2: (%d, %d)\n", x2, y2);
    printf("Distance: %.2f\n", distance);  // 5.00
    
    return 0;
}
```

**Output:**
```
Point 1: (0, 0)
Point 2: (3, 4)
Distance: 5.00
```

**Explanation:** √(3² + 4²) = √(9 + 16) = √25 = 5

### Example 4: Area of Circle from Radius

```c
#include <math.h>
#include <stdio.h>

int main()
{
    double radius = 5.0;
    double area = 3.14159 * radius * radius;
    
    // Given area, find radius
    double calculatedRadius = sqrt(area / 3.14159);
    
    printf("Original radius: %.2f\n", radius);
    printf("Area: %.2f\n", area);
    printf("Calculated radius: %.2f\n", calculatedRadius);
    
    return 0;
}
```

### Example 5: Checking Perfect Square

```c
#include <math.h>
#include <stdio.h>

int main()
{
    int number = 25;
    double root = sqrt(number);
    int intRoot = (int)root;
    
    if (intRoot * intRoot == number) {
        printf("%d is a perfect square\n", number);
        printf("Square root: %d\n", intRoot);
    } else {
        printf("%d is not a perfect square\n", number);
        printf("Square root: %.6f\n", root);
    }
    
    return 0;
}
```

## How to Compile and Run

### Compilation

```bash
gcc sqrt.c -o sqrt -lm
```

**Important:** Add `-lm` flag to link the math library!

### Execution

```bash
./sqrt
```

### Expected Output

```
4
```

## Common Beginner Mistakes

### 1. Forgetting to Link Math Library

```c
// ❌ Wrong compilation - missing -lm flag
gcc sqrt.c -o sqrt
// Error: undefined reference to 'sqrt'

// ✅ Correct - add -lm flag
gcc sqrt.c -o sqrt -lm
```

### 2. Negative Input

```c
// ❌ Wrong - sqrt of negative number is undefined
int ans = sqrt(-16);  // May return NaN (Not a Number)

// ✅ Correct - use non-negative numbers
int ans = sqrt(16);
```

### 3. Type Mismatch

```c
// ⚠️ Warning - sqrt returns double, not int
int ans = sqrt(16);  // Works but loses precision for non-perfect squares

// ✅ Better - use double for precision
double ans = sqrt(16);
// or for perfect squares
int ans = (int)sqrt(16);
```

### 4. Confusing sqrt() with pow()

```c
// sqrt() finds square root
sqrt(16);    // 4.0 (what number squared equals 16?)

// pow() raises to power
pow(4, 2);   // 16.0 (4 squared)
```

## Mathematical Applications

### Application 1: Pythagorean Theorem

```c
double pythagorean(double a, double b)
{
    return sqrt(a * a + b * b);  // c = √(a² + b²)
}
```

### Application 2: Standard Deviation

```c
double calculateStdDev(double values[], int n)
{
    // Calculate mean first, then standard deviation
    // sqrt(variance)
    // Implementation...
}
```

### Application 3: Vector Magnitude

```c
double vectorMagnitude(double x, double y, double z)
{
    return sqrt(x * x + y * y + z * z);
}
```

## Best Practices

### 1. Check for Negative Input

```c
double safeSqrt(double value)
{
    if (value < 0) {
        printf("Error: Cannot calculate square root of negative number\n");
        return -1;  // Error indicator
    }
    return sqrt(value);
}
```

### 2. Use Appropriate Precision

```c
// For perfect squares
int root = (int)sqrt(16);  // 4

// For non-perfect squares
double root = sqrt(2);     // 1.414213562
printf("%.6f\n", root);
```

### 3. Combine with Other Operations

```c
// Calculate distance
double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
```

## Key Takeaways

- `sqrt()` calculates the square root of a number
- Requires `#include <math.h>` and `-lm` compilation flag
- Returns `double` (use `int` cast for perfect squares)
- Input must be non-negative (undefined for negatives)
- Perfect squares give exact integer results
- Non-perfect squares give decimal approximations
- Essential for geometry, physics, and mathematical calculations

## Next Steps

After mastering `sqrt()`, continue with:

1. **pow()** - Function for exponentiation
2. **Other Math Functions** - ceil(), floor(), round(), abs(), etc.
3. **Complex Calculations** - Combining multiple math functions

Understanding `sqrt()` is essential for mathematical programming, especially in geometry, physics, statistics, and any field requiring root calculations!

