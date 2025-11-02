# Selection Sort in Ascending Order

## Overview

This program demonstrates the Selection Sort algorithm for sorting an array in ascending order (smallest to largest). Selection Sort is one of the simplest sorting algorithms and is great for learning the fundamentals of sorting.

## What You'll Learn

- How Selection Sort algorithm works
- Sorting arrays in ascending order
- Nested loops for comparison and swapping
- Understanding time complexity of sorting algorithms
- In-place sorting techniques

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

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int temp;

                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
```

## Code Breakdown

### Step 1: Read Array

```c
int n;
scanf("%d", &n);

int a[n];

for (int i = 0; i < n; i++)
{
    scanf("%d", &a[i]);
}
```

**What happens:**
- Reads the number of elements `n`
- Creates an array `a` of size `n`
- Reads `n` elements into the array

**Example Input:**
```
5
5 2 8 1 9
```

**After input:**
```
n = 5
a = [5, 2, 8, 1, 9]
```

### Step 2: Selection Sort Algorithm

```c
for (int i = 0; i < n; i++)
{
    for (int j = i + 1; j < n; j++)
    {
        if (a[i] > a[j])
        {
            int temp;

            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
}
```

## How Selection Sort Works

**Concept:** For each position `i`, find the smallest element in the remaining array and place it at position `i`.

**Key Logic:**
- **Outer loop (`i`)**: Current position being filled
- **Inner loop (`j = i + 1`)**: Compares with all elements after position `i`
- **Condition (`a[i] > a[j]`)**: If current element is larger, swap them
- **Result**: After each iteration of outer loop, smallest element moves to position `i`

## Step-by-Step Execution

**Initial array:** `[5, 2, 8, 1, 9]`

**Iteration 1 (i=0): Find smallest in entire array**
```
j=1: Compare a[0]=5 with a[1]=2 → 5 > 2 ✓ → Swap → [2, 5, 8, 1, 9]
j=2: Compare a[0]=2 with a[2]=8 → 2 > 8 ✗
j=3: Compare a[0]=2 with a[3]=1 → 2 > 1 ✓ → Swap → [1, 5, 8, 2, 9]
j=4: Compare a[0]=1 with a[4]=9 → 1 > 9 ✗
Result: [1, 5, 8, 2, 9] (smallest at position 0)
```

**Iteration 2 (i=1): Find smallest in remaining array**
```
j=2: Compare a[1]=5 with a[2]=8 → 5 > 8 ✗
j=3: Compare a[1]=5 with a[3]=2 → 5 > 2 ✓ → Swap → [1, 2, 8, 5, 9]
j=4: Compare a[1]=2 with a[4]=9 → 2 > 9 ✗
Result: [1, 2, 8, 5, 9] (smallest at positions 0,1)
```

**Iteration 3 (i=2):**
```
j=3: Compare a[2]=8 with a[3]=5 → 8 > 5 ✓ → Swap → [1, 2, 5, 8, 9]
j=4: Compare a[2]=5 with a[4]=9 → 5 > 9 ✗
Result: [1, 2, 5, 8, 9] (sorted positions 0,1,2)
```

**Iteration 4 (i=3):**
```
j=4: Compare a[3]=8 with a[4]=9 → 8 > 9 ✗
Result: [1, 2, 5, 8, 9] (sorted)
```

**Final sorted array:** `[1, 2, 5, 8, 9]`

### Step 3: Display Sorted Array

```c
for (int i = 0; i < n; i++)
{
    printf("%d ", a[i]);
}
```

**Output:** `1 2 5 8 9`

## Visual Representation

**Sorting Process:**

```
Initial:  [5, 2, 8, 1, 9]
           ↑
        i=0: Find smallest

After i=0: [1, 5, 8, 2, 9]
              ↑
           i=1: Find smallest in [5, 8, 2, 9]

After i=1: [1, 2, 8, 5, 9]
                 ↑
              i=2: Find smallest in [8, 5, 9]

After i=2: [1, 2, 5, 8, 9]
                    ↑
                 i=3: Find smallest in [8, 9]

Final:    [1, 2, 5, 8, 9] ✓ Sorted!
```

## Sample Input/Output

### Example 1: Basic Sort

**Input:**
```
5
5 2 8 1 9
```

**Output:**
```
1 2 5 8 9
```

### Example 2: Already Sorted

**Input:**
```
5
1 2 3 4 5
```

**Output:**
```
1 2 3 4 5
```

### Example 3: Reverse Order

**Input:**
```
5
9 8 7 6 5
```

**Output:**
```
5 6 7 8 9
```

## Key Concepts

### Comparison Condition

**Ascending Sort:**
```c
if (a[i] > a[j])  // If current is larger, swap
```

**Meaning:** We want smaller elements first, so when a[i] > a[j], we swap to get smaller value in position i.

### Why `j = i + 1`?

**Prevents redundancy:**
- Each position i already has the correct smallest element
- No need to compare with previous positions
- Only look ahead

**Visual:**
```
[1, 2, 5, 8, 9]
 ↑  ↑
i   j=i+1

Position 0 is already smallest, check from 1 onwards
```

### Swapping Mechanism

**Three-step swap:**
```c
temp = a[i];     // Save current value
a[i] = a[j];     // Put smaller value in position i
a[j] = temp;     // Put larger value in position j
```

**Why temp?** Without temp, both a[i] and a[j] would have the same value after `a[i] = a[j]`.

## Common Mistakes

### 1. Wrong Comparison Condition

```c
// ❌ Wrong - descending instead of ascending
for (int i = 0; i < n; i++)
{
    for (int j = i + 1; j < n; j++)
    {
        if (a[i] < a[j])  // Should be > for ascending
        {
            // swap
        }
    }
}

// ✅ Correct
if (a[i] > a[j])  // For ascending: swap if larger
```

### 2. Wrong Inner Loop Starting Point

```c
// ❌ Wrong - checks already sorted positions
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)  // Should be j = i + 1
    {
        if (i != j && a[i] > a[j])
        {
            // swap
        }
    }
}

