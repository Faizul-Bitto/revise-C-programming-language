# Arrays in C

## Overview

This section covers arrays in C programming. Arrays are collections of elements of the same data type stored in contiguous memory locations. They allow you to store and manipulate multiple values efficiently using a single variable name with an index.

## Topics Covered

- **Array Declaration**: Creating arrays with different data types and sizes
- **Accessing Array Elements**: Reading and writing values at specific indices
- **Array Input/Output**: Getting array values from users and displaying them
- **Reversing Arrays**: Algorithms to reverse the order of array elements
- **Sum of Array Values**: Calculating the total sum of all elements
- **Array Operations**: Common operations like insertion, deletion, and reversal

## What You'll Learn

- Declaring arrays of different sizes and types
- Understanding zero-based indexing in arrays
- Accessing and modifying array elements using indices
- Iterating through arrays using loops
- Performing common array operations and algorithms
- Working with array bounds and avoiding out-of-bounds errors

## Key Concepts

### Array Declaration

```c
int numbers[5];           // Declares array of 5 integers
float prices[10];         // Declares array of 10 floats
char name[20];            // Declares character array (string)
```

### Array Initialization

```c
int arr[5] = {1, 2, 3, 4, 5};  // Initialize with values
int arr[] = {1, 2, 3};          // Size determined automatically
```

### Accessing Elements

```c
int arr[5] = {10, 20, 30, 40, 50};
arr[0] = 100;  // Modify first element
int value = arr[2];  // Access third element (value = 30)
```

## Modules in This Section

1. **Array Declaring**: Creating and initializing arrays
2. **Accessing Array Elements**: Reading and writing array values
3. **Array Input/Output**: User input and display operations
4. **Reverse the Array**: Array reversal algorithms
5. **Sum of All Values of an Array**: Summation operations
6. **Array Operations**: Advanced operations including insertion, deletion, and reversal
