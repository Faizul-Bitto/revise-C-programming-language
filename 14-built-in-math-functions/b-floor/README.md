# Floor Function in C

## Overview

This program demonstrates the `floor()` function in C, which rounds a floating-point number down to the nearest integer less than or equal to the given value. The `floor()` function is part of the standard math library (`<math.h>`) and is essential for mathematical calculations that require downward rounding.

## What You'll Learn

- How to use the `floor()` function
- Understanding floor (downward rounding) operation
- When to use `floor()` vs other rounding functions
- Working with floating-point to integer conversion
- Mathematical applications of floor function
- Using the math library in C

## Complete Code

```c
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int ans = floor(4.9); // will print 4

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
- Provides access to `floor()` and other mathematical functions
- Required for using `floor()`

### Step 2: Using floor() Function

```c
int ans = floor(4.9);
```

**Function Syntax:**
```c
double floor(double x);
```

**What happens:**
1. `floor(4.9)` is called with argument `4.9`
2. Function rounds down to nearest integer less than or equal to 4.9
3. Returns `4.0` (as double)
4. Value is assigned to `ans` (converted to int: `4`)

**Mathematical Operation:**
- `floor(4.9)` = 4 (largest integer ≤ 4.9)
- Always rounds **down**, never up

### Step 3: Displaying Result

```c
printf("%d", ans);
```

**Output:** `4`

## Understanding Floor Function

### What is Floor?

The **floor** of a number is the largest integer that is less than or equal to that number.

**Mathematical Notation:** ⌊x⌋ (floor of x)

### Visual Representation

```
Number Line:

    4.0    4.1    4.2    4.3    4.4    4.5    4.6    4.7    4.8    4.9    5.0
    |      |      |      |      |      |      |      |      |      |      |
    └──────────────────────────────────────────────────────────────────────┘
                                    ↑
                                floor(4.9)
                                Result: 4.0
```

### Examples

| Input | floor() Result | Explanation                    |
| ----- | -------------- | ------------------------------ |
| 4.9   | 4              | Largest integer ≤ 4.9          |
| 4.0   | 4              | Already an integer             |
| 4.1   | 4              | Rounds down even if close to 5 |
| 4.99  | 4              | Always rounds down             |
| -3.2  | -4             | Negative numbers: -4 ≤ -3.2     |
| -3.9  | -4             | Floor of negative goes away from zero |

## Expected Output

```
4
```

**Explanation:** `floor(4.9)` rounds down 4.9 to 4, the largest integer less than or equal to 4.9.

## Practical Examples

### Example 1: Different Decimal Values

```c
#include <math.h>
#include <stdio.h>

int main()
{
    printf("floor(4.1) = %.0f\n", floor(4.1));   // 4
    printf("floor(4.3) = %.0f\n", floor(4.3));   // 4
    printf("floor(4.5) = %.0f\n", floor(4.5));   // 4
    printf("floor(4.7) = %.0f\n", floor(4.7));   // 4
    printf("floor(4.9) = %.0f\n", floor(4.9));   // 4
    printf("floor(4.0) = %.0f\n", floor(4.0));   // 4
    
    return 0;
}
```

**Output:**
```
floor(4.1) = 4
floor(4.3) = 4
floor(4.5) = 4
floor(4.7) = 4
floor(4.9) = 4
floor(4.0) = 4
```

### Example 2: Negative Numbers

```c
#include <math.h>
#include <stdio.h>

int main()
{
    printf("floor(-3.2) = %.0f\n", floor(-3.2));  // -4
    printf("floor(-3.5) = %.0f\n", floor(-3.5));  // -4
    printf("floor(-3.9) = %.0f\n", floor(-3.9));  // -4
    printf("floor(-4.0) = %.0f\n", floor(-4.0));  // -4
    
    return 0;
}
```

**Output:**
```
floor(-3.2) = -4
floor(-3.5) = -4
floor(-3.9) = -4
floor(-4.0) = -4
```

### Example 3: Calculating Maximum Items

```c
#include <math.h>
#include <stdio.h>

