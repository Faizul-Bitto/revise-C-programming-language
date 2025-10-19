# Sum of All Array Values in C

## Overview

This program demonstrates how to calculate the sum of all elements in an array. It combines reading input, displaying elements, and computing the total sum efficiently using a single loop with an accumulator variable. This is a fundamental array operation used in statistics, financial calculations, and many algorithmic problems.

## What You'll Learn

- How to calculate the sum of array elements
- Using accumulator variables to build up totals
- Combining multiple operations in a single loop
- Efficient array processing techniques
- Dynamic array sizing with user input
- Displaying intermediate and final results

## Complete Code

```c
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int array[n];

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);

        printf("%d ", array[i]);

        sum = sum + array[i];
    }

    printf("\n\n");

    printf("%d", sum);

    return 0;
}
```

## Code Breakdown

### Step 1: Reading Array Size

```c
int n;
scanf("%d", &n);
```

**What happens:**

- Declares variable `n` to store the number of elements
- Reads the size from user input
- Allows flexible array sizing

**Example:** User enters `5` → array will have 5 elements

### Step 2: Creating the Array

```c
int array[n];
```

**What happens:**

- Creates a Variable Length Array (VLA) of size `n`
- Memory allocated based on user input
- Array is ready to receive values

### Step 3: Initializing Sum Accumulator

```c
int sum = 0;
```

**Critical step:**

- **Must initialize `sum` to 0** before the loop
- This variable will accumulate (build up) the total
- Starting at 0 ensures accurate addition

**Why 0?**

- Addition identity: `0 + x = x`
- First element added: `sum = 0 + array[0]`
- Without initialization: `sum` contains garbage value → wrong result!

### Step 4: Reading, Displaying, and Summing

```c
for (int i = 0; i < n; i++)
{
    scanf("%d", &array[i]);      // Read element
    printf("%d ", array[i]);     // Display element
    sum = sum + array[i];        // Add to sum
}
```

**This loop does three things simultaneously:**

1. **Input**: Reads value into `array[i]`
2. **Output**: Prints the value with a space
3. **Accumulation**: Adds the value to running total

**Detailed execution with n=5:**

```
Iteration 1 (i=0):
  scanf reads 10 → array[0] = 10
  printf outputs: "10 "
  sum = 0 + 10 = 10

Iteration 2 (i=1):
  scanf reads 20 → array[1] = 20
  printf outputs: "20 "
  sum = 10 + 20 = 30

Iteration 3 (i=2):
  scanf reads 30 → array[2] = 30
  printf outputs: "30 "
  sum = 30 + 30 = 60

Iteration 4 (i=3):
  scanf reads 40 → array[3] = 40
  printf outputs: "40 "
  sum = 60 + 40 = 100

Iteration 5 (i=4):
  scanf reads 50 → array[4] = 50
  printf outputs: "50 "
  sum = 100 + 50 = 150
```

**After loop:**

- Screen shows: `10 20 30 40 50 `
- Variable `sum` contains: `150`

### Step 5: Formatting Output

```c
printf("\n\n");
```

**What happens:**

- Prints two newline characters
- Creates visual separation between array elements and sum
- Makes output more readable

### Step 6: Displaying Final Sum

```c
printf("%d", sum);
```

**What happens:**

- Prints the accumulated total
- Shows the final result of all additions

## Expected Output Format

```
10 20 30 40 50

150
```

**Breakdown:**

- **Line 1**: All array elements separated by spaces
- **Line 2**: Empty line
- **Line 3**: The sum of all elements

## Understanding the Accumulator Pattern

### What is an Accumulator?

An **accumulator** is a variable that stores a running total or accumulated result as you process data iteratively.

### Basic Accumulator Pattern

```c
int sum = 0;              // 1. Initialize accumulator

for (int i = 0; i < n; i++) {
    sum = sum + value;    // 2. Add to accumulator
}

printf("%d", sum);        // 3. Use final result
```

### Visual Representation of Accumulation

```
Input values: 10, 20, 30, 40, 50

Initial:     sum = 0
After 10:    sum = 0 + 10 = 10
After 20:    sum = 10 + 20 = 30
After 30:    sum = 30 + 30 = 60
After 40:    sum = 60 + 40 = 100
After 50:    sum = 100 + 50 = 150
Final:       sum = 150
```

