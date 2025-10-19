# Accessing and Modifying Array Elements in C

## Overview

This program demonstrates how to access individual elements within an array using indices and how to modify array elements after initialization. Understanding array element access is essential for working with arrays effectively in any programming task.

## What You'll Learn

- How to access specific array elements using indices
- Understanding zero-based indexing in detail
- How to read values from array positions
- How to modify existing array elements
- Relationship between index and element position
- Practical examples of array manipulation

## Complete Code

```c
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int array[5] = {1, 2, 3, 4, 5};

    printf("%d\n", array[2]);

    //! assign another value in an index :
    array[4] = 7;
    printf("%d", array[4]);

    return 0;
}

/*
    ! To access an element of an array :
    Every element of an array can be accessed with the index value. Each value has it's own index value. Starts from 0. We can take like this :

    index : 0  1  2  3  4
    value : 1  2  3  4  5

    array[2] -> it will print 3

    ! Assign another value in a particular index :
    array[4] = 7;

    before :
        index : 0  1  2  3  4
        value : 1  2  3  4  5

    after :
        index : 0  1  2  3  4
        value : 1  2  3  4  7
*/
```

## Understanding Array Indexing

### Zero-Based Indexing

C uses **zero-based indexing**, meaning the first element is at position 0.

```
Array: int array[5] = {1, 2, 3, 4, 5};

Index:     0    1    2    3    4
Value:     1    2    3    4    5
Position: 1st  2nd  3rd  4th  5th
```

**Key Rule:** For an array of size N, valid indices are 0 to N-1.

### Index-to-Value Mapping

| Array Notation | Index | Value | Description          |
| -------------- | ----- | ----- | -------------------- |
| `array[0]`     | 0     | 1     | First element        |
| `array[1]`     | 1     | 2     | Second element       |
| `array[2]`     | 2     | 3     | Third element        |
| `array[3]`     | 3     | 4     | Fourth element       |
| `array[4]`     | 4     | 5     | Fifth (last) element |

## Code Breakdown

### Step 1: Array Declaration and Initialization

```c
int array[5] = {1, 2, 3, 4, 5};
```

Creates an array with 5 elements:

```
Memory:    [1] [2] [3] [4] [5]
Index:      0   1   2   3   4
```

### Step 2: Accessing an Element

```c
printf("%d\n", array[2]);
```

**What happens:**

- `array[2]` retrieves the value at index 2
- Index 2 corresponds to the **third** element (value = 3)
- Prints: `3`

**Syntax:** `array_name[index]`

### Step 3: Modifying an Element

```c
array[4] = 7;
```

**What happens:**

- Accesses index 4 (the last element, originally 5)
- Assigns new value `7` to that position
- Array now contains: `{1, 2, 3, 4, 7}`

**Before modification:**

```
Index:  0  1  2  3  4
Value:  1  2  3  4  5
```

**After modification:**

```
Index:  0  1  2  3  4
Value:  1  2  3  4  7
```

### Step 4: Printing Modified Element

```c
printf("%d", array[4]);
```

**Output:** `7` (the new value at index 4)

## Expected Output

```
3
7
```

**Explanation:**

- First line: `3` - value at index 2
- Second line: `7` - modified value at index 4

## Accessing Array Elements - Detailed Examples

### Reading Elements

```c
int numbers[5] = {10, 20, 30, 40, 50};

int first = numbers[0];    // first = 10
int second = numbers[1];   // second = 20
int middle = numbers[2];   // middle = 30
int fourth = numbers[3];   // fourth = 40
int last = numbers[4];     // last = 50
```

### Using Elements in Expressions

```c
int scores[3] = {85, 90, 78};

int total = scores[0] + scores[1] + scores[2];  // total = 253
int average = total / 3;                        // average = 84

printf("Total: %d\n", total);
printf("Average: %d\n", average);
```

### Comparing Array Elements

```c
int values[4] = {15, 25, 15, 30};

if (values[0] == values[2]) {
    printf("First and third elements are equal\n");
}

if (values[1] > values[0]) {
    printf("Second element is greater than first\n");
}
```

## Modifying Array Elements - Detailed Examples

### Direct Assignment

```c
int numbers[5] = {1, 2, 3, 4, 5};

numbers[0] = 100;     // Change first element to 100
numbers[2] = 300;     // Change third element to 300
numbers[4] = 500;     // Change last element to 500

// Array now: {100, 2, 300, 4, 500}
```

### Incremental Updates

```c
int counters[3] = {0, 0, 0};

counters[0]++;        // counters[0] becomes 1
counters[1] += 5;     // counters[1] becomes 5
counters[2] = counters[2] * 2 + 1;  // counters[2] becomes 1

// Array now: {1, 5, 1}
```

