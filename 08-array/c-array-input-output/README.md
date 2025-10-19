# Array Input and Output Using Loops in C

## Overview

This program demonstrates how to efficiently take input from users into an array and display all array elements using loops. Combining arrays with loops is one of the most powerful and commonly used programming patterns in C.

## What You'll Learn

- How to read multiple values into an array using loops
- How to display all array elements efficiently
- Practical integration of arrays and for loops
- Real-world applications of array input/output
- Efficient data collection and display techniques

## Why Use Loops with Arrays?

### Without Loops (Inefficient)

```c
int arr[5];

// Taking input - repetitive and tedious!
scanf("%d", &arr[0]);
scanf("%d", &arr[1]);
scanf("%d", &arr[2]);
scanf("%d", &arr[3]);
scanf("%d", &arr[4]);

// Printing output - equally tedious!
printf("%d ", arr[0]);
printf("%d ", arr[1]);
printf("%d ", arr[2]);
printf("%d ", arr[3]);
printf("%d ", arr[4]);
```

### With Loops (Efficient)

```c
int arr[5];

// Taking input - clean and scalable!
for (int i = 0; i < 5; i++) {
    scanf("%d", &arr[i]);
}

// Printing output - simple and clear!
for (int i = 0; i < 5; i++) {
    printf("%d ", arr[i]);
}
```

**Benefits:**

- Works for any array size (5, 100, 1000 elements!)
- Fewer lines of code
- Easier to maintain and modify
- Reduces human error

## Complete Code

```c
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int array[5];

    for (int i = 0; i <= 4; i++)
    {
        scanf("%d", &array[i]);
    }

    //! show all elements of the array
    for (int i = 0; i <= 4; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}

/*
    ! To take input in the array, we have to run a loop and take the values one by one :
    for (int i = 0; i <= 4; i++)
    {
        scanf("%d", &array[i]);
    }

    ! And then we can simply print the elements with a loop :
    for (int i = 0; i <= 4; i++)
    {
        printf("%d ", array[i]);
    }
*/
```

## Code Breakdown

### Step 1: Array Declaration

```c
int array[5];
```

**What happens:**

- Creates an array that can store 5 integers
- Memory allocated but values are uninitialized
- Ready to receive input from user

```
Index:  0    1    2    3    4
Value:  ?    ?    ?    ?    ?  (uninitialized)
```

### Step 2: Taking Input with Loop

```c
for (int i = 0; i <= 4; i++)
{
    scanf("%d", &array[i]);
}
```

**How it works:**

**Loop Execution:**

1. `i = 0`: Read value into `array[0]`
2. `i = 1`: Read value into `array[1]`
3. `i = 2`: Read value into `array[2]`
4. `i = 3`: Read value into `array[3]`
5. `i = 4`: Read value into `array[4]`
6. `i = 5`: Condition `i <= 4` is false, loop exits

**Detailed Process:**

```
User Input: 10 20 30 40 50

Iteration 1: i=0 → scanf reads 10 → array[0] = 10
Iteration 2: i=1 → scanf reads 20 → array[1] = 20
Iteration 3: i=2 → scanf reads 30 → array[2] = 30
Iteration 4: i=3 → scanf reads 40 → array[3] = 40
Iteration 5: i=4 → scanf reads 50 → array[4] = 50
```

**After input:**

```
Index:  0    1    2    3    4
Value:  10   20   30   40   50
```

### Step 3: Displaying Output with Loop

```c
for (int i = 0; i <= 4; i++)
{
    printf("%d ", array[i]);
}
```

**How it works:**

**Loop Execution:**

1. `i = 0`: Print `array[0]` → Outputs: `10 `
2. `i = 1`: Print `array[1]` → Outputs: `20 `
3. `i = 2`: Print `array[2]` → Outputs: `30 `
4. `i = 3`: Print `array[3]` → Outputs: `40 `
5. `i = 4`: Print `array[4]` → Outputs: `50 `

**Complete Output:** `10 20 30 40 50 `

## How Loop Variable Works as Index

The loop variable `i` serves as the array index:

```c
for (int i = 0; i <= 4; i++)
{
    scanf("%d", &array[i]);
    // When i=0: reads into array[0]
    // When i=1: reads into array[1]
    // When i=2: reads into array[2]
    // And so on...
}
```

**Key Insight:** The changing value of `i` allows us to access each array position sequentially!

## Sample Input/Output

### Example 1: Basic Usage

**Input:**

```
10 20 30 40 50
```

**Output:**

```
10 20 30 40 50
```

### Example 2: Different Numbers

**Input:**

```
5 15 25 35 45
```

**Output:**

```
5 15 25 35 45
```

### Example 3: Negative Numbers

**Input:**

```
-5 10 -15 20 -25
```

**Output:**

```
-5 10 -15 20 -25
```

## Variations and Extensions

### Variation 1: Using i < 5 Instead of i <= 4