### Common Accumulator Operations

| Operation     | Initialize to | Update Formula     | Use Case          |
| ------------- | ------------- | ------------------ | ----------------- |
| Sum           | `0`           | `sum += value`     | Total, average    |
| Product       | `1`           | `prod *= value`    | Factorial, powers |
| Count         | `0`           | `count++`          | Counting items    |
| Maximum       | First element | `if (val > max)`   | Finding largest   |
| Concatenation | `""`          | `strcat(str, val)` | Building strings  |

## Sample Input/Output Examples

### Example 1: Five Positive Numbers

**Input:**

```
5
10 20 30 40 50
```

**Output:**

```
10 20 30 40 50

150
```

**Calculation:** 10 + 20 + 30 + 40 + 50 = 150

### Example 2: Three Numbers

**Input:**

```
3
100 200 300
```

**Output:**

```
100 200 300

600
```

**Calculation:** 100 + 200 + 300 = 600

### Example 3: Single Number

**Input:**

```
1
42
```

**Output:**

```
42

42
```

**Calculation:** Just 42 (only one number)

### Example 4: Including Negative Numbers

**Input:**

```
6
10 -5 20 -10 15 -8
```

**Output:**

```
10 -5 20 -10 15 -8

22
```

**Calculation:** 10 + (-5) + 20 + (-10) + 15 + (-8) = 22

### Example 5: All Zeros

**Input:**

```
4
0 0 0 0
```

**Output:**

```
0 0 0 0

0
```

**Calculation:** 0 + 0 + 0 + 0 = 0

## Alternative Approaches

### Method 1: Separate Loops (Less Efficient)

```c
int n;
scanf("%d", &n);
int array[n];

// Loop 1: Read input
for (int i = 0; i < n; i++) {
    scanf("%d", &array[i]);
}

// Loop 2: Display elements
for (int i = 0; i < n; i++) {
    printf("%d ", array[i]);
}
printf("\n\n");

// Loop 3: Calculate sum
int sum = 0;
for (int i = 0; i < n; i++) {
    sum += array[i];
}

printf("%d", sum);
```

**Pros:** Very clear separation of concerns
**Cons:** Three separate loops (less efficient), more code

### Method 2: Combined Read and Sum (Program's Approach)

```c
int n;
scanf("%d", &n);
int array[n];
int sum = 0;

// Single loop: read, display, and sum
for (int i = 0; i < n; i++) {
    scanf("%d", &array[i]);
    printf("%d ", array[i]);
    sum += array[i];
}

printf("\n\n%d", sum);
```

**Pros:** Most efficient, fewer lines, one pass through data
**Cons:** Combines multiple operations (could be less clear for beginners)

### Method 3: Sum Without Storing Array

```c
int n;
scanf("%d", &n);
int sum = 0;

for (int i = 0; i < n; i++) {
    int value;
    scanf("%d", &value);
    printf("%d ", value);
    sum += value;
}

printf("\n\n%d", sum);
```

**Pros:** No array needed, saves memory
**Cons:** Cannot access values again later

### Method 4: Using Shorter Assignment Operator

```c
for (int i = 0; i < n; i++) {
    scanf("%d", &array[i]);
    printf("%d ", array[i]);
    sum += array[i];  // Equivalent to: sum = sum + array[i]
}
```

**Note:** `sum += array[i]` is shorthand for `sum = sum + array[i]`

## Practical Applications

### Application 1: Calculating Average

```c
int n;
scanf("%d", &n);
int array[n];
int sum = 0;

for (int i = 0; i < n; i++) {
    scanf("%d", &array[i]);
    sum += array[i];
}

float average = (float)sum / n;

printf("Sum: %d\n", sum);
printf("Average: %.2f\n", average);
```

**Example:**

```
Input: 5, 10 20 30 40 50
Sum: 150
Average: 30.00
```

### Application 2: Finding Percentage of Total

```c
int n;
scanf("%d", &n);
int array[n];
int sum = 0;

for (int i = 0; i < n; i++) {
    scanf("%d", &array[i]);
    sum += array[i];
}

printf("Element\tValue\tPercentage\n");
for (int i = 0; i < n; i++) {
    float percentage = (float)array[i] / sum * 100;
    printf("%d\t%d\t%.2f%%\n", i+1, array[i], percentage);
}
```

