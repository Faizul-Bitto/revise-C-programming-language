# Sum of Two Values Equal to X

## Overview

This program demonstrates how to find if there exist any two elements in an array whose sum equals a target value X. This is a classic two-pointer/cross-checking problem that demonstrates nested loop optimization concepts.

## What You'll Learn

- Checking pairs in arrays
- Using flags for conditional results
- Nested loop strategies for comparison
- Array element traversal techniques
- Boolean logic for problem solving

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

    int x;
    scanf("%d", &x);
    int flag = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == x)
            {
                flag = 1;
            }
        }
    }

    if (flag == 1)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}
```

## Code Breakdown

### Step 1: Read Array Size and Elements

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
1 3 5 7 9
8
```

**After input:**
```
n = 5
a = [1, 3, 5, 7, 9]
```

### Step 2: Read Target Value and Initialize Flag

```c
int x;
scanf("%d", &x);
int flag = 0;
```

**What happens:**
- Reads the target sum `x`
- Initializes flag to 0 (assumes no pair exists)

**Example Input:**
```
8
```

### Step 3: Nested Loop to Check Pairs

```c
for (int i = 0; i < n; i++)
{
    for (int j = i + 1; j < n; j++)
    {
        if (a[i] + a[j] == x)
        {
            flag = 1;
        }
    }
}
```

**How it works:**

**Outer loop** (`i`): Iterates through each element as the first element

**Inner loop** (`j = i + 1`): Starts from the element after `i` to avoid:
- Checking the same element twice
- Comparing `a[i]` with itself
- Re-checking pairs that have already been evaluated

**Example with array [1, 3, 5, 7, 9] and x = 8:**

```
Iteration 1 (i=0, j=1): a[0] + a[1] = 1 + 3 = 4  ≠ 8
Iteration 2 (i=0, j=2): a[0] + a[2] = 1 + 5 = 6  ≠ 8
Iteration 3 (i=0, j=3): a[0] + a[3] = 1 + 7 = 8  = 8 ✓ (flag = 1)
Iteration 4 (i=0, j=4): a[0] + a[4] = 1 + 9 = 10 ≠ 8
Iteration 5 (i=1, j=2): a[1] + a[2] = 3 + 5 = 8  = 8 ✓ (flag already 1)
...
```

**Why `j = i + 1`?** Prevents duplicate checks:
- Without it: Check (i=1, j=0) AND (i=0, j=1) - same pair!
- With it: Only check (i=0, j=1) once

### Step 4: Display Result Based on Flag

```c
if (flag == 1)
{
    printf("Yes");
}
else
{
    printf("No");
}
```

**What happens:**
- If flag is 1: At least one pair sums to X → "Yes"
- If flag is 0: No pairs found → "No"

## Sample Input/Output

### Example 1: Pair Found

**Input:**
```
5
1 3 5 7 9
8
```

**Output:**
```
Yes
```

**Explanation:** Pairs (1, 7) and (3, 5) both sum to 8

### Example 2: No Pair Found

**Input:**
```
4
1 2 3 4
10
```

**Output:**
```
No
```

**Explanation:** Maximum sum is 4+3=7, no pair equals 10

### Example 3: Multiple Pairs

**Input:**
```
6
2 4 6 8 10 12
10
```

**Output:**
```
Yes
```

**Explanation:** Pairs (2, 8), (4, 6) sum to 10

## Visual Representation

**Array: [1, 3, 5, 7, 9], Target: 8**

```
     j=0  j=1  j=2  j=3  j=4
i=0   -    4    6   8✓  10
i=1   -    -    8✓  10  12
i=2   -    -    -   12  14
i=3   -    -    -    -  16
i=4   -    -    -    -   -
```

**Key:**
- Numbers show sum of `a[i] + a[j]`
- 8✓ indicates matching sums
- `-` indicates pairs that aren't checked (j ≤ i)

## Key Concepts

### Flag Pattern

**Boolean flag technique:**
```c
int flag = 0;  // Assume failure
// ... checking logic ...
if (condition met)
    flag = 1;  // Set to success
// ... use flag to determine result ...
```