### Using Variables as Indices

```c
int data[5] = {10, 20, 30, 40, 50};
int index = 3;

printf("%d\n", data[index]);   // Prints: 40

data[index] = 400;             // Modifies data[3] to 400
printf("%d\n", data[index]);   // Prints: 400
```

### Swapping Array Elements

```c
int arr[3] = {1, 2, 3};

// Swap first and last elements
int temp = arr[0];       // temp = 1
arr[0] = arr[2];         // arr[0] = 3
arr[2] = temp;           // arr[2] = 1

// Array now: {3, 2, 1}
```

## Array Element Operations

### Mathematical Operations

```c
int numbers[4] = {5, 10, 15, 20};

// Arithmetic operations
int doubled = numbers[1] * 2;           // 20
int sum = numbers[0] + numbers[3];      // 25
int difference = numbers[3] - numbers[2]; // 5
int product = numbers[1] * numbers[2];  // 150

// Modifying with operations
numbers[0] = numbers[0] + 10;    // numbers[0] = 15
numbers[2] *= 2;                 // numbers[2] = 30
numbers[3]--;                    // numbers[3] = 19
```

### Finding Maximum/Minimum

```c
int values[5] = {34, 12, 56, 23, 89};

int max = values[0];  // Assume first is maximum

// Check each element
if (values[1] > max) max = values[1];
if (values[2] > max) max = values[2];
if (values[3] > max) max = values[3];
if (values[4] > max) max = values[4];

printf("Maximum: %d\n", max);  // Output: Maximum: 89
```

### Copying Elements Between Arrays

```c
int source[3] = {10, 20, 30};
int destination[3];

// Copy elements one by one
destination[0] = source[0];
destination[1] = source[1];
destination[2] = source[2];

// Now destination = {10, 20, 30}
```

## Index Calculation Examples

### Accessing Last Element

```c
int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int size = 10;

int lastElement = arr[size - 1];  // arr[9] = 10
```

### Accessing Middle Element

```c
int arr[7] = {10, 20, 30, 40, 50, 60, 70};
int size = 7;

int middleIndex = size / 2;          // middleIndex = 3
int middleElement = arr[middleIndex]; // arr[3] = 40
```

### Accessing Elements from End

```c
int arr[5] = {1, 2, 3, 4, 5};
int size = 5;

int secondLast = arr[size - 2];  // arr[3] = 4
int thirdLast = arr[size - 3];   // arr[2] = 3
```

## How to Compile and Run

### Compilation

```bash
gcc accessing-array-elements.c -o accessing-array-elements
```

### Execution

```bash
./accessing-array-elements
```

### Expected Terminal Output

```
3
7
```

## Common Beginner Mistakes

### 1. Index Out of Bounds

```c
int arr[5] = {1, 2, 3, 4, 5};

// ❌ Wrong - index 5 doesn't exist!
printf("%d", arr[5]);  // Undefined behavior - may crash!

// ❌ Wrong - negative index
printf("%d", arr[-1]); // Invalid!

// ✅ Correct - valid indices are 0 to 4
printf("%d", arr[4]);  // Prints: 5
```

**Remember:** For array of size N, valid indices are 0 to N-1.

### 2. Confusing Index with Value

```c
int arr[5] = {10, 20, 30, 40, 50};

// ❌ Wrong thinking: "Give me element 30"
// No direct way to access by value!

// ✅ Correct: "Give me element at index 2"
printf("%d", arr[2]);  // Prints: 30
```

### 3. Off-by-One Errors

```c
int arr[10];

// ❌ Wrong - trying to access 10th element
// Valid indices are 0-9, not 1-10!
arr[10] = 100;  // Out of bounds!

// ✅ Correct - last element is at index 9
arr[9] = 100;
```

### 4. Misunderstanding Index Counting

```c
int arr[5] = {100, 200, 300, 400, 500};

// ❌ Wrong thinking: "First element is arr[1]"
printf("%d", arr[1]);  // This prints 200, not 100!

// ✅ Correct: "First element is arr[0]"
printf("%d", arr[0]);  // Prints: 100
```

### 5. Incorrect Modification Syntax

```c
int arr[3] = {1, 2, 3};

// ❌ Wrong - can't reassign entire array
arr = {10, 20, 30};  // Compilation error!

// ❌ Wrong - missing index
arr = 10;  // Compilation error!

// ✅ Correct - modify individual elements
arr[0] = 10;
arr[1] = 20;
arr[2] = 30;
```