```c
// Both are equivalent!

// Method 1: Using <= (as in the program)
for (int i = 0; i <= 4; i++)

// Method 2: Using < (more common)
for (int i = 0; i < 5; i++)
```

**Recommendation:** Use `i < 5` as it's more flexible and conventional.

### Variation 2: Dynamic Array Size

```c
int size;
printf("Enter array size: ");
scanf("%d", &size);

int array[size];  // Variable-length array (C99 feature)

// Input
for (int i = 0; i < size; i++) {
    scanf("%d", &array[i]);
}

// Output
for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
}
```

### Variation 3: Formatted Input with Prompts

```c
int array[5];

printf("Enter 5 numbers:\n");
for (int i = 0; i < 5; i++) {
    printf("Element %d: ", i + 1);
    scanf("%d", &array[i]);
}

printf("\nYou entered:\n");
for (int i = 0; i < 5; i++) {
    printf("array[%d] = %d\n", i, array[i]);
}
```

**Output Example:**

```
Enter 5 numbers:
Element 1: 10
Element 2: 20
Element 3: 30
Element 4: 40
Element 5: 50

You entered:
array[0] = 10
array[1] = 20
array[2] = 30
array[3] = 40
array[4] = 50
```

### Variation 4: Working with Different Data Types

#### Float Array

```c
float prices[4];

printf("Enter 4 prices:\n");
for (int i = 0; i < 4; i++) {
    scanf("%f", &prices[i]);
}

printf("Prices: ");
for (int i = 0; i < 4; i++) {
    printf("$%.2f ", prices[i]);
}
```

#### Character Array

```c
char letters[5];

printf("Enter 5 characters:\n");
for (int i = 0; i < 5; i++) {
    scanf(" %c", &letters[i]);  // Note the space before %c
}

printf("Letters: ");
for (int i = 0; i < 5; i++) {
    printf("%c ", letters[i]);
}
```

### Variation 5: Adding Line Numbers

```c
int numbers[5];

for (int i = 0; i < 5; i++) {
    scanf("%d", &numbers[i]);
}

printf("\nArray elements:\n");
for (int i = 0; i < 5; i++) {
    printf("[%d] = %d\n", i, numbers[i]);
}
```

**Output:**

```
Array elements:
[0] = 10
[1] = 20
[2] = 30
[3] = 40
[4] = 50
```

## Practical Examples

### Example 1: Calculate Sum of Array Elements

```c
int numbers[5];
int sum = 0;

printf("Enter 5 numbers:\n");
for (int i = 0; i < 5; i++) {
    scanf("%d", &numbers[i]);
    sum += numbers[i];  // Add to sum while reading
}

printf("\nNumbers: ");
for (int i = 0; i < 5; i++) {
    printf("%d ", numbers[i]);
}

printf("\nSum: %d\n", sum);
```

**Sample Run:**

```
Enter 5 numbers:
10 20 30 40 50

Numbers: 10 20 30 40 50
Sum: 150
```

### Example 2: Find Maximum Value

```c
int values[5];

printf("Enter 5 values:\n");
for (int i = 0; i < 5; i++) {
    scanf("%d", &values[i]);
}

int max = values[0];  // Assume first is maximum
for (int i = 1; i < 5; i++) {
    if (values[i] > max) {
        max = values[i];
    }
}

printf("Maximum value: %d\n", max);
```

### Example 3: Count Even and Odd Numbers

```c
int numbers[10];
int evenCount = 0, oddCount = 0;

printf("Enter 10 numbers:\n");
for (int i = 0; i < 10; i++) {
    scanf("%d", &numbers[i]);

    if (numbers[i] % 2 == 0) {
        evenCount++;
    } else {
        oddCount++;
    }
}

printf("\nEven numbers: %d\n", evenCount);
printf("Odd numbers: %d\n", oddCount);
```

### Example 4: Reverse Array Display

```c
int arr[5];

printf("Enter 5 numbers:\n");
for (int i = 0; i < 5; i++) {
    scanf("%d", &arr[i]);
}

printf("Original order: ");
for (int i = 0; i < 5; i++) {
    printf("%d ", arr[i]);
}

printf("\nReverse order: ");
for (int i = 4; i >= 0; i--) {
    printf("%d ", arr[i]);
}
```

**Sample Run:**

```
Enter 5 numbers:
1 2 3 4 5

Original order: 1 2 3 4 5
Reverse order: 5 4 3 2 1
```

### Example 5: Grade Analysis

```c
int grades[5];
int total = 0;

printf("Enter grades for 5 students:\n");
for (int i = 0; i < 5; i++) {
    printf("Student %d: ", i + 1);
    scanf("%d", &grades[i]);
    total += grades[i];
}

float average = (float)total / 5;

printf("\nGrade Report:\n");
for (int i = 0; i < 5; i++) {
    printf("Student %d: %d ", i + 1, grades[i]);

    if (grades[i] >= average) {
        printf("(Above/At Average)\n");
    } else {
        printf("(Below Average)\n");
    }
}

printf("\nClass Average: %.2f\n", average);
```

