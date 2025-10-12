# Nested Loops in C

## Overview

Nested loops are loops that are placed inside other loops. When you have a loop inside another loop, the inner loop completes all its iterations for each single iteration of the outer loop. This concept is essential for working with multi-dimensional data structures like matrices, creating patterns, and solving complex problems that require multiple levels of repetition.

## What You'll Learn

- Understanding nested loop structure and execution flow
- How inner and outer loops interact with each other
- Practical applications of nested loops
- Visualizing nested loop execution patterns
- Common use cases for nested loops in programming

## Program Structure

### Complete Code

```c
#include <stdio.h>
#include <math.h>

int main()
{
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}
```

### Code Explanation

The program uses two nested `for` loops to print a pattern of numbers:

1. **Outer Loop**: Runs 3 times (i from 1 to 3)
2. **Inner Loop**: Runs 5 times for each outer loop iteration (j from 1 to 5)
3. **Printing**: Outputs the value of j followed by a space
4. **Line Break**: After each inner loop completes, prints a newline character

## How Nested Loops Work

### Execution Flow

Let's trace through the execution step by step:

1. **First Outer Iteration (i = 1)**:

   - Inner loop runs with j = 1 to 5
   - Prints: "1 2 3 4 5 "
   - Prints newline

2. **Second Outer Iteration (i = 2)**:

   - Inner loop runs again with j = 1 to 5
   - Prints: "1 2 3 4 5 "
   - Prints newline

3. **Third Outer Iteration (i = 3)**:
   - Inner loop runs again with j = 1 to 5
   - Prints: "1 2 3 4 5 "
   - Prints newline

### Visual Representation

```
Outer Loop (i=1) → Inner Loop (j=1,2,3,4,5) → Output: "1 2 3 4 5" + newline
Outer Loop (i=2) → Inner Loop (j=1,2,3,4,5) → Output: "1 2 3 4 5" + newline
Outer Loop (i=3) → Inner Loop (j=1,2,3,4,5) → Output: "1 2 3 4 5" + newline
```

## Key Concepts

### 1. Loop Hierarchy

In nested loops:

- The **outer loop** controls how many times the entire inner loop runs
- The **inner loop** completes all its iterations for each single iteration of the outer loop
- Variables in inner loops can use variables from outer loops

### 2. Execution Pattern

```
Outer Loop Iteration 1:
  Inner Loop: 1, 2, 3, 4, 5
Outer Loop Iteration 2:
  Inner Loop: 1, 2, 3, 4, 5
Outer Loop Iteration 3:
  Inner Loop: 1, 2, 3, 4, 5
```

### 3. Variable Scope

- Variables declared in the outer loop (like `i`) are accessible in the inner loop
- Variables declared in the inner loop (like `j`) are only accessible within the inner loop

## Program Output

When you run this program, the output will be:

```
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
```

### Output Analysis

- Three rows of numbers (controlled by the outer loop)
- Each row contains numbers 1 through 5 (controlled by the inner loop)
- Each number is followed by a space
- Each row ends with a newline character

## Practical Applications

### 1. Pattern Printing

Nested loops are commonly used to create patterns:

```c
// Print a rectangle of stars
for (int i = 1; i <= 3; i++) {
    for (int j = 1; j <= 5; j++) {
        printf("* ");
    }
    printf("\n");
}
```

### 2. Matrix Operations

Processing 2D arrays (matrices):

```c
int matrix[3][5];
for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 5; j++) {
        matrix[i][j] = i * j;  // Some operation
    }
}
```

### 3. Multiplication Tables

Creating multiplication tables:

```c
for (int i = 1; i <= 10; i++) {
    for (int j = 1; j <= 10; j++) {
        printf("%d ", i * j);
    }
    printf("\n");
}
```

## How to Compile and Run

1. **Compile the program:**

   ```bash
   gcc nested-loop.c -o nested-loop
   ```

2. **Run the executable:**

   ```bash
   ./nested-loop
   ```

3. **See the output:**
   ```
   1 2 3 4 5
   1 2 3 4 5
   1 2 3 4 5
   ```

## Common Beginner Mistakes

### 1. Confusing Inner and Outer Loop Variables

```c
// ❌ Confusing - using same variable name
for (int i = 1; i <= 3; i++) {
    for (int i = 1; i <= 5; i++) {  // Same variable name!
        printf("%d ", i);
    }
    printf("\n");
}
```

```c
// ✅ Clear - using different variable names
for (int i = 1; i <= 3; i++) {
    for (int j = 1; j <= 5; j++) {  // Different variable name
        printf("%d ", j);
    }
    printf("\n");
}
```

### 2. Forgetting the Line Break

```c
// ❌ Without newline - all on one line
for (int i = 1; i <= 3; i++) {
    for (int j = 1; j <= 5; j++) {
        printf("%d ", j);
    }
    // Missing printf("\n");
}
// Output: 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5
```

```c
// ✅ With newline - each sequence on separate line
for (int i = 1; i <= 3; i++) {
    for (int j = 1; j <= 5; j++) {
        printf("%d ", j);
    }
    printf("\n");  // Line break after each inner loop
}
```

### 3. Incorrect Loop Bounds

```c
// ❌ Wrong bounds
for (int i = 1; i < 3; i++) {      // Only runs 2 times (1,2)
    for (int j = 1; j < 5; j++) {  // Only runs 4 times (1,2,3,4)
        printf("%d ", j);
    }
    printf("\n");
}
// Output: Only 2 rows instead of 3
```

```c
// ✅ Correct bounds
for (int i = 1; i <= 3; i++) {      // Runs 3 times (1,2,3)
    for (int j = 1; j <= 5; j++) {  // Runs 5 times (1,2,3,4,5)
        printf("%d ", j);
    }
    printf("\n");
}
```

## Practice Exercises

### Exercise 1: Number Rectangle

Modify the program to print numbers 1-3 in 5 rows:

**Expected Output:**

```
1 2 3
1 2 3
1 2 3
1 2 3
1 2 3
```

### Exercise 2: Increasing Pattern

Create a pattern where each row shows increasing numbers:

**Expected Output:**

```
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
```

### Exercise 3: Decreasing Pattern

Create a pattern where each row shows decreasing numbers:

**Expected Output:**

```
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
```

### Exercise 4: Row Numbers

Modify the program to print the row number instead of 1-5:

**Expected Output:**

```
1 1 1 1 1
2 2 2 2 2
3 3 3 3 3
```

## Advanced Concepts

### 1. Triple Nested Loops

You can have loops nested within loops within loops:

```c
for (int i = 1; i <= 2; i++) {           // Layer 1
    for (int j = 1; j <= 3; j++) {       // Layer 2
        for (int k = 1; k <= 4; k++) {   // Layer 3
            printf("%d ", k);
        }
        printf("\n");
    }
    printf("--\n");
}
```

### 2. Dependent Loop Bounds

Using outer loop variables to control inner loop bounds:

```c
for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= i; j++) {  // Inner bound depends on outer variable
        printf("%d ", j);
    }
    printf("\n");
}
```

## Key Takeaways

1. **Nested loops** are loops inside other loops
2. The **inner loop** completes all iterations for each single iteration of the **outer loop**
3. Proper **variable naming** is crucial to avoid confusion
4. **Line breaks** are important for organizing output
5. Nested loops are essential for **multi-dimensional data** and **pattern creation**
6. **Variable scope** matters - inner loops can access outer loop variables
7. Pay attention to **loop bounds** to get the desired number of iterations