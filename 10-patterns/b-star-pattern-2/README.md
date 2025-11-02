# Star Pattern 2 - Decreasing Stars

## Overview

This program demonstrates how to print a decreasing star pattern using nested loops. Each line contains one less star than the previous line, creating an inverted triangular pattern.

## What You'll Learn

- Nested loop patterns in reverse
- Decrementing variables for pattern printing
- Understanding descending patterns
- Alternative approaches to decreasing counts

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

    int star = n;

    for (int i = 1; i <= n; i++) // for printing line
    {
        for (int j = 1; j <= star; j++) // for printing *
        {
            printf("*");
        }

        printf("\n");
        star--;
    }

    return 0;
}
```

## Code Breakdown

### Step 1: Read Input and Initialize

```c
int n;
scanf("%d", &n);
int star = n;
```

**What happens:**
- Reads the number of lines to print
- Initializes `star` to `n` (first line will have `n` stars)

**Example Input:**
```
5
```

### Step 2: Outer Loop - Print Lines

```c
for (int i = 1; i <= n; i++) // for printing line
```

**What happens:**
- Loops `n` times to print `n` lines
- `i` represents the current line number

### Step 3: Inner Loop - Print Stars

```c
for (int j = 1; j <= star; j++) // for printing *
{
    printf("*");
}
```

**What happens:**
- Prints `star` number of asterisks on current line
- The number of stars decreases each iteration

### Step 4: New Line and Decrement

```c
printf("\n");
star--;
```

**What happens:**
- Moves to next line after printing stars
- Decrements `star` for next iteration (each line has one less star)

## Pattern Output

**Input:**
```
5
```

**Output:**
```
*****
****
***
**
*
```

## Visual Breakdown

**Line by line execution:**

```
Line 1 (i=1, star=5): Prints 5 stars → *****
Line 2 (i=2, star=4): Prints 4 stars → ****
Line 3 (i=3, star=3): Prints 3 stars → ***
Line 4 (i=4, star=2): Prints 2 stars → **
Line 5 (i=5, star=1): Prints 1 star  → *
```

## Alternative Implementation

### Method 2: Using n-i+1

```c
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) // for printing line
    {
        for (int j = n; j >= i; j--) // for printing *
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
```

**Advantage:**
- No need for separate `star` variable
- Uses descending inner loop: `j = n` down to `j >= i`
- Each iteration starts from `n` and goes down to `i`

## Key Concepts

### Decrement Strategy

**Method 1: Variable Decrement**
```c
int star = n;
for (int i = 1; i <= n; i++)
{
    for (int j = 1; j <= star; j++)
        printf("*");
    star--;  // Decrement after each line
}
```

**Method 2: Descending Inner Loop**
```c
for (int i = 1; i <= n; i++)
{
    for (int j = n; j >= i; j--)  // Count down from n
        printf("*");
}
```

### Pattern Logic

The pattern follows the formula:
- Line 1: `n` stars
- Line `i`: `n-i+1` stars
- Each line has one fewer star than the previous

**Example for n=5:**
```
Line 1: 5 stars (5-1+1 = 5)
Line 2: 4 stars (5-2+1 = 4)
Line 3: 3 stars (5-3+1 = 3)
Line 4: 2 stars (5-4+1 = 2)
Line 5: 1 star  (5-5+1 = 1)
```

## Common Mistakes

### 1. Forgetting Newline

```c
// ❌ Wrong - all stars on one line
for (int i = 1; i <= n; i++)
{
    for (int j = 1; j <= star; j++)
        printf("*");
    star--;
    // Missing printf("\n");!
}

// ✅ Correct
for (int i = 1; i <= n; i++)
{
    for (int j = 1; j <= star; j++)
        printf("*");
    printf("\n");  // Newline after each row
    star--;
}
```

### 2. Not Decrementing Star Variable

```c
// ❌ Wrong - no decrement
for (int i = 1; i <= n; i++)
{
    for (int j = 1; j <= star; j++)
        printf("*");
    printf("\n");
    // Missing star--;!
}
// Output: same number every line

// ✅ Correct
for (int i = 1; i <= n; i++)
{
    for (int j = 1; j <= star; j++)
        printf("*");
    printf("\n");
    star--;  // Decrement for next line
}
```

### 3. Wrong Initial Value

```c
// ❌ Wrong - wrong starting value
int star = n + 1;  // Should be n
// Prints n+1 stars on first line!

// ✅ Correct
int star = n;  // Start with n stars
```

### 4. Wrong Descending Loop Logic

```c
// ❌ Wrong - incorrect descending condition
for (int i = 1; i <= n; i++)
{
    for (int j = n; j > i; j--)  // Should be >=
        printf("*");
    printf("\n");
}
// Misses last star on each line!

// ✅ Correct
for (int i = 1; i <= n; i++)
{
    for (int j = n; j >= i; j--)  // Include j=i
        printf("*");
    printf("\n");
}
```

## Variation Patterns

### Variation 1: Number Pattern Descending

```c
int n;
scanf("%d", &n);

for (int i = 1; i <= n; i++)
{
    for (int j = n; j >= i; j--)
    {
        printf("%d", j);
    }
    printf("\n");
}
```

**Output for n=5:**
```
54321
5432
543
54
5
```

### Variation 2: Counting Pattern

```c
int n;
scanf("%d", &n);

for (int i = 1; i <= n; i++)
{
    for (int j = 1; j <= n-i+1; j++)
    {
        printf("%d", j);
    }
    printf("\n");
}
```

**Output for n=5:**
```
12345
1234
123
12
1
```

### Variation 3: Different Symbol

```c
int n;
scanf("%d", &n);

for (int i = 1; i <= n; i++)
{
    for (int j = n; j >= i; j--)
    {
        printf("#");  // Use # instead of *
    }
    printf("\n");
}
```

## How to Compile and Run

### Compilation

```bash
gcc star-pattern-2.c -o star-pattern-2
```

### Execution

```bash
./star-pattern-2
```

### Sample Run

```bash
$ ./star-pattern-2
5
*****
****
***
**
*
```

## Pattern Formula

For input `n`:
- Total lines: `n`
- Stars on line `i`: `n - i + 1`
- Total stars printed: `n + (n-1) + ... + 1 = n(n+1)/2`

**Example (n=5):**
```
Total stars = 5 + 4 + 3 + 2 + 1 = 15
Formula: 5(5+1)/2 = 15 ✓
```

## Comparison: Pattern 1 vs Pattern 2

### Pattern 1 (Increasing)

```c
int star = 1;
for (int i = 1; i <= n; i++)
{
    for (int j = 1; j <= star; j++)
        printf("*");
    star++;  // Increment
}
```

**Output for n=5:**
```
*
**
***
****
*****
```

### Pattern 2 (Decreasing)

```c
int star = n;
for (int i = 1; i <= n; i++)
{
    for (int j = 1; j <= star; j++)
        printf("*");
    star--;  // Decrement
}
```

**Output for n=5:**
```
*****
****
***
**
*
```

**Key Difference:** Initial value and increment/decrement direction!

## Key Takeaways

- Use decrement strategy for decreasing patterns
- Initialize `star = n` for descending patterns
- Alternative: use `j = n` down to `j >= i` in inner loop
- Formula for line `i`: `n-i+1` stars
- Always include `printf("\n")` after inner loop
- Decrement `star` after each line
- This complements the increasing pattern

Understanding increasing and decreasing patterns is the foundation of pattern programming!
