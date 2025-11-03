# Ceil Function in C

## Overview

This program demonstrates the `ceil()` function in C, which rounds a floating-point number up to the nearest integer greater than or equal to the given value. The `ceil()` function is part of the standard math library (`<math.h>`) and is essential for mathematical calculations that require upward rounding.

## What You'll Learn

- How to use the `ceil()` function
- Understanding ceiling (upward rounding) operation
- When to use `ceil()` vs other rounding functions
- Working with floating-point to integer conversion
- Mathematical applications of ceiling function
- Using the math library in C

## Complete Code

```c
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int ans = ceil(4.3); // will print 5

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
- Provides access to `ceil()` and other mathematical functions
- Required for using `ceil()`

### Step 2: Using ceil() Function

```c
int ans = ceil(4.3);
```

**Function Syntax:**
```c
double ceil(double x);
```

**What happens:**
1. `ceil(4.3)` is called with argument `4.3`
2. Function rounds up to nearest integer greater than or equal to 4.3
3. Returns `5.0` (as double)
4. Value is assigned to `ans` (converted to int: `5`)

**Mathematical Operation:**
- `ceil(4.3)` = 5 (smallest integer ≥ 4.3)
- Always rounds **up**, never down

### Step 3: Displaying Result

```c
printf("%d", ans);
```

**Output:** `5`

## Understanding Ceiling Function

### What is Ceiling?

The **ceiling** of a number is the smallest integer that is greater than or equal to that number.

**Mathematical Notation:** ⌈x⌉ (ceiling of x)

### Visual Representation

```
Number Line:

    4.0    4.1    4.2    4.3    4.4    4.5    4.6    4.7    4.8    4.9    5.0
    |      |      |      |      |      |      |      |      |      |      |
    └──────────────────────────────────────────────────────────────────────┘
                                    ↑
                                ceil(4.3)
                                Result: 5.0
```

### Examples

| Input | ceil() Result | Explanation                    |
| ----- | ------------- | ------------------------------ |
| 4.3   | 5             | Smallest integer ≥ 4.3         |
| 4.0   | 4             | Already an integer             |
| 4.9   | 5             | Rounds up even if close to 5   |
| 4.01  | 5             | Always rounds up               |
| -3.2  | -3            | Negative numbers: -3 ≥ -3.2    |
| -3.9  | -3            | Ceiling of negative is larger |

## Expected Output

```
5
```

**Explanation:** `ceil(4.3)` rounds up 4.3 to 5, the smallest integer greater than or equal to 4.3.

## Practical Examples

### Example 1: Different Decimal Values

```c
#include <math.h>
#include <stdio.h>

int main()
{
    printf("ceil(4.1) = %.0f\n", ceil(4.1));   // 5
    printf("ceil(4.3) = %.0f\n", ceil(4.3));   // 5
    printf("ceil(4.5) = %.0f\n", ceil(4.5));   // 5
    printf("ceil(4.7) = %.0f\n", ceil(4.7));   // 5
    printf("ceil(4.9) = %.0f\n", ceil(4.9));   // 5
    printf("ceil(4.0) = %.0f\n", ceil(4.0));   // 4
    
    return 0;
}
```

**Output:**
```
ceil(4.1) = 5
ceil(4.3) = 5
ceil(4.5) = 5
ceil(4.7) = 5
ceil(4.9) = 5
ceil(4.0) = 4
```

### Example 2: Negative Numbers

```c
#include <math.h>
#include <stdio.h>

int main()
{
    printf("ceil(-3.2) = %.0f\n", ceil(-3.2));  // -3
    printf("ceil(-3.5) = %.0f\n", ceil(-3.5));  // -3
    printf("ceil(-3.9) = %.0f\n", ceil(-3.9));  // -3
    printf("ceil(-4.0) = %.0f\n", ceil(-4.0));  // -4
    
    return 0;
}
```

**Output:**
```
ceil(-3.2) = -3
ceil(-3.5) = -3
ceil(-3.9) = -3
ceil(-4.0) = -4
```

### Example 3: Calculating Required Pages

```c
#include <math.h>
#include <stdio.h>

int main()
{
    double wordsPerPage = 250.0;
    int totalWords = 567;
    
    // Calculate pages needed (always round up)
    int pagesNeeded = (int)ceil((double)totalWords / wordsPerPage);
    
    printf("Total words: %d\n", totalWords);
    printf("Words per page: %.0f\n", wordsPerPage);
    printf("Pages needed: %d\n", pagesNeeded);  // 3 pages
    
    return 0;
}
```

**Output:**
```
Total words: 567
Words per page: 250
Pages needed: 3
```

**Explanation:** 567 ÷ 250 = 2.268, but we need 3 full pages.

### Example 4: Pricing Calculations

```c
#include <math.h>
#include <stdio.h>

int main()
{
    double price = 19.99;
    double taxRate = 0.08;
    
    double totalPrice = price * (1 + taxRate);
    int roundedPrice = (int)ceil(totalPrice);
    
    printf("Original price: $%.2f\n", price);
    printf("After tax: $%.2f\n", totalPrice);
    printf("Rounded up: $%d\n", roundedPrice);
    
    return 0;
}
```

### Example 5: Time Calculations

```c
#include <math.h>
#include <stdio.h>