## How to Compile and Run

### Compilation

```bash
gcc array-input-output.c -o array-input-output
```

### Execution

```bash
./array-input-output
```

### Providing Input

**Method 1: Manual Input**

```bash
./array-input-output
10
20
30
40
50
```

**Method 2: Using Input File**

```bash
./array-input-output < input.txt
```

**Method 3: All in One Line**

```bash
./array-input-output
10 20 30 40 50
```

## Common Beginner Mistakes

### 1. Wrong Loop Boundary

```c
int arr[5];

// ❌ Wrong - loops 6 times (0, 1, 2, 3, 4, 5)
// arr[5] is out of bounds!
for (int i = 0; i <= 5; i++) {
    scanf("%d", &arr[i]);
}

// ✅ Correct - loops 5 times (0, 1, 2, 3, 4)
for (int i = 0; i < 5; i++) {
    scanf("%d", &arr[i]);
}

// ✅ Also correct - loops 5 times
for (int i = 0; i <= 4; i++) {
    scanf("%d", &arr[i]);
}
```

### 2. Forgetting the & in scanf

```c
int arr[5];

// ❌ Wrong - missing & before arr[i]
for (int i = 0; i < 5; i++) {
    scanf("%d", arr[i]);  // Compilation error or crash!
}

// ✅ Correct - & needed for scanf
for (int i = 0; i < 5; i++) {
    scanf("%d", &arr[i]);
}
```

### 3. Starting Loop from 1 Instead of 0

```c
int arr[5];

// ❌ Wrong - starts from 1, misses arr[0]
for (int i = 1; i < 5; i++) {
    scanf("%d", &arr[i]);
}
// Result: arr[0] is uninitialized!

// ✅ Correct - starts from 0
for (int i = 0; i < 5; i++) {
    scanf("%d", &arr[i]);
}
```

### 4. Wrong Format Specifier

```c
float prices[3];

// ❌ Wrong - using %d for float
for (int i = 0; i < 3; i++) {
    scanf("%d", &prices[i]);  // Wrong!
}

// ✅ Correct - using %f for float
for (int i = 0; i < 3; i++) {
    scanf("%f", &prices[i]);
}
```

### 5. Not Initializing Before Using

```c
int arr[5];
int sum = 0;

// ❌ Wrong - using uninitialized array
for (int i = 0; i < 5; i++) {
    sum += arr[i];  // arr[i] has garbage values!
}

// ✅ Correct - read values first
for (int i = 0; i < 5; i++) {
    scanf("%d", &arr[i]);
}

for (int i = 0; i < 5; i++) {
    sum += arr[i];
}
```

## Best Practices

### 1. Use Constants for Array Size

```c
#define SIZE 5

int main() {
    int array[SIZE];

    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < SIZE; i++) {
        printf("%d ", array[i]);
    }
}
```

**Benefits:** Easy to change size in one place.

### 2. Provide Clear User Instructions

```c
printf("Enter %d numbers: ", SIZE);
for (int i = 0; i < SIZE; i++) {
    scanf("%d", &array[i]);
}
```

### 3. Separate Input and Output Loops

```c
// Input phase
for (int i = 0; i < SIZE; i++) {
    scanf("%d", &array[i]);
}

// Processing phase (if needed)
// ...

// Output phase
for (int i = 0; i < SIZE; i++) {
    printf("%d ", array[i]);
}
```

**Benefits:** Clearer code structure, easier to debug.

### 4. Use Meaningful Variable Names

```c
// ❌ Not clear
int a[10];
for (int i = 0; i < 10; i++) { }

// ✅ Clear and descriptive
int studentScores[10];
for (int studentIndex = 0; studentIndex < 10; studentIndex++) { }
```

### 5. Add Visual Formatting to Output

```c
printf("\n===== Array Elements =====\n");
for (int i = 0; i < SIZE; i++) {
    printf("[%d]: %d\n", i, array[i]);
}
printf("==========================\n");
```

## Performance Considerations

### Why Loops are Efficient for Arrays

**For 1000 elements:**

**Without loop:** 1000 separate scanf statements = 1000+ lines of code
**With loop:** 3 lines of code (for loop with scanf)

```c
// Just 3 lines handles ANY size!
for (int i = 0; i < 1000; i++) {
    scanf("%d", &array[i]);
}
```

## Key Takeaways

- Loops make array input/output efficient and scalable
- Loop variable (`i`) serves as the array index
- Use `for (int i = 0; i < size; i++)` as standard pattern
- Always use `&` with scanf for array elements
- Separate loops for input and output make code clearer
- Start loop from 0 (zero-based indexing)
- Loop condition should be `i < size` or `i <= size-1`
- This pattern works for any array size and data type

