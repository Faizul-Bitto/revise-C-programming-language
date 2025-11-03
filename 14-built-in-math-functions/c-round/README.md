# Round Function in C

## Overview

This program demonstrates the `round()` function in C, which rounds a floating-point number to the nearest integer. The `round()` function is part of the standard math library (`<math.h>`) and uses standard rounding rules: values at exactly 0.5 round up, while values below 0.5 round down.

## What You'll Learn

- How to use the `round()` function
- Understanding standard rounding rules
- When to use `round()` vs `ceil()` and `floor()`
- Working with floating-point to integer conversion
- Mathematical applications of rounding
- Using the math library in C

## Complete Code

```c
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int ans = round(4.9); // will print 5 if it is greater than .4, if 4.4 -> result : 4, if 4.5 -> result : 5

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
- Provides access to `round()` and other mathematical functions
- Required for using `round()`

### Step 2: Using round() Function

```c
int ans = round(4.9);
```

**Function Syntax:**
```c
double round(double x);
```

**What happens:**
1. `round(4.9)` is called with argument `4.9`
2. Function rounds to nearest integer
3. Since 4.9 is closer to 5 than 4, returns `5.0` (as double)
4. Value is assigned to `ans` (converted to int: `5`)

**Rounding Rules:**
- If decimal part < 0.5: round down
- If decimal part ≥ 0.5: round up
- If decimal part = 0.5: round up (away from zero)

### Step 3: Displaying Result

```c
printf("%d", ans);
```

**Output:** `5`

## Understanding Round Function

### What is Rounding?

**Rounding** means finding the nearest integer value to a given number.

**Standard Rounding Rules:**
- **0.0 to 0.4**: Round down
- **0.5 to 0.9**: Round up

### Visual Representation

```
Number Line:

    4.0    4.1    4.2    4.3    4.4    4.5    4.6    4.7    4.8    4.9    5.0
    |      |      |      |      |      |      |      |      |      |      |
    └─────────── round down ───────────┘      └─────────── round up ──────┘
                                    ↑
                                round(4.9)
                                Result: 5.0
```

### Examples

| Input | round() Result | Explanation                        |
| ----- | -------------- | ---------------------------------- |
| 4.1   | 4              | 0.1 < 0.5, rounds down            |
| 4.4   | 4              | 0.4 < 0.5, rounds down            |
| 4.5   | 5              | 0.5 ≥ 0.5, rounds up               |
| 4.6   | 5              | 0.6 ≥ 0.5, rounds up               |
| 4.9   | 5              | 0.9 ≥ 0.5, rounds up                |
| 4.0   | 4              | Already an integer                 |
| -3.2  | -3             | -0.2 < 0.5, rounds toward zero     |
| -3.5  | -4             | -0.5 ≥ 0.5, rounds away from zero  |
| -3.9  | -4             | -0.9 ≥ 0.5, rounds away from zero  |

## Expected Output

```
5
```

**Explanation:** `round(4.9)` rounds 4.9 to the nearest integer, which is 5 (since 4.9 is closer to 5 than 4).

## Detailed Rounding Rules

### Rule 1: Decimal Part < 0.5

```c
round(4.1);  // 4 (0.1 < 0.5, round down)
round(4.3);  // 4 (0.3 < 0.5, round down)
round(4.4);  // 4 (0.4 < 0.5, round down)
```

### Rule 2: Decimal Part ≥ 0.5

```c
round(4.5);  // 5 (0.5 ≥ 0.5, round up)
round(4.6);  // 5 (0.6 ≥ 0.5, round up)
round(4.9);  // 5 (0.9 ≥ 0.5, round up)
```

### Rule 3: Exactly 0.5

```c
round(4.5);  // 5 (rounds up)
round(5.5);  // 6 (rounds up)
round(-3.5); // -4 (rounds away from zero)
```

## Practical Examples

### Example 1: Standard Rounding

```c
#include <math.h>
#include <stdio.h>

int main()
{
    printf("round(4.1) = %.0f\n", round(4.1));   // 4
    printf("round(4.4) = %.0f\n", round(4.4));   // 4
    printf("round(4.5) = %.0f\n", round(4.5));   // 5
    printf("round(4.6) = %.0f\n", round(4.6));   // 5
    printf("round(4.9) = %.0f\n", round(4.9));   // 5
    
    return 0;
}
```

**Output:**
```
round(4.1) = 4
round(4.4) = 4
round(4.5) = 5
round(4.6) = 5
round(4.9) = 5
```

### Example 2: Negative Numbers

```c
#include <math.h>
#include <stdio.h>

