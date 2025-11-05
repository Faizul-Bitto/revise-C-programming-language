# Pass by Reference

## Overview

This program demonstrates pass by reference in C using pointers. When a variable is passed by reference, the function receives the address of the variable. Changes made to the parameter inside the function affect the original variable.

## What You'll Learn

- Understanding pass by reference mechanism
- How to pass addresses using `&` operator
- How function parameters receive addresses (pointers)
- Using `*` operator to modify original variable
- Why changes in function affect original variable
- Difference between pass by value and pass by reference

## Complete Code

```c
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void func(int *x)
{
    *x = 20;
}

int main()
{
    int x = 10;

    func(&x);

    printf("%d", x);

    return 0;
}
```

## Code Breakdown

### Step 1: Function Declaration with Pointer Parameter

```c
void func(int *x)
{
    *x = 20;
}
```

**What happens:**
- Function receives parameter `x` as pointer (address)
- `*x = 20` dereferences pointer to access original variable
- Changes the value at the address, affecting original variable

### Step 2: Variable Declaration and Function Call

```c
int x = 10;

func(&x);
```

**What happens:**
- Creates variable `x` with value 10
- Passes address of `x` using `&x`
- Function receives the address, not a copy

### Step 3: Printing Modified Variable

```c
printf("%d", x);
```

**What happens:**
- Prints value of `x` in `main()`
- Value is now 20 (changed by function)
- Function's change affected the original variable

## Key Concepts

### Pass by Reference

When a variable is passed by reference:

```c
void func(int *x)  // Receives address (pointer)
{
    *x = 20;       // Changes value at address
}

int main()
{
    int x = 10;
    func(&x);      // Passes address of x
    // x is now 20 here
}
```

The function receives the **address** of the variable, allowing direct access to the original.

### Using Address and Dereference

```c
int x = 10;
func(&x);          // &x = address of x (pass by reference)

void func(int *x)  // *x = pointer parameter
{
    *x = 20;       // *x = dereference to change value
}
```

- `&x`: Gets address (reference)
- `*x`: Accesses value at address (dereference)

## Expected Output

```
20
```

**Explanation:**
- Original `x` is 10
- Function receives address and changes value to 20
- Original `x` becomes 20
- Output shows 20

## How to Compile and Run

1. **Compile the program:**

   ```bash
   gcc pass-by-reference.c -o pass-by-reference
   ```

2. **Run the executable:**

   ```bash
   ./pass-by-reference
   ```

3. **Expected output:**
   ```
   20
   ```

## Visual Representation

```
Before function call:
main(): x = 10 (at address 0x1000)

During function call:
main(): x = 10 (at address 0x1000)
func(): *x = 20 (modifies value at 0x1000)

After function call:
main(): x = 20 (changed!)
```

## Comparison: Pass by Value vs Pass by Reference

### Pass by Value (Previous Example)

```c
void func(int x) { x = 20; }  // Copy, original unchanged
int x = 10;
func(x);
// x is still 10
```

### Pass by Reference (This Example)

```c
void func(int *x) { *x = 20; }  // Pointer, original changed
int x = 10;
func(&x);
// x is now 20
```

## Common Beginner Mistakes

### 1. Forgetting `&` When Calling Function

```c
// ❌ Wrong - passing value instead of address
func(x);  // Error: passing int to int* parameter

// ✅ Correct - passing address
func(&x);  // Passes address of x
```

### 2. Forgetting `*` When Modifying

```c
// ❌ Wrong - trying to assign to pointer
void func(int *x) { x = 20; }  // Error: assigning int to pointer

// ✅ Correct - dereference to modify value
void func(int *x) { *x = 20; }  // Changes value at address
```

## Key Takeaways

1. **Pass by reference** passes the address of the variable
2. Use `&` to pass address: `func(&x)`
3. Function parameter is pointer: `void func(int *x)`
4. Use `*` to modify value: `*x = 20`
5. Changes inside function affect original variable
6. Allows functions to modify variables from calling function