int main()
{
    double containerCapacity = 10.5;
    double totalSpace = 42.7;
    
    // Calculate maximum items that fit (always round down)
    int maxItems = (int)floor(totalSpace / containerCapacity);
    
    printf("Total space: %.1f\n", totalSpace);
    printf("Container capacity: %.1f\n", containerCapacity);
    printf("Maximum items: %d\n", maxItems);  // 4 items
    
    return 0;
}
```

**Output:**
```
Total space: 42.7
Container capacity: 10.5
Maximum items: 4
```

**Explanation:** 42.7 ÷ 10.5 = 4.071, but we can only fit 4 full items.

### Example 4: Age Calculation

```c
#include <math.h>
#include <stdio.h>

int main()
{
    double years = 25.8;
    int age = (int)floor(years);
    
    printf("Years: %.1f\n", years);
    printf("Age: %d years old\n", age);
    
    return 0;
}
```

## floor() vs Other Rounding Functions

### Comparison Table

| Function | 4.1  | 4.5  | 4.9  | -3.2 | -3.9 |
| -------- | ---- | ---- | ---- | ---- | ---- |
| `floor()`| 4    | 4    | 4    | -4   | -4   |
| `ceil()` | 5    | 5    | 5    | -3   | -3   |
| `round()`| 4    | 5    | 5    | -3   | -4   |

### When to Use Each

**Use `floor()` when:**
- You need to round **down** always
- Calculating maximum capacity (items that fit)
- Ensuring you don't exceed limits
- Removing fractional parts downward

**Use `ceil()` when:**
- You need to round **up** always
- Calculating minimum requirements
- Ensuring you have enough resources

**Use `round()` when:**
- You need standard rounding (nearest integer)
- 4.5 rounds to 5, 4.4 rounds to 4

## How to Compile and Run

### Compilation

```bash
gcc floor.c -o floor -lm
```

**Important:** Add `-lm` flag to link the math library!

### Execution

```bash
./floor
```

### Expected Output

```
4
```

## Common Beginner Mistakes

### 1. Forgetting to Link Math Library

```c
// ❌ Wrong compilation - missing -lm flag
gcc floor.c -o floor
// Error: undefined reference to 'floor'

// ✅ Correct - add -lm flag
gcc floor.c -o floor -lm
```

### 2. Wrong Header File

```c
// ❌ Wrong - math.h not included
#include <stdio.h>
int ans = floor(4.9);  // Error: floor undeclared

// ✅ Correct - include math.h
#include <math.h>
int ans = floor(4.9);
```

### 3. Confusing floor() with ceil()

```c
// floor() always rounds DOWN
floor(4.9);   // 4 (not 5!)

// ceil() always rounds UP
ceil(4.1);    // 5
```

### 4. Not Understanding Negative Numbers

```c
// floor() of negative numbers goes away from zero
floor(-3.2);  // -4 (smaller, away from zero)
floor(-3.9);  // -4

// Not -3!
```

## Best Practices

### 1. Use Appropriate Data Types

```c
double result = floor(4.9);  // Keep as double for precision
// Then cast when needed:
int resultInt = (int)floor(4.9);
```

### 2. Document Your Intent

```c
// Calculate maximum items that fit in container
// Always round down to ensure we don't exceed capacity
int maxItems = (int)floor(totalSpace / containerSize);
```

## Key Takeaways

- `floor()` rounds a number **down** to the nearest integer
- Requires `#include <math.h>` and `-lm` compilation flag
- Returns `double`, may need casting to `int`
- Always rounds down, even if decimal is large (4.99 → 4)
- Works correctly with negative numbers (moves away from zero)
- Essential for calculations requiring maximum capacity
- Used when you must ensure you don't exceed limits

## Next Steps

After mastering `floor()`, continue with:

1. **ceil()** - Function that rounds up
2. **round()** - Function that rounds to nearest
3. **Other Math Functions** - sqrt(), pow(), abs(), etc.

Understanding `floor()` is essential for mathematical programming, especially when dealing with capacity limits, maximum values, and any scenario where downward rounding is required!