int main()
{
    printf("round(-3.2) = %.0f\n", round(-3.2));  // -3
    printf("round(-3.4) = %.0f\n", round(-3.4));  // -3
    printf("round(-3.5) = %.0f\n", round(-3.5));  // -4
    printf("round(-3.6) = %.0f\n", round(-3.6));  // -4
    
    return 0;
}
```

**Output:**
```
round(-3.2) = -3
round(-3.4) = -3
round(-3.5) = -4
round(-3.6) = -4
```

### Example 3: Grade Rounding

```c
#include <math.h>
#include <stdio.h>

int main()
{
    double grades[] = {85.3, 92.7, 78.4, 89.5, 91.8};
    int n = 5;
    
    printf("Original -> Rounded\n");
    for (int i = 0; i < n; i++) {
        int rounded = (int)round(grades[i]);
        printf("%.1f -> %d\n", grades[i], rounded);
    }
    
    return 0;
}
```

**Output:**
```
Original -> Rounded
85.3 -> 85
92.7 -> 93
78.4 -> 78
89.5 -> 90
91.8 -> 92
```

### Example 4: Price Rounding

```c
#include <math.h>
#include <stdio.h>

int main()
{
    double price = 19.99;
    double taxRate = 0.08;
    
    double totalPrice = price * (1 + taxRate);
    int roundedPrice = (int)round(totalPrice);
    
    printf("Original price: $%.2f\n", price);
    printf("After tax: $%.2f\n", totalPrice);
    printf("Rounded price: $%d\n", roundedPrice);
    
    return 0;
}
```

### Example 5: Time Rounding

```c
#include <math.h>
#include <stdio.h>

int main()
{
    double minutes = 145.7;
    double hours = minutes / 60.0;
    int roundedHours = (int)round(hours);
    
    printf("Minutes: %.1f\n", minutes);
    printf("Hours (decimal): %.2f\n", hours);
    printf("Rounded hours: %d\n", roundedHours);
    
    return 0;
}
```

## round() vs Other Rounding Functions

### Comparison Table

| Function | 4.1  | 4.4  | 4.5  | 4.6  | 4.9  | -3.2 | -3.5 |
| -------- | ---- | ---- | ---- | ---- | ---- | ---- | ---- |
| `round()`| 4    | 4    | 5    | 5    | 5    | -3   | -4   |
| `ceil()` | 5    | 5    | 5    | 5    | 5    | -3   | -3   |
| `floor()`| 4    | 4    | 4    | 4    | 4    | -4   | -4   |

### When to Use Each

**Use `round()` when:**
- You need standard rounding (nearest integer)
- Calculating averages or final values
- Displaying rounded results to users
- General mathematical rounding

**Use `ceil()` when:**
- You need to round **up** always
- Calculating minimum requirements

**Use `floor()` when:**
- You need to round **down** always
- Calculating maximum capacity

## How to Compile and Run

### Compilation

```bash
gcc round.c -o round -lm
```

**Important:** Add `-lm` flag to link the math library!

### Execution

```bash
./round
```

### Expected Output

```
5
```

## Common Beginner Mistakes

### 1. Forgetting to Link Math Library

```c
// ❌ Wrong compilation - missing -lm flag
gcc round.c -o round
// Error: undefined reference to 'round'

// ✅ Correct - add -lm flag
gcc round.c -o round -lm
```

### 2. Confusing with ceil() or floor()

```c
// round() rounds to NEAREST
round(4.4);  // 4 (not 5!)
round(4.5);  // 5 (not 4!)

// ceil() always rounds UP
ceil(4.1);   // 5

// floor() always rounds DOWN
floor(4.9);  // 4
```

### 3. Not Understanding 0.5 Rule

```c
// round() rounds 0.5 UP
round(4.5);  // 5 (not 4!)

// This is standard mathematical rounding
```

## Best Practices

### 1. Use for Standard Rounding

```c
// ✅ Good - standard rounding
double average = 87.6;
int roundedAvg = (int)round(average);

// Use ceil/floor when specific direction needed
```

### 2. Document Rounding Intent

```c
// Round to nearest integer for display
int displayValue = (int)round(calculatedValue);
```

## Key Takeaways

- `round()` rounds to the **nearest** integer
- Requires `#include <math.h>` and `-lm` compilation flag
- Returns `double`, may need casting to `int`
- Values < 0.5 round down, values ≥ 0.5 round up
- Most commonly used rounding function
- Standard mathematical rounding behavior
- Perfect for displaying rounded values to users

## Next Steps

After mastering `round()`, continue with:

1. **ceil()** - Function that rounds up
2. **floor()** - Function that rounds down
3. **Other Math Functions** - sqrt(), pow(), abs(), etc.

Understanding `round()` is essential for mathematical programming, especially when displaying user-friendly rounded values and performing standard mathematical calculations!

