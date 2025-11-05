# Passing Array in Function

## Overview

This program demonstrates how to pass an array to a function in C. When arrays are passed to functions, they are passed by reference, meaning any modifications made to the array inside the function will affect the original array.

## What You'll Learn

- How to pass arrays to functions
- Understanding array parameter syntax `int a[]`
- How arrays are passed by reference (not by value)
- Modifying array elements inside functions
- Seeing how changes in function affect original array

## Complete Code

```c
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void func(int a[])
{
    a[1] = 200;
}

int main()
{
    int a[5] = {10, 20, 30, 40, 50};

    func(a);

    for (int i = 0; i < 5; i++)
    {
        printf("index %d = %d\n", i, a[i]);
    }

    return 0;
}
```

## Code Breakdown

### Step 1: Function Declaration with Array Parameter

```c
void func(int a[])
{
    a[1] = 200;
}
```

**What happens:**
- Function `func` accepts an array parameter `int a[]`
- The array is passed by reference (the function receives the address of the array)
- Inside the function, `a[1] = 200` modifies the second element of the array
- This change affects the original array in `main()`

### Step 2: Array Initialization in main()

```c
int a[5] = {10, 20, 30, 40, 50};
```

**What happens:**
- Creates an array with 5 elements
- Initializes with values: 10, 20, 30, 40, 50

### Step 3: Passing Array to Function

```c
func(a);
```

**What happens:**
- Passes the array `a` to function `func`
- Only the array name is passed (not `&a` or `a[]`)
- The array is automatically passed by reference

### Step 4: Printing Modified Array

```c
for (int i = 0; i < 5; i++)
{
    printf("index %d = %d\n", i, a[i]);
}
```

**What happens:**
- Loops through all array elements
- Prints each index and its value
- Shows that `a[1]` was changed from 20 to 200

## Key Concepts

### Array Parameter Syntax

When declaring a function that accepts an array:

```c
void func(int a[])    // Array parameter
void func(int *a)     // Pointer parameter (equivalent)
```

Both forms are equivalent. Arrays are always passed by reference.

### Pass by Reference

Arrays are passed by reference, not by value:

```c
void func(int a[])
{
    a[1] = 200;  // This changes the original array!
}
```

Any changes made to the array inside the function affect the original array.

## Expected Output

```
index 0 = 10
index 1 = 200
index 2 = 30
index 3 = 40
index 4 = 50
```

**Explanation:**
- Original array: `{10, 20, 30, 40, 50}`
- After function call: `a[1]` changed from 20 to 200
- All other elements remain unchanged

## How to Compile and Run

1. **Compile the program:**

   ```bash
   gcc passing-array-in-function.c -o passing-array-in-function
   ```

2. **Run the executable:**

   ```bash
   ./passing-array-in-function
   ```

3. **Expected output:**
   ```
   index 0 = 10
   index 1 = 200
   index 2 = 30
   index 3 = 40
   index 4 = 50
   ```

## Common Beginner Mistakes

### 1. Using `&` When Passing Array

```c
// ❌ Wrong - don't use & with array name
func(&a);

// ✅ Correct - just pass array name
func(a);
```

### 2. Trying to Pass Array Size in Parameter

```c
// ❌ Wrong - size in brackets is ignored
void func(int a[5])

// ✅ Correct - size not needed in parameter
void func(int a[])
```

## Key Takeaways

1. Arrays are passed by reference to functions
2. Use `int a[]` or `int *a` as function parameter
3. Pass array by just using array name: `func(a)`
4. Changes inside function affect original array
5. Array size is not needed in function parameter declaration