int main()
{
    int totalMinutes = 145;
    double hours = totalMinutes / 60.0;
    int fullHours = (int)ceil(hours);
    
    printf("Total minutes: %d\n", totalMinutes);
    printf("Hours (decimal): %.2f\n", hours);
    printf("Full hours needed: %d\n", fullHours);  // 3 hours
    
    return 0;
}
```

## ceil() vs Other Rounding Functions

### Comparison Table

| Function | 4.3  | 4.5  | 4.7  | -3.2 | -3.5 |
| -------- | ---- | ---- | ---- | ---- | ---- |
| `ceil()` | 5    | 5    | 5    | -3   | -3   |
| `floor()`| 4    | 4    | 4    | -4   | -4   |
| `round()`| 4    | 5    | 5    | -3   | -4   |

### When to Use Each

**Use `ceil()` when:**
- You need to round **up** always
- Calculating minimum requirements (pages, containers, etc.)
- Ensuring you have enough resources
- Pricing that always rounds up

**Use `floor()` when:**
- You need to round **down** always
- Calculating maximum capacity
- Removing fractional parts

**Use `round()` when:**
- You need standard rounding (nearest integer)
- 4.5 rounds to 5, 4.4 rounds to 4

## How to Compile and Run

### Compilation

```bash
gcc ceil.c -o ceil -lm
```

**Important:** Add `-lm` flag to link the math library!

### Execution

```bash
./ceil
```

### Expected Output

```
5
```

## Common Beginner Mistakes

### 1. Forgetting to Link Math Library

```c
// ❌ Wrong compilation - missing -lm flag
gcc ceil.c -o ceil
// Error: undefined reference to 'ceil'

// ✅ Correct - add -lm flag
gcc ceil.c -o ceil -lm
```

### 2. Wrong Header File

```c
// ❌ Wrong - math.h not included
#include <stdio.h>
int ans = ceil(4.3);  // Error: ceil undeclared

// ✅ Correct - include math.h
#include <math.h>
int ans = ceil(4.3);
```

### 3. Type Mismatch

```c
// ⚠️ Warning - ceil returns double, not int
int ans = ceil(4.3);  // Works but may cause precision loss

// ✅ Better - explicit cast or use double
double ans = ceil(4.3);
// or
int ans = (int)ceil(4.3);
```

### 4. Confusing ceil() with round()

```c
// ceil() always rounds UP
ceil(4.1);   // 5 (not 4!)

// round() rounds to nearest
round(4.1);  // 4
round(4.5);  // 5
```

### 5. Not Understanding Negative Numbers

```c
// ceil() of negative numbers goes toward zero
ceil(-3.2);  // -3 (larger, closer to zero)
ceil(-3.9);  // -3 (still larger)

// Not -4!
```

## Best Practices

### 1. Use Appropriate Data Types

```c
double result = ceil(4.3);  // Keep as double for precision
// Then cast when needed:
int resultInt = (int)ceil(4.3);
```

### 2. Handle Edge Cases

```c
double value;
scanf("%lf", &value);

if (value < INT_MIN || ceil(value) > INT_MAX) {
    printf("Error: Value out of range\n");
    return 1;
}

int result = (int)ceil(value);
```

### 3. Document Your Intent

```c
// Calculate minimum number of containers needed
// Always round up to ensure we have enough
int containers = (int)ceil(totalItems / itemsPerContainer);
```

### 4. Combine with Other Operations

```c
// Calculate cost including tax, rounded up
double basePrice = 19.99;
double tax = 0.08;
double finalPrice = ceil(basePrice * (1 + tax));
```

## Mathematical Properties

### Key Properties of ceil()

1. **Idempotent**: `ceil(ceil(x)) = ceil(x)`
2. **Monotonic**: If x ≤ y, then ceil(x) ≤ ceil(y)
3. **Integer Result**: ceil(x) is always an integer
4. **Range**: For any x, ceil(x) ≥ x

### Relationship with floor()

```c
// For positive numbers
ceil(x) - floor(x) = 1  // if x is not integer
ceil(x) - floor(x) = 0  // if x is integer

// Example:
ceil(4.3) - floor(4.3) = 5 - 4 = 1
ceil(4.0) - floor(4.0) = 4 - 4 = 0
```

## Real-World Applications

### Application 1: Container Packing

```c
int calculateContainers(int items, int containerCapacity)
{
    // Always need full containers (round up)
    return (int)ceil((double)items / containerCapacity);
}
```

### Application 2: Memory Allocation

```c
int calculateBlocks(int bytes, int blockSize)
{
    // Calculate number of blocks needed (round up)
    return (int)ceil((double)bytes / blockSize);
}
```

### Application 3: Batch Processing

```c
int calculateBatches(int items, int batchSize)
{
    // Process in batches, always round up
    return (int)ceil((double)items / batchSize);
}
```

## Key Takeaways

- `ceil()` rounds a number **up** to the nearest integer
- Requires `#include <math.h>` and `-lm` compilation flag
- Returns `double`, may need casting to `int`
- Always rounds up, even if decimal is small (4.01 → 5)
- Works correctly with negative numbers (moves toward zero)
- Essential for calculations requiring minimum capacity
- Used when you must ensure you have enough resources

## Next Steps

After mastering `ceil()`, you'll learn:

1. **floor()** - Function that rounds down
2. **round()** - Function that rounds to nearest
3. **fmod()** - Floating-point remainder
4. **Other Math Functions** - pow(), sqrt(), abs(), etc.

## Troubleshooting

**Problem:** "undefined reference to ceil"

- **Solution:** Add `-lm` flag: `gcc ceil.c -o ceil -lm`

**Problem:** ceil() returns unexpected value

- **Solution:** Remember ceil always rounds UP, even small decimals

**Problem:** Compilation error about ceil

- **Solution:** Make sure `#include <math.h>` is at the top

**Problem:** Negative numbers behaving unexpectedly

- **Solution:** Remember ceil(-3.2) = -3 (toward zero), not -4

Understanding `ceil()` is essential for mathematical programming, especially when dealing with resource allocation, capacity calculations, and any scenario where upward rounding is required!

