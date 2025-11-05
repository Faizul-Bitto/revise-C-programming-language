# Array Input and Print

## Overview

This program demonstrates how to get array input from the user and print the array using a function. The function receives the array and its size, then prints all elements.

## What You'll Learn

- Getting array size from user input
- Reading array elements from user
- Passing array and size to function
- Printing array elements inside a function
- Understanding why array size needs to be passed separately

## Complete Code

```c
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void func(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("index %d = %d\n", i, a[i]);
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    func(a, n);

    return 0;
}
```

## Code Breakdown

### Step 1: Function Declaration

```c
void func(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("index %d = %d\n", i, a[i]);
    }
}
```

**What happens:**
- Function accepts array `a[]` and size `n`
- Size `n` is needed because array size is not automatically known in function
- Loops through array and prints each element with its index

### Step 2: Getting Array Size

```c
int n;
scanf("%d", &n);
```

**What happens:**
- Gets the size of array from user
- User enters how many elements they want in the array

### Step 3: Declaring Variable-Length Array

```c
int a[n];
```

**What happens:**
- Creates array with size `n`
- Size is determined at runtime (variable-length array)
- Array is ready to store `n` elements

### Step 4: Reading Array Elements

```c
for (int i = 0; i < n; i++)
{
    scanf("%d", &a[i]);
}
```

**What happens:**
- Loops `n` times to read all elements
- Each element is stored at index `i`
- User enters values one by one

### Step 5: Calling Function with Array and Size

```c
func(a, n);
```

**What happens:**
- Passes array `a` and size `n` to function
- Function needs size to know how many elements to print

## Key Concepts

### Why Pass Array Size?

Arrays passed to functions don't automatically include size information:

```c
void func(int a[], int n)  // Size must be passed separately
```

The function needs the size to know how many elements to process.

### Variable-Length Array

```c
int n;
scanf("%d", &n);
int a[n];  // Array size determined at runtime
```

Array size can be determined from user input at runtime.

## Expected Output

**Example Input:**
```
5
10 20 30 40 50
```

**Example Output:**
```
index 0 = 10
index 1 = 20
index 2 = 30
index 3 = 40
index 4 = 50
```

## How to Compile and Run

1. **Compile the program:**

   ```bash
   gcc array-input-and-print.c -o array-input-and-print
   ```

2. **Run the executable:**

   ```bash
   ./array-input-and-print
   ```

3. **Input:**
   - First line: Enter array size (e.g., `5`)
   - Second line: Enter array elements separated by spaces (e.g., `10 20 30 40 50`)

4. **Expected output:**
   ```
   index 0 = 10
   index 1 = 20
   index 2 = 30
   index 3 = 40
   index 4 = 50
   ```

## Common Beginner Mistakes

### 1. Forgetting to Pass Array Size

```c
// ❌ Wrong - function doesn't know array size
void func(int a[])
{
    for (int i = 0; i < ???; i++)  // How many elements?
}

// ✅ Correct - pass size separately
void func(int a[], int n)
{
    for (int i = 0; i < n; i++)
}
```

### 2. Using Wrong Size in Loop

```c
// ❌ Wrong - hardcoded size
for (int i = 0; i < 5; i++)  // What if array has 10 elements?

// ✅ Correct - use passed size
for (int i = 0; i < n; i++)
```

## Key Takeaways

1. Arrays passed to functions need size to be passed separately
2. Variable-length arrays allow size to be determined at runtime
3. Function receives array and size as parameters
4. Use passed size `n` in loops to process all elements correctly
