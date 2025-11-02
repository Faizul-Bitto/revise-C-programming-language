# Selection Sort in Descending Order

## Overview

This program demonstrates the Selection Sort algorithm for sorting an array in descending order (largest to smallest). It's the same algorithm as ascending sort but with the comparison condition reversed.

## What You'll Learn

- How to sort in descending order
- Reversing comparison logic for sorting
- Applying Selection Sort algorithm
- Understanding that algorithm remains the same, only condition changes

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
            if (a[i] < a[j])
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

### Step 2: Selection Sort Algorithm (Descending)

```c
for (int i = 0; i < n; i++)
{
    for (int j = i + 1; j < n; j++)
    {
        if (a[i] < a[j])
        {
            int temp;

            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
}
```

## How Selection Sort Works (Descending)

**Concept:** For each position `i`, find the largest element in the remaining array and place it at position `i`.

**Key Logic:**
- **Outer loop (`i`)**: Current position being filled
- **Inner loop (`j = i + 1`)**: Compares with all elements after position `i`
- **Condition (`a[i] < a[j]`)**: If current element is smaller, swap them
- **Result**: After each iteration, largest element moves to position `i`

## Step-by-Step Execution

**Initial array:** `[5, 2, 8, 1, 9]`

**Iteration 1 (i=0): Find largest in entire array**
```
j=1: Compare a[0]=5 with a[1]=2 → 5 < 2 ✗
j=2: Compare a[0]=5 with a[2]=8 → 5 < 8 ✓ → Swap → [8, 2, 5, 1, 9]
j=3: Compare a[0]=8 with a[3]=1 → 8 < 1 ✗
j=4: Compare a[0]=8 with a[4]=9 → 8 < 9 ✓ → Swap → [9, 2, 5, 1, 8]
Result: [9, 2, 5, 1, 8] (largest at position 0)
```

**Iteration 2 (i=1): Find largest in remaining array**
```
j=2: Compare a[1]=2 with a[2]=5 → 2 < 5 ✓ → Swap → [9, 5, 2, 1, 8]
j=3: Compare a[1]=5 with a[3]=1 → 5 < 1 ✗
j=4: Compare a[1]=5 with a[4]=8 → 5 < 8 ✓ → Swap → [9, 8, 2, 1, 5]
Result: [9, 8, 2, 1, 5] (largest at positions 0,1)
```

**Iteration 3 (i=2):**
```
j=3: Compare a[2]=2 with a[3]=1 → 2 < 1 ✗
j=4: Compare a[2]=2 with a[4]=5 → 2 < 5 ✓ → Swap → [9, 8, 5, 1, 2]
Result: [9, 8, 5, 1, 2] (sorted positions 0,1,2)
```

**Iteration 4 (i=3):**
```
j=4: Compare a[3]=1 with a[4]=2 → 1 < 2 ✓ → Swap → [9, 8, 5, 2, 1]
Result: [9, 8, 5, 2, 1] (sorted)
```

**Final sorted array:** `[9, 8, 5, 2, 1]`

### Step 3: Display Sorted Array

```c
for (int i = 0; i < n; i++)
{
    printf("%d ", a[i]);
}
```

**Output:** `9 8 5 2 1`

## Visual Representation

**Sorting Process:**

```
Initial:  [5, 2, 8, 1, 9]
           ↑
        i=0: Find largest

After i=0: [9, 2, 5, 1, 8]
              ↑
           i=1: Find largest in [2, 5, 1, 8]

After i=1: [9, 8, 2, 1, 5]
                 ↑
              i=2: Find largest in [2, 1, 5]

After i=2: [9, 8, 5, 1, 2]
                    ↑
                 i=3: Find largest in [1, 2]

Final:    [9, 8, 5, 2, 1] ✓ Sorted in descending order!
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
9 8 5 2 1
```

### Example 2: Already Sorted (Descending)

**Input:**
```
5
5 4 3 2 1
```

**Output:**
```
5 4 3 2 1
```

### Example 3: Reverse Order

**Input:**
```
5
1 2 3 4 5
```

**Output:**
```
5 4 3 2 1
```

## Key Concepts

### Comparison Condition

**Descending Sort:**
```c
if (a[i] < a[j])  // If current is smaller, swap
```

**Meaning:** We want larger elements first, so when a[i] < a[j], we swap to get larger value in position i.

### Difference from Ascending

**Ascending Sort:**
```c
if (a[i] > a[j])  // Swap if larger (smaller goes first)
```

**Descending Sort:**
```c
if (a[i] < a[j])  // Swap if smaller (larger goes first)
```

**Key insight:** Only the comparison operator changes!

## Side-by-Side Comparison

| Aspect | Ascending | Descending |
|--------|-----------|------------|
| **Condition** | `a[i] > a[j]` | `a[i] < a[j]` |
| **Output** | Smallest first | Largest first |
| **Example** | 1 2 5 8 9 | 9 8 5 2 1 |
| **Algorithm** | Same | Same |

**Everything else is identical:**
- Same nested loop structure
- Same `j = i + 1` starting point
- Same swapping mechanism
- Same time complexity

## Common Mistakes

### 1. Wrong Comparison Condition

```c
// ❌ Wrong - uses > instead of <
for (int i = 0; i < n; i++)
{
    for (int j = i + 1; j < n; j++)
    {
        if (a[i] > a[j])  // Should be < for descending
        {
            // swap
        }
    }
}

// ✅ Correct
if (a[i] < a[j])  // For descending: swap if smaller
```

### 2. Confusing Ascending vs Descending

**Remember:**
- **Ascending:** `>` swaps larger → smaller goes first
- **Descending:** `<` swaps smaller → larger goes first

### 3. Wrong Starting Point

```c
// ❌ Wrong - checks already sorted positions
for (int j = 0; j < n; j++)  // Should be j = i + 1

// ✅ Correct
for (int j = i + 1; j < n; j++)  // Only check ahead
```

## Time Complexity

**Same as Ascending:**
- **Best Case:** O(n²)
- **Average Case:** O(n²)
- **Worst Case:** O(n²)
- **Space Complexity:** O(1)

## Optimized Version

**True Selection Sort** (find maximum index first):

```c
for (int i = 0; i < n; i++)
{
    int max_idx = i;
    // Find maximum element index
    for (int j = i + 1; j < n; j++)
    {
        if (a[j] > a[max_idx])
            max_idx = j;
    }
    // Swap once per iteration
    if (max_idx != i)
    {
        int temp = a[i];
        a[i] = a[max_idx];
        a[max_idx] = temp;
    }
}
```

**Benefit:** Single swap per iteration

## How to Compile and Run

### Compilation

```bash
gcc descending-order.c -o descending-sort
```

### Execution

```bash
./descending-sort
```

### Sample Run

```bash
$ ./descending-sort
5
5 2 8 1 9
9 8 5 2 1
```

## Real-World Applications

1. **Top scores:** Display highest scores first
2. **Leaderboards:** Rank from best to worst
3. **Priority queues:** Highest priority first
4. **Inventory:** Most expensive items first

## Key Takeaways

- Selection Sort places largest elements first in descending order
- Use `a[i] < a[j]` condition for descending
- Same algorithm as ascending, only condition changes
- Time complexity is O(n²) - same as ascending
- Reverse the comparison operator to change order
- Learning ascending AND descending completes the picture

Mastering both ascending and descending Selection Sort shows you truly understand the algorithm!