**Example:**

```
Input: 4, 25 25 25 25
Element Value Percentage
1       25    25.00%
2       25    25.00%
3       25    25.00%
4       25    25.00%
```

### Application 3: Calculating Total Cost

```c
int items;
printf("Enter number of items: ");
scanf("%d", &items);

int prices[items];
int total = 0;

printf("Enter prices:\n");
for (int i = 0; i < items; i++) {
    printf("Item %d: $", i+1);
    scanf("%d", &prices[i]);
    total += prices[i];
}

printf("\nTotal cost: $%d\n", total);
```

### Application 4: Sum of Even vs Odd Numbers

```c
int n;
scanf("%d", &n);
int array[n];
int evenSum = 0, oddSum = 0;

for (int i = 0; i < n; i++) {
    scanf("%d", &array[i]);

    if (array[i] % 2 == 0) {
        evenSum += array[i];
    } else {
        oddSum += array[i];
    }
}

printf("Sum of even numbers: %d\n", evenSum);
printf("Sum of odd numbers: %d\n", oddSum);
printf("Total sum: %d\n", evenSum + oddSum);
```

### Application 5: Running Total Display

```c
int n;
scanf("%d", &n);
int array[n];
int sum = 0;

printf("Element\tRunning Total\n");
for (int i = 0; i < n; i++) {
    scanf("%d", &array[i]);
    sum += array[i];
    printf("%d\t%d\n", array[i], sum);
}
```

**Example:**

```
Input: 4, 10 20 30 40
Element Running Total
10      10
20      30
30      60
40      100
```

## How to Compile and Run

### Compilation

```bash
gcc sum-of-all-values-of-an-array.c -o sum-array -std=c99
```

### Execution

```bash
./sum-array
```

### Interactive Session

```
$ ./sum-array
5                           ← User enters size
10 20 30 40 50             ← User enters elements
10 20 30 40 50             ← Program echoes elements

150                        ← Program displays sum
```

### Using Input File

**Create `input.txt`:**

```
5
10 20 30 40 50
```

**Run:**

```bash
./sum-array < input.txt
```

**Output:**

```
10 20 30 40 50

150
```

## Common Beginner Mistakes

### 1. Not Initializing Sum

```c
int sum;  // ❌ Uninitialized - contains garbage value!

for (int i = 0; i < n; i++) {
    scanf("%d", &array[i]);
    sum = sum + array[i];  // Adding to garbage value!
}
```

**Result:** Random, incorrect sum

```c
int sum = 0;  // ✅ Correct - initialized to 0

for (int i = 0; i < n; i++) {
    scanf("%d", &array[i]);
    sum = sum + array[i];  // Adding to 0, then accumulated total
}
```

### 2. Reinitializing Sum Inside Loop

```c
for (int i = 0; i < n; i++) {
    int sum = 0;  // ❌ Wrong - resets to 0 each iteration!
    scanf("%d", &array[i]);
    sum = sum + array[i];
}
```

**Result:** Sum only contains last element

```c
int sum = 0;  // ✅ Correct - initialize before loop

for (int i = 0; i < n; i++) {
    scanf("%d", &array[i]);
    sum = sum + array[i];
}
```

### 3. Wrong Assignment Operator

```c
int sum = 0;

for (int i = 0; i < n; i++) {
    scanf("%d", &array[i]);
    sum == array[i];  // ❌ Wrong - comparison, not assignment!
}
```

**Result:** Sum remains 0

```c
int sum = 0;

for (int i = 0; i < n; i++) {
    scanf("%d", &array[i]);
    sum = sum + array[i];  // ✅ Correct - assignment
    // or: sum += array[i];
}
```

### 4. Overwriting Sum Instead of Adding

```c
int sum = 0;

for (int i = 0; i < n; i++) {
    scanf("%d", &array[i]);
    sum = array[i];  // ❌ Wrong - overwrites, doesn't add!
}
```

**Result:** Sum equals last element only

```c
int sum = 0;

for (int i = 0; i < n; i++) {
    scanf("%d", &array[i]);
    sum = sum + array[i];  // ✅ Correct - adds to existing sum
}
```

### 5. Integer Overflow

```c
int sum = 0;
// If array contains very large numbers:
// 1000000000 + 1000000000 = 2000000000 (OK)
// 1000000000 + 1500000000 = -1794967296 (OVERFLOW!)
```

**Solution:** Use `long long` for large numbers

```c
long long sum = 0;  // ✅ Can handle much larger totals

for (int i = 0; i < n; i++) {
    scanf("%d", &array[i]);
    sum = sum + array[i];
}

printf("%lld", sum);  // Use %lld for long long
```

## Understanding `sum = sum + array[i]`

### Step-by-Step Evaluation

```c
sum = sum + array[i];
```

**Order of operations:**

1. Read current value of `sum` from memory
2. Read value of `array[i]` from memory
3. Add these two values together
4. Store result back into `sum`

### Visual Example

```
Initial state:
  sum = 0
  array[0] = 10

Execute: sum = sum + array[0];

Step 1: Read sum → 0
Step 2: Read array[0] → 10
Step 3: Calculate 0 + 10 → 10
Step 4: Store 10 into sum

New state:
  sum = 10
  array[0] = 10 (unchanged)
```

### Shorthand Notation

```c
sum = sum + array[i];  // Long form
sum += array[i];       // Shorthand (does exactly the same thing)
```

Both are equivalent! The `+=` operator is just a shorter way to write it.

## Memory Visualization

**After reading 5 elements (10, 20, 30, 40, 50):**

```
Variables in Memory:

n:    [  5  ]

array:
Index:  0     1     2     3     4
Value: [10]  [20]  [30]  [40]  [50]

sum:  [150]
       ↑
    Final accumulated value
```

**Accumulation process:**

```
Initial:           sum = 0
After array[0]:    sum = 0 + 10 = 10
After array[1]:    sum = 10 + 20 = 30
After array[2]:    sum = 30 + 30 = 60
After array[3]:    sum = 60 + 40 = 100
After array[4]:    sum = 100 + 50 = 150
```

## Best Practices

1. **Always initialize accumulator**

   ```c
   int sum = 0;  // ✓ Initialize before loop
   ```

2. **Use meaningful variable names**

   ```c
   int total = 0;           // Clear purpose
   int grandTotal = 0;      // Even more descriptive
   int runningSum = 0;      // Indicates accumulation
   ```

3. **Add input validation**

   ```c
   int n;
   scanf("%d", &n);

   if (n <= 0 || n > 10000) {
       printf("Invalid array size!\n");
       return 1;
   }
   ```

4. **Check for overflow with large numbers**

   ```c
   long long sum = 0;  // Use for large totals
   ```

5. **Consider using separate loops for clarity**

   ```c
   // If code clarity is more important than efficiency,
   // separate input, display, and calculation phases
   ```

6. **Add descriptive output**

   ```c
   printf("Array elements: ");
   for (int i = 0; i < n; i++) {
       printf("%d ", array[i]);
   }
   printf("\n\nSum of all elements: %d\n", sum);
   ```

## Efficiency Considerations

### Single-Pass Advantage

This program uses a **single-pass algorithm** - it processes each element only once.

**Time Complexity:** O(n) - linear time
**Space Complexity:** O(n) - for storing array

### Comparison of Approaches

| Approach         | Loops | Time  | Memory | Efficiency |
| ---------------- | ----- | ----- | ------ | ---------- |
| Three loops      | 3     | O(3n) | O(n)   | ⭐⭐       |
| Single loop      | 1     | O(n)  | O(n)   | ⭐⭐⭐⭐   |
| No array storage | 1     | O(n)  | O(1)   | ⭐⭐⭐⭐⭐ |

**Note:** For small arrays, the difference is negligible. For large datasets (millions of elements), efficiency matters.

## Key Takeaways

- **Accumulators** build up values incrementally
- Always **initialize accumulator to 0** for sums
- Initialize **before the loop**, not inside it
- `sum = sum + value` adds to existing total
- `sum += value` is shorthand for the above
- Single loop can perform multiple operations efficiently
- Works with any array size (limited by memory)
- Essential pattern for statistics and data processing



Understanding array summation is fundamental to data processing, statistics, and many real-world programming tasks. This accumulator pattern appears throughout programming in various forms!
