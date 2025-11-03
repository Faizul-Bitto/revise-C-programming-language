# Power Function (pow) in C

## Overview

This program demonstrates the `pow()` function in C, which calculates a number raised to a power (exponentiation). The `pow()` function computes `base^exponent`, which means multiplying the base by itself exponent times. This function is part of the standard math library (`<math.h>`) and is essential for mathematical calculations involving powers and exponents.

## What You'll Learn

- How to use the `pow()` function
- Understanding exponentiation operation
- Working with power calculations
- Mathematical applications of pow()
- Using the math library in C
- Calculating squares, cubes, and higher powers

## Complete Code

```c
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int ans = pow(2, 2); // result : 2^2 = 4

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
- Provides access to `pow()` and other mathematical functions
- Required for using `pow()`

### Step 2: Using pow() Function

```c
int ans = pow(2, 2);
```

**Function Syntax:**
```c
double pow(double base, double exponent);
```

**What happens:**
1. `pow(2, 2)` is called with arguments: `base = 2`, `exponent = 2`
2. Function calculates: 2² = 2 × 2 = 4.0
3. Returns `4.0` (as double)
4. Value is assigned to `ans` (converted to int: `4`)

**Mathematical Operation:**
- `pow(2, 2)` = 2² = 4
- `pow(2, 3)` = 2³ = 8
- `pow(2, 4)` = 2⁴ = 16

### Step 3: Displaying Result

```c
printf("%d", ans);
```

**Output:** `4`

## Understanding Power Function

### What is Exponentiation?

**Exponentiation** means raising a base number to a power (exponent).

**Mathematical Notation:** base^exponent or base^exp

**Meaning:** Multiply base by itself exponent times.

### Examples

| Base | Exponent | pow() Result | Calculation        |
| ---- | -------- | ------------ | ------------------ |
| 2    | 2        | 4.0          | 2 × 2 = 4          |
| 2    | 3        | 8.0          | 2 × 2 × 2 = 8      |
| 2    | 4        | 16.0         | 2 × 2 × 2 × 2 = 16 |
| 3    | 2        | 9.0          | 3 × 3 = 9          |
| 3    | 3        | 27.0         | 3 × 3 × 3 = 27     |
| 5    | 2        | 25.0         | 5 × 5 = 25         |
| 10   | 3        | 1000.0       | 10 × 10 × 10 = 1000|

### Special Cases

| Base | Exponent | pow() Result | Explanation        |
| ---- | -------- | ------------ | ------------------ |
| Any  | 0        | 1.0          | Any number^0 = 1    |
| Any  | 1        | base         | Any number^1 = itself |
| 1    | Any      | 1.0          | 1^anything = 1     |
| 0    | Positive | 0.0          | 0^positive = 0     |
| 0    | 0        | 1.0          | 0^0 = 1 (defined)  |

## Expected Output

```
4
```

**Explanation:** `pow(2, 2)` calculates 2 raised to the power of 2, which is 2 × 2 = 4.

## Practical Examples

### Example 1: Squares (Power of 2)

```c
#include <math.h>
#include <stdio.h>

int main()
{
    printf("pow(2, 2) = %.0f\n", pow(2, 2));   // 4
    printf("pow(3, 2) = %.0f\n", pow(3, 2));   // 9
    printf("pow(4, 2) = %.0f\n", pow(4, 2));   // 16
    printf("pow(5, 2) = %.0f\n", pow(5, 2));   // 25
    printf("pow(10, 2) = %.0f\n", pow(10, 2));  // 100
    
    return 0;
}
```

**Output:**
```
pow(2, 2) = 4
pow(3, 2) = 9
pow(4, 2) = 16
pow(5, 2) = 25
pow(10, 2) = 100
```

### Example 2: Cubes (Power of 3)

```c
#include <math.h>
#include <stdio.h>

int main()
{
    printf("pow(2, 3) = %.0f\n", pow(2, 3));   // 8
    printf("pow(3, 3) = %.0f\n", pow(3, 3));   // 27
    printf("pow(4, 3) = %.0f\n", pow(4, 3));   // 64
    printf("pow(5, 3) = %.0f\n", pow(5, 3));   // 125
    
    return 0;
}
```

**Output:**
```
pow(2, 3) = 8
pow(3, 3) = 27
pow(4, 3) = 64
pow(5, 3) = 125
```

### Example 3: Powers of 10

```c
#include <math.h>
#include <stdio.h>

