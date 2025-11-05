# Pass by Value

## Overview

This program demonstrates pass by value in C. When a variable is passed by value to a function, a copy of the value is made. Changes made to the parameter inside the function do not affect the original variable.

## What You'll Learn

- Understanding pass by value mechanism
- How function parameters receive copies of values
- Why changes in function don't affect original variable
- Difference between pass by value and pass by reference
- When pass by value is used

## Complete Code

```c
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void func(int x)
{
    x = 20;
}

int main()
{
    int x = 10;

    func(x);

    printf("%d", x); // will be printed -> 10

    return 0;
}
```

## Code Breakdown

### Step 1: Function Declaration

```c
void func(int x)
{
    x = 20;
}
```

**What happens:**
- Function receives parameter `x` by value
- `x = 20` modifies the local copy
- Original variable in `main()` is not affected

### Step 2: Variable Declaration and Function Call

```c
int x = 10;

func(x);
```

**What happens:**
- Creates variable `x` with value 10
- Passes `x` to function `func`
- A copy of value 10 is passed to function
- Original `x` in `main()` remains unchanged

### Step 3: Printing Original Variable

```c
printf("%d", x); // will be printed -> 10
```

**What happens:**
- Prints value of `x` in `main()`
- Value is still 10 (not changed by function)
- Function's change to its copy didn't affect original

## Key Concepts

### Pass by Value

When a variable is passed by value:

```c
void func(int x)  // Receives a copy of the value
{
    x = 20;       // Changes only the copy
}

int main()
{
    int x = 10;
    func(x);      // Passes copy of 10
    // x is still 10 here
}
```

The function receives a **copy** of the value, not the original variable.

### Why Original Doesn't Change

```c
int x = 10;       // Original variable
func(x);          // Copy of 10 is passed
// Inside func: x = 20 (changes copy, not original)
// After func: x is still 10 (original unchanged)
```

## Expected Output

```
10
```

**Explanation:**
- Original `x` is 10
- Function changes its copy to 20
- Original `x` remains 10
- Output shows 10

## How to Compile and Run

1. **Compile the program:**

   ```bash
   gcc pass-by-value.c -o pass-by-value
   ```

2. **Run the executable:**

   ```bash
   ./pass-by-value
   ```

3. **Expected output:**
   ```
   10
   ```

## Visual Representation

```
Before function call:
main(): x = 10

During function call:
main(): x = 10
func(): x = 10 (copy) → x = 20 (copy modified)

After function call:
main(): x = 10 (unchanged)
```

## Common Beginner Mistakes

### 1. Expecting Original to Change

```c
// ❌ Wrong assumption - expecting x to become 20
int x = 10;
func(x);
// x is still 10, not 20

// ✅ Understanding - pass by value creates copy
// Original variable doesn't change
```

### 2. Confusing with Pass by Reference

```c
// Pass by value (this example)
void func(int x) { x = 20; }  // Copy, doesn't affect original

// Pass by reference (different)
void func(int *x) { *x = 20; }  // Pointer, affects original
```

## Key Takeaways

1. **Pass by value** creates a copy of the variable
2. Changes inside function don't affect original variable
3. Used for basic data types (int, float, char)
4. Original variable remains unchanged after function call
5. Function works with its own copy of the value
