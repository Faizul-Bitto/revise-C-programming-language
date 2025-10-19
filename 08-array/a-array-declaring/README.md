# Array Declaration and Initialization in C

## Overview

This program introduces arrays in C programming - a fundamental data structure that allows you to store multiple values of the same data type in a single variable. Instead of creating separate variables for each value, arrays let you organize related data efficiently under one name.

## What You'll Learn

- What arrays are and why they're useful
- How to declare arrays
- How to initialize arrays with values
- Array syntax and structure
- Memory layout of arrays
- Different ways to work with various data types in arrays

## What is an Array?

An **array** is a collection of elements of the same data type stored in contiguous memory locations. Think of it as a row of boxes, where each box can hold a value of the same type.

### Why Use Arrays?

**Without Arrays (Inefficient):**

```c
int num1 = 1;
int num2 = 2;
int num3 = 3;
int num4 = 4;
int num5 = 5;
// Managing 5 separate variables is tedious!
```

**With Arrays (Efficient):**

```c
int array[5] = {1, 2, 3, 4, 5};
// All 5 values stored together!
```

## Complete Code

```c
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int array[5] = {1, 2, 3, 4, 5};

    printf("%d", array);

    return 0;
}

/*
    ! To initiate an array :
    We need to first declare the 'data type'
    Then we need to declare 'the name of the array'
    Then in the third bracket '[]', we have to declare the size of that array

    int array[5];

    ! To declare an array directly :
    We need to first declare the 'data type'
    Then we need to declare 'the name of the array'
    Then in the third bracket '[]', we have to declare the size of that array
    Then, asign the value with third bracket '{}'

    int array[5] = {1, 2, 3, 4, 5};

    We can also declare different data types like float, double etc. if we want
*/
```

## Code Breakdown

### Method 1: Declaration Only

```c
int array[5];
```

**Syntax:** `data_type array_name[size];`

- **`int`** - Data type of elements (all elements must be same type)
- **`array`** - Name of the array
- **`[5]`** - Size of array (number of elements it can hold)

**What happens:** Memory space for 5 integers is allocated, but values are uninitialized (contain garbage values).

### Method 2: Declaration + Initialization (Recommended)

```c
int array[5] = {1, 2, 3, 4, 5};
```

**Syntax:** `data_type array_name[size] = {value1, value2, value3, ...};`

- **`int`** - Data type
- **`array`** - Array name
- **`[5]`** - Size (5 elements)
- **`{1, 2, 3, 4, 5}`** - Initial values enclosed in curly braces

**What happens:** Array is created and all 5 positions are filled with the specified values immediately.

## Array Structure and Indexing

Arrays use **zero-based indexing**, meaning the first element is at index 0, not 1.

```
Index:  0    1    2    3    4
Value:  1    2    3    4    5
```

### Memory Visualization

```
Memory Address:  1000  1004  1008  1012  1016
Index:              0     1     2     3     4
Value:              1     2     3     4     5
Array Name: array
```

Each integer takes 4 bytes in memory (typically), so they're stored in consecutive locations.

## Array Declaration Variations

### 1. Basic Declaration (Uninitialized)

```c
int numbers[10];
// Creates space for 10 integers, but values are undefined
```

### 2. Full Initialization

```c
int numbers[5] = {10, 20, 30, 40, 50};
// All 5 elements are initialized
```

### 3. Partial Initialization

```c
int numbers[5] = {10, 20};
// Index 0 = 10, Index 1 = 20
// Index 2, 3, 4 are automatically set to 0
```

### 4. Automatic Size Detection

```c
int numbers[] = {1, 2, 3, 4, 5, 6};
// Compiler automatically determines size is 6
```

### 5. Explicit Zero Initialization

```c
int numbers[5] = {0};
// All elements set to 0: {0, 0, 0, 0, 0}
```

## Working with Different Data Types

### Float Array

```c
float prices[3] = {19.99, 29.99, 39.99};
// Stores decimal values
```

### Double Array

```c
double precise[4] = {3.14159265, 2.71828182, 1.41421356, 1.73205080};
// For high-precision decimal values
```

### Character Array

```c
char letters[5] = {'a', 'b', 'c', 'd', 'e'};
// Stores individual characters
```

### Long Long Int Array

```c
long long int bigNumbers[3] = {1000000000000, 2000000000000, 3000000000000};
// For very large integers
```

## Important Note About the Program Output

```c
printf("%d", array);
```

**What this prints:** A memory address (like `6422296`), not the array elements!

**Why?** `array` by itself refers to the starting memory address of the array, not its contents.

**To print array elements**, you need to:

1. Access individual elements using indices: `array[0]`, `array[1]`, etc.
2. Use loops to print all elements (covered in later lessons)

```c
// Correct way to print individual elements
printf("%d", array[0]);  // Prints: 1
printf("%d", array[1]);  // Prints: 2
```

## Key Concepts

### 1. Contiguous Memory

Arrays store elements in consecutive memory locations, making access very fast.

```
Variable: int x = 5;     Memory: [5] at address 1000
Array: int arr[3];       Memory: [?][?][?] at addresses 1000, 1004, 1008
```

### 2. Fixed Size

Once declared, array size cannot be changed during program execution.

```c
int arr[5];
// This array will ALWAYS hold exactly 5 elements
```

### 3. Same Data Type