int main()
{
    printf("pow(10, 0) = %.0f\n", pow(10, 0));  // 1
    printf("pow(10, 1) = %.0f\n", pow(10, 1));  // 10
    printf("pow(10, 2) = %.0f\n", pow(10, 2));  // 100
    printf("pow(10, 3) = %.0f\n", pow(10, 3));  // 1000
    printf("pow(10, 4) = %.0f\n", pow(10, 4));  // 10000
    
    return 0;
}
```

### Example 4: Compound Interest

```c
#include <math.h>
#include <stdio.h>

int main()
{
    double principal = 1000.0;
    double rate = 0.05;  // 5% annual interest
    int years = 10;
    
    // Formula: A = P(1 + r)^t
    double amount = principal * pow(1 + rate, years);
    
    printf("Principal: $%.2f\n", principal);
    printf("Rate: %.1f%%\n", rate * 100);
    printf("Years: %d\n", years);
    printf("Final amount: $%.2f\n", amount);
    
    return 0;
}
```

**Output:**
```
Principal: $1000.00
Rate: 5.0%
Years: 10
Final amount: $1628.89
```

### Example 5: Area and Volume Calculations

```c
#include <math.h>
#include <stdio.h>

int main()
{
    double side = 5.0;
    
    // Area of square: side^2
    double area = pow(side, 2);
    
    // Volume of cube: side^3
    double volume = pow(side, 3);
    
    printf("Side length: %.1f\n", side);
    printf("Area of square: %.1f\n", area);      // 25.0
    printf("Volume of cube: %.1f\n", volume);    // 125.0
    
    return 0;
}
```

## How to Compile and Run

### Compilation

```bash
gcc pow.c -o pow -lm
```

**Important:** Add `-lm` flag to link the math library!

### Execution

```bash
./pow
```

### Expected Output

```
4
```

## Common Beginner Mistakes

### 1. Forgetting to Link Math Library

```c
// ❌ Wrong compilation - missing -lm flag
gcc pow.c -o pow
// Error: undefined reference to 'pow'

// ✅ Correct - add -lm flag
gcc pow.c -o pow -lm
```

### 2. Wrong Argument Order

```c
// ❌ Wrong - arguments reversed
pow(2, 2);  // This is correct: 2^2 = 4

// pow(exponent, base) would be wrong!
```

### 3. Type Mismatch

```c
// ⚠️ Warning - pow returns double, not int
int ans = pow(2, 2);  // Works for integer results

// ✅ Better - use double for precision
double ans = pow(2, 2);
// or for integer powers
int ans = (int)pow(2, 2);
```

### 4. Using ^ Instead of pow()

```c
// ❌ Wrong - ^ is bitwise XOR, not exponentiation
int result = 2 ^ 2;  // This is 0 (XOR operation), not 4!

// ✅ Correct - use pow() function
int result = (int)pow(2, 2);  // 4
```

### 5. Confusing with sqrt()

```c
// pow() raises to power
pow(2, 2);    // 4.0 (2 squared)

// sqrt() finds square root
sqrt(4);      // 2.0 (square root of 4)
```

## Mathematical Applications

### Application 1: Calculating Areas

```c
double circleArea(double radius)
{
    return 3.14159 * pow(radius, 2);  // πr²
}
```

### Application 2: Physics Calculations

```c
double kineticEnergy(double mass, double velocity)
{
    return 0.5 * mass * pow(velocity, 2);  // ½mv²
}
```

### Application 3: Growth Calculations

```c
double populationGrowth(double initial, double rate, int years)
{
    return initial * pow(1 + rate, years);
}
```

## Best Practices

### 1. Use Appropriate Data Types

```c
// For integer powers with integer results
int square = (int)pow(5, 2);  // 25

// For decimal results
double result = pow(2.5, 3);  // 15.625
```

### 2. Handle Large Exponents

```c
// ⚠️ Warning - large exponents can overflow
double large = pow(10, 10);  // 10 billion (OK)
double huge = pow(10, 100);  // May cause issues

// Check for reasonable ranges
```

### 3. Document Mathematical Intent

```c
// Calculate area of square: side^2
double area = pow(side, 2);
```

## Key Takeaways

- `pow()` calculates base raised to exponent power
- Requires `#include <math.h>` and `-lm` compilation flag
- Returns `double`, may need casting to `int`
- Syntax: `pow(base, exponent)` calculates base^exponent
- Special cases: any^0 = 1, any^1 = itself
- Essential for squares, cubes, and exponential calculations
- Widely used in physics, finance, and geometry

## Next Steps

After mastering `pow()`, continue with:

1. **sqrt()** - Function for square root (inverse of pow(x, 2))
2. **Other Math Functions** - ceil(), floor(), round(), abs(), etc.
3. **Complex Calculations** - Combining multiple math functions

Understanding `pow()` is essential for mathematical programming, especially for calculations involving squares, cubes, exponential growth, and any power operations!