**Usage:** Track if ANY solution exists among multiple possibilities

### Avoiding Duplicates with `j = i + 1`

**Wrong approach (checks duplicates):**
```c
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)  // j starts from 0
    {
        if (i != j && a[i] + a[j] == x)
        {
            flag = 1;
        }
    }
}
```

**Problems:**
- Checks (i=1, j=0) AND (i=0, j=1) - same pair!
- Extra iterations
- Slower execution

**Correct approach (this code):**
```c
for (int i = 0; i < n; i++)
{
    for (int j = i + 1; j < n; j++)  // j starts from i+1
    {
        if (a[i] + a[j] == x)
        {
            flag = 1;
        }
    }
}
```

**Benefits:**
- Each pair checked exactly once
- Efficient: n(n-1)/2 comparisons instead of n²

## Common Mistakes

### 1. Missing Break After Finding Pair

```c
// Current code - continues checking after finding match
for (int i = 0; i < n; i++)
{
    for (int j = i + 1; j < n; j++)
    {
        if (a[i] + a[j] == x)
        {
            flag = 1;  // No break - continues unnecessarily
        }
    }
}

// More efficient approach
for (int i = 0; i < n && flag == 0; i++)  // Stop if found
{
    for (int j = i + 1; j < n; j++)
    {
        if (a[i] + a[j] == x)
        {
            flag = 1;
            break;  // Exit inner loop
        }
    }
}
```

**Note:** Current code works but could be optimized with break

### 2. Wrong Inner Loop Condition

```c
// ❌ Wrong - checks same element twice
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)  // Should be j = i + 1
    {
        if (a[i] + a[j] == x)
            flag = 1;
    }
}

// ✅ Correct
for (int j = i + 1; j < n; j++)  // Start after i
```

### 3. Not Initializing Flag

```c
// ❌ Wrong - garbage value
int flag;  // May be 1, causing incorrect "Yes"

// ✅ Correct
int flag = 0;  // Initialize to false
```

### 4. Comparing Flag Incorrectly

```c
// ❌ Wrong - uses = instead of ==
if (flag = 1)  // Assignment, not comparison!

// ✅ Correct
if (flag == 1)  // Comparison
```

## Optimization Techniques

### Technique 1: Early Exit

```c
int flag = 0;

for (int i = 0; i < n && flag == 0; i++)  // Stop if found
{
    for (int j = i + 1; j < n && flag == 0; j++)
    {
        if (a[i] + a[j] == x)
        {
            flag = 1;
            break;  // Exit inner loop
        }
    }
}
```

**Benefit:** Stops searching once a pair is found

### Technique 2: Printing Pair

```c
for (int i = 0; i < n; i++)
{
    for (int j = i + 1; j < n; j++)
    {
        if (a[i] + a[j] == x)
        {
            printf("Yes: %d + %d = %d\n", a[i], a[j], x);
            flag = 1;
        }
    }
}
```

**Benefit:** Shows which pairs sum to X

## Time Complexity

**Current implementation:**
- Time Complexity: O(n²) - nested loops
- Space Complexity: O(1) - only flag variable

**Optimized with hash map:**
- Time Complexity: O(n) - single pass
- Space Complexity: O(n) - for hash map

## How to Compile and Run

### Compilation

```bash
gcc sum--of-two-values-equal-of-X.c -o sum-two-values
```

### Execution

```bash
./sum-two-values
```

### Sample Run

```bash
$ ./sum-two-values
5
1 3 5 7 9
8
Yes
```

## Real-World Applications

1. **Two Sum Problem:** Classic interview question
2. **Shopping:** Find two items in cart that sum to a budget
3. **Inventory:** Check if two products combined match a target price
4. **Game Theory:** Find winning combinations
5. **Array Analysis:** Detect complementary pairs

## Key Takeaways

- Use flag pattern to track if ANY solution exists
- `j = i + 1` prevents duplicate pair checking
- Nested loops check all unique pairs
- Current approach is O(n²) - works but not optimal for large arrays
- Can be optimized with hash map to O(n)
- Foundation for understanding two-pointer techniques

This problem demonstrates fundamental array traversal and comparison strategies!
