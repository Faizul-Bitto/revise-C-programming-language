# Selection Sort in C

## Overview

This section covers the Selection Sort algorithm in C programming. Selection Sort is a simple sorting algorithm that works by repeatedly finding the minimum (or maximum) element from the unsorted portion of the array and placing it at the beginning. It's an in-place comparison-based algorithm.

## Topics Covered

- **Selection Sort in Ascending Order**: Sorting arrays from smallest to largest
- **Selection Sort in Descending Order**: Sorting arrays from largest to smallest

## What You'll Learn

- Understanding the Selection Sort algorithm
- Implementing sorting algorithms step by step
- Comparing elements and finding minimum/maximum values
- Swapping array elements
- Sorting arrays in both ascending and descending order
- Time complexity analysis (O(n²))

## Key Concepts

### Algorithm Steps

1. Find the minimum (ascending) or maximum (descending) element
2. Swap it with the first unsorted element
3. Repeat for the remaining unsorted portion

### Ascending Sort

```c
for (int i = 0; i < n-1; i++) {
    int min_index = i;
    for (int j = i+1; j < n; j++) {
        if (arr[j] < arr[min_index]) {
            min_index = j;
        }
    }
    // Swap arr[i] and arr[min_index]
}
```

### Descending Sort

```c
for (int i = 0; i < n-1; i++) {
    int max_index = i;
    for (int j = i+1; j < n; j++) {
        if (arr[j] > arr[max_index]) {
            max_index = j;
        }
    }
    // Swap arr[i] and arr[max_index]
}
```

## Modules in This Section

1. **Selection Sort in Ascending Order**: Sorting from smallest to largest
2. **Selection Sort in Descending Order**: Sorting from largest to smallest