All elements in an array must be of the same data type.

```c
int numbers[3] = {1, 2, 3};        // ✅ Valid - all integers
int mixed[3] = {1, 2.5, 'a'};      // ❌ Invalid - different types
```

### 4. Zero-Based Indexing

First element is at index 0, last element is at index (size-1).

```c
int arr[5] = {10, 20, 30, 40, 50};
// First element: arr[0] = 10
// Last element: arr[4] = 50
```

## Array Size Calculation

You can calculate the number of elements in an array:

```c
int numbers[10];
int size = sizeof(numbers) / sizeof(numbers[0]);
// sizeof(numbers) = 40 bytes (10 integers × 4 bytes each)
// sizeof(numbers[0]) = 4 bytes (one integer)
// size = 40 / 4 = 10 elements
```

## Expected Output

When running this program:

```
6422296
```

(The actual number will vary - it's a memory address)

**Note:** This demonstrates that `array` alone prints the memory address, not the values.

## How to Compile and Run

### Using GCC

```bash
gcc array-declare.c -o array-declare
./array-declare
```

### Using Online Compilers

1. Copy the code to an online C compiler
2. Click "Run"
3. Observe the output (memory address)

## Common Beginner Mistakes

### 1. Wrong Index Access

```c
int arr[5] = {1, 2, 3, 4, 5};

// ❌ Wrong - index 5 doesn't exist (only 0-4)
printf("%d", arr[5]);  // Undefined behavior!

// ✅ Correct - last element is at index 4
printf("%d", arr[4]);  // Prints: 5
```

### 2. Incorrect Initialization Syntax

```c
// ❌ Wrong - using parentheses
int arr[3] = (1, 2, 3);

// ✅ Correct - using curly braces
int arr[3] = {1, 2, 3};
```

### 3. Size Mismatch

```c
// ❌ Wrong - 6 values for 5-element array
int arr[5] = {1, 2, 3, 4, 5, 6};  // Compilation error!

// ✅ Correct - matching size
int arr[6] = {1, 2, 3, 4, 5, 6};
```

### 4. Forgetting Array Size

```c
// ❌ Wrong - no size specified for uninitialized array
int arr[];

// ✅ Correct - either specify size or initialize
int arr[5];
int arr[] = {1, 2, 3};
```

### 5. Trying to Print Entire Array with Single printf

```c
int arr[5] = {1, 2, 3, 4, 5};

// ❌ Wrong - prints memory address
printf("%d", arr);

// ✅ Correct - print individual elements
printf("%d", arr[0]);  // Prints first element
// Or use a loop (covered in next lessons)
```

## Comparison: Variables vs Arrays

| Aspect       | Regular Variable     | Array                        |
| ------------ | -------------------- | ---------------------------- |
| Storage      | Single value         | Multiple values              |
| Declaration  | `int x = 5;`         | `int arr[5] = {1,2,3,4,5};`  |
| Memory       | One location         | Contiguous locations         |
| Access       | Direct: `x`          | By index: `arr[0]`, `arr[1]` |
| Size         | Fixed (one value)    | Fixed (declared size)        |
| Modification | `x = 10;`            | `arr[2] = 10;`               |
| Best for     | Single piece of data | Collection of related data   |

## Practical Use Cases for Arrays

1. **Student Grades**: Store all grades for a class

   ```c
   int grades[30];  // For 30 students
   ```

2. **Temperature Readings**: Store daily temperatures

   ```c
   float temps[365];  // Temperature for each day of the year
   ```

3. **Game Scores**: Track player scores

   ```c
   int scores[10];  // Top 10 high scores
   ```

4. **Product Prices**: Store catalog prices

   ```c
   double prices[100];  // Prices for 100 products
   ```

5. **Character Data**: Store text
   ```c
   char name[50];  // String of up to 49 characters (+1 for null terminator)
   ```

## Memory Efficiency

### Without Arrays:

```c
int score1, score2, score3, score4, score5;
// 5 separate variables = harder to manage
// Can't easily loop through them
```

### With Arrays:

```c
int scores[5];
// One variable name for all 5 values
// Can use loops to process all elements
// More organized and scalable
```

## Best Practices

1. **Use Meaningful Names**

   ```c
   int studentAges[30];      // ✅ Clear purpose
   int arr[30];              // ❌ Unclear
   ```

2. **Initialize Arrays**

   ```c
   int values[5] = {0};      // ✅ All elements set to 0
   int values[5];            // ❌ Garbage values
   ```

3. **Use Constants for Size**

   ```c
   #define MAX_STUDENTS 30
   int ages[MAX_STUDENTS];   // ✅ Easy to change size
   ```

4. **Stay Within Bounds**

   ```c
   int arr[5];
   // Valid indices: 0, 1, 2, 3, 4
   // Invalid indices: -1, 5, 6, 100, etc.
   ```

5. **Match Size with Purpose**
   ```c
   int daysInWeek[7];        // ✅ Exact size needed
   int daysInWeek[100];      // ❌ Wastes memory
   ```


## Key Takeaways

- Arrays store multiple values of the same type under one name
- Array indices start at 0, not 1
- Array size must be specified and cannot change
- Use curly braces `{}` for initialization
- Arrays are stored in contiguous memory locations
- Printing array name alone shows memory address, not contents
- Arrays make managing multiple related values much easier
