# Pointer in Array

## Overview

This program demonstrates how pointers work with arrays. Arrays have a special relationship with pointers - the array name itself acts like a pointer to the first element, and you can use pointer operations to access and modify array elements.

## What You'll Learn

- Understanding array names as pointers
- Accessing array element addresses using `&a[index]`
- Using `*a` to get value of first element
- Modifying array elements through pointer
- Understanding array address representation

## Complete Code

```c
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a[5] = {10, 20, 30, 40, 50};

    printf("0th index address    = %p\n", &a[0]);
    printf("1st index address    = %p\n", &a[1]);
    printf("2nd index address    = %p\n", &a[2]);
    printf("3rd index address    = %p\n", &a[3]);
    printf("4th index address    = %p\n\n", &a[4]);

    printf("address of the array = %p\n\n", &a);

    printf("value of *a          = %d\n\n", *a); // 10 -> as it holds the memory address of the first value, so it will reference the first value               

    *a = 200; // value changed 10 to 200

    for (int i = 0; i < 5; i++)
    {
        printf("index %d = %d\n", i, a[i]);
    }

    return 0;
}
```

## Code Breakdown

### Step 1: Array Initialization

```c
int a[5] = {10, 20, 30, 40, 50};
```

**What happens:**
- Creates array with 5 elements
- Initializes with values: 10, 20, 30, 40, 50

### Step 2: Printing Individual Element Addresses

```c
printf("0th index address    = %p\n", &a[0]);
printf("1st index address    = %p\n", &a[1]);
printf("2nd index address    = %p\n", &a[2]);
printf("3rd index address    = %p\n", &a[3]);
printf("4th index address    = %p\n\n", &a[4]);
```

**What happens:**
- Prints memory address of each array element
- Each address is consecutive (elements stored contiguously)
- Addresses increase by size of int (typically 4 bytes)

### Step 3: Printing Array Address

```c
printf("address of the array = %p\n\n", &a);
```

**What happens:**
- `&a` gives the address of the entire array
- This address is same as `&a[0]` (first element)

### Step 4: Dereferencing Array Name

```c
printf("value of *a          = %d\n\n", *a);
```

**What happens:**
- `a` is the array name, which acts like a pointer to first element
- `*a` dereferences to get value of first element
- Prints `10` (value at `a[0]`)

**Comment explanation:**
- Array name holds the memory address of the first value
- Dereferencing references the first value

### Step 5: Modifying Array Through Pointer

```c
*a = 200; // value changed 10 to 200
```

**What happens:**
- `*a` accesses the first element
- Changes `a[0]` from 10 to 200
- Original array is modified

### Step 6: Printing Modified Array

```c
for (int i = 0; i < 5; i++)
{
    printf("index %d = %d\n", i, a[i]);
}
```

**What happens:**
- Loops through all array elements
- Prints index and value
- Shows `a[0]` is now 200

## Key Concepts

### Array Name as Pointer

The array name `a` acts like a pointer to the first element:

```c
a      → points to first element (like &a[0])
*a     → value of first element (a[0])
&a[0]  → address of first element
```

### Array Addresses

```c
&a[0]  // Address of first element
&a[1]  // Address of second element (4 bytes after first)
&a     // Address of array (same as &a[0])
```

All elements are stored in consecutive memory locations.

### Modifying Through Pointer

```c
*a = 200;  // Changes a[0] to 200
```

Since `a` points to first element, `*a` modifies `a[0]`.

## Expected Output

```
0th index address    = 000000000061FE00
1st index address    = 000000000061FE04
2nd index address    = 000000000061FE08
3rd index address    = 000000000061FE0C
4th index address    = 000000000061FE10

address of the array = 000000000061FE00

value of *a          = 10

index 0 = 200
index 1 = 20
index 2 = 30
index 3 = 40
index 4 = 50
```

**Explanation:**
- Addresses are consecutive (increase by 4 bytes for int)
- Array address `&a` equals first element address `&a[0]`
- `*a` gives value 10 initially
- After `*a = 200`, first element becomes 200

## How to Compile and Run

1. **Compile the program:**

   ```bash
   gcc pointer-in-array.c -o pointer-in-array
   ```

2. **Run the executable:**

   ```bash
   ./pointer-in-array
   ```

## Common Beginner Mistakes

### 1. Confusing Array Name and Address

```c
// Array name 'a' is already like a pointer
printf("%p", a);      // Address of first element
printf("%p", &a);     // Address of array (same as above)
printf("%p", &a[0]);  // Address of first element (same as above)
```

### 2. Wrong Dereferencing

```c
// ❌ Wrong - trying to dereference array incorrectly
printf("%d", *a[0]);  // Error: wrong syntax

// ✅ Correct - array name acts as pointer
printf("%d", *a);     // Value of first element
printf("%d", a[0]);   // Value of first element (equivalent)
```

## Key Takeaways

1. Array name `a` acts like pointer to first element
2. `*a` gives value of first element `a[0]`
3. `&a[0]` and `&a` give same address (first element)
4. Array elements are stored in consecutive memory
5. Can modify array elements using pointer operations: `*a = value`