// ✅ Correct
for (int j = i + 1; j < n; j++)  // Only check ahead
```

### 3. Not Using Temp Variable

```c
// ❌ Wrong - loses value
a[i] = a[j];
a[j] = a[i];  // Both become a[j]!

// ✅ Correct
temp = a[i];
a[i] = a[j];
a[j] = temp;
```

### 4. Swapping Every Time

```c
// ❌ Wrong - inefficient
for (int i = 0; i < n; i++)
{
    for (int j = i + 1; j < n; j++)
    {
        // Always swap without checking
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
}

// ✅ Correct
if (a[i] > a[j])  // Only swap when needed
{
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}
```

## Time Complexity

**Selection Sort:**
- **Best Case:** O(n²) - still check all pairs
- **Average Case:** O(n²)
- **Worst Case:** O(n²)
- **Space Complexity:** O(1) - in-place sorting

**Number of comparisons:** n(n-1)/2

## Advantages and Disadvantages

**Advantages:**
- Simple to understand and implement
- In-place sorting (no extra memory)
- Stable for some implementations

**Disadvantages:**
- O(n²) time complexity - slow for large arrays
- Not efficient for nearly sorted arrays
- Many swaps compared to other algorithms

## Optimized Version

**True Selection Sort** (finds minimum index first):

```c
for (int i = 0; i < n; i++)
{
    int min_idx = i;
    // Find minimum element index
    for (int j = i + 1; j < n; j++)
    {
        if (a[j] < a[min_idx])
            min_idx = j;
    }
    // Swap once per iteration
    if (min_idx != i)
    {
        int temp = a[i];
        a[i] = a[min_idx];
        a[min_idx] = temp;
    }
}
```

**Benefit:** Only one swap per iteration instead of multiple swaps

## How to Compile and Run

### Compilation

```bash
gcc ascending-order.c -o ascending-sort
```

### Execution

```bash
./ascending-sort
```

### Sample Run

```bash
$ ./ascending-sort
5
5 2 8 1 9
1 2 5 8 9
```

## Real-World Applications

1. **Small datasets:** When n < 20
2. **Educational purposes:** Teaching sorting concepts
3. **Simple implementations:** Where code simplicity matters
4. **Memory-constrained:** When O(n) space is expensive

## Key Takeaways

- Selection Sort places smallest elements first
- Use `a[i] > a[j]` condition for ascending order
- `j = i + 1` avoids redundant comparisons
- Always use temp variable for swapping
- Time complexity is O(n²)
- Great for learning, not for production large datasets

Understanding Selection Sort builds the foundation for learning more efficient algorithms like Merge Sort and Quick Sort!