## Array Bounds and Safety

### Valid vs Invalid Access

```c
int numbers[6] = {5, 10, 15, 20, 25, 30};

// ✅ Valid accesses (indices 0-5)
numbers[0]  // Valid: 5
numbers[3]  // Valid: 20
numbers[5]  // Valid: 30

// ❌ Invalid accesses
numbers[-1]  // Invalid: negative index
numbers[6]   // Invalid: beyond array size
numbers[10]  // Invalid: way beyond array size
```

### Why Out-of-Bounds is Dangerous

```c
int arr[5] = {1, 2, 3, 4, 5};

// This might:
// - Read garbage values
// - Crash your program
// - Corrupt other data
// - Cause security vulnerabilities
arr[10] = 100;  // DANGER!
```

**Important:** C doesn't check array bounds at runtime! It's your responsibility to ensure indices are valid.

## Practical Examples

### Example 1: Student Grade Lookup

```c
int grades[5] = {85, 92, 78, 95, 88};

printf("Student 1 grade: %d\n", grades[0]);
printf("Student 3 grade: %d\n", grades[2]);
printf("Student 5 grade: %d\n", grades[4]);
```

**Output:**

```
Student 1 grade: 85
Student 3 grade: 78
Student 5 grade: 88
```

### Example 2: Temperature Update

```c
float temps[7] = {72.5, 75.0, 73.5, 71.0, 74.5, 76.0, 72.0};

printf("Monday temp: %.1f\n", temps[0]);

// Correct Tuesday's reading
temps[1] = 74.5;
printf("Tuesday temp (corrected): %.1f\n", temps[1]);
```

### Example 3: Score Adjustment

```c
int scores[4] = {100, 85, 90, 78};

// Apply 5-point curve to each score
scores[0] = scores[0] + 5;  // 105 (capped at 100 in reality)
scores[1] = scores[1] + 5;  // 90
scores[2] = scores[2] + 5;  // 95
scores[3] = scores[3] + 5;  // 83
```

### Example 4: Inventory Management

```c
int inventory[3] = {50, 30, 25};  // Item quantities

// Customer buys 5 of first item
inventory[0] = inventory[0] - 5;  // 45 remaining

// Restock second item by 20
inventory[1] = inventory[1] + 20;  // 50 in stock

printf("Item 1: %d units\n", inventory[0]);
printf("Item 2: %d units\n", inventory[1]);
printf("Item 3: %d units\n", inventory[2]);
```

## Memory Visualization

```c
int arr[5] = {1, 2, 3, 4, 5};
```

### Before: `array[4] = 7;`

```
Memory Address:  1000  1004  1008  1012  1016
Index:              0     1     2     3     4
Value:              1     2     3     4     5
```

### After: `array[4] = 7;`

```
Memory Address:  1000  1004  1008  1012  1016
Index:              0     1     2     3     4
Value:              1     2     3     4     7  ← Changed
```

Only the value at index 4 is modified; other elements remain unchanged.

## Best Practices

1. **Always Use Valid Indices**

   ```c
   int size = 5;
   int arr[size];
   // Valid: 0 to size-1
   for (int i = 0; i < size; i++) {
       arr[i] = i * 10;
   }
   ```

2. **Store Array Size in a Variable**

   ```c
   #define SIZE 10
   int data[SIZE];

   // Use SIZE instead of hardcoding 10
   for (int i = 0; i < SIZE; i++) { }
   ```

3. **Check Bounds Before User Input**

   ```c
   int arr[5];
   int index;
   scanf("%d", &index);

   if (index >= 0 && index < 5) {
       printf("%d", arr[index]);
   } else {
       printf("Invalid index!\n");
   }
   ```

4. **Use Meaningful Variable Names**
   ```c
   int studentScores[30];
   int topScore = studentScores[0];  // Clear intent
   ```

## Key Takeaways

- Array indices start at 0, not 1
- For an array of size N, valid indices are 0 to N-1
- Access elements using syntax: `array[index]`
- Modify elements using: `array[index] = newValue;`
- C does not check array bounds - you must ensure valid indices
- Out-of-bounds access causes undefined behavior (crashes, wrong data)
- Elements can be read, modified, and used in expressions like regular variables
- Always remember: index position ≠ element value

## Next Steps

After mastering element access, you'll learn:

1. **Array Input/Output with Loops** - Reading multiple elements from user and displaying them efficiently
2. **Array Traversal** - Processing all elements systematically
3. **Array Algorithms** - Searching, sorting, and manipulating arrays
4. **Multi-dimensional Arrays** - Working with 2D arrays and matrices