# Star Pattern 1 - Increasing Stars

## Overview

This program demonstrates how to print a simple increasing star pattern using nested loops. Each line contains one more star than the previous line, creating a right-aligned triangular pattern.

## What You'll Learn

- Nested loop patterns
- Incrementing variables for pattern printing
- Understanding outer and inner loop relationship
- Basic pattern printing logic

## Complete Code

```c
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, star = 1;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) // for printing line
    {
        for (int j = 1; j <= star; j++) // for printing *
        {
            printf("*");
        }

        printf("\n");
        star++;
    }

    return 0;
}
```

## Code Breakdown

### Step 1: Read Input

```c
int n, star = 1;
scanf("%d", &n);
```

**What happens:**
- Reads the number of lines to print
- Initializes `star` variable to 1 (number of stars on first line)

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
- Inner loop executes `star` times

### Step 4: New Line and Increment

```c
printf("\n");
star++;
```

**What happens:**
- Moves to next line after printing stars
- Increments `star` for next iteration

## Pattern Output

**Input:**
```
5
```

**Output:**
```
*
**
***
****
*****
```

## Visual Breakdown

**Line by line execution:**

```
Line 1 (i=1, star=1): Prints 1 star  → *
Line 2 (i=2, star=2): Prints 2 stars → **
Line 3 (i=3, star=3): Prints 3 stars → ***
Line 4 (i=4, star=4): Prints 4 stars → ****
Line 5 (i=5, star=5): Prints 5 stars → *****
```

## Alternative Implementation

### Method 2: Using Line Number Directly

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
        for (int j = 1; j <= i; j++) // for printing *
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
- Use line number `i` directly as loop limit
- Cleaner code

## Key Concepts

### Nested Loop Relationship

- **Outer loop:** Controls the number of lines
- **Inner loop:** Controls the number of stars per line
- Inner loop limit depends on outer loop (either `star` or `i`)

### Increment Strategy

**Method 1: Variable Increment**
```c
int star = 1;
for (int i = 1; i <= n; i++)
{
    for (int j = 1; j <= star; j++)
        printf("*");
    star++;  // Increment after each line
}
```

**Method 2: Direct Relationship**
```c
for (int i = 1; i <= n; i++)
{
    for (int j = 1; j <= i; j++)  // Use i directly
        printf("*");
}
```

### Pattern Logic

The pattern follows the formula:
- Line `i` contains `i` stars
- Each line has one more star than the previous

## Common Mistakes

### 1. Forgetting Newline

```c
// ❌ Wrong - all stars on one line
for (int i = 1; i <= n; i++)
{
    for (int j = 1; j <= star; j++)
        printf("*");
    star++;
    // Missing printf("\n");!
}
// Output: ********* (all on one line)

// ✅ Correct
for (int i = 1; i <= n; i++)
{
    for (int j = 1; j <= star; j++)
        printf("*");
    printf("\n");  // Newline after each row
    star++;
}
```

### 2. Not Incrementing Star Variable

```c
// ❌ Wrong - no increment
for (int i = 1; i <= n; i++)
{
    for (int j = 1; j <= star; j++)
        printf("*");
    printf("\n");
    // Missing star++;!
}
// Output: *, *, *, *, * (same number every line)

// ✅ Correct
for (int i = 1; i <= n; i++)
{
    for (int j = 1; j <= star; j++)
        printf("*");
    printf("\n");
    star++;  // Increment for next line
}
```

### 3. Wrong Loop Conditions

```c
// ❌ Wrong - wrong upper bound
for (int i = 0; i < n; i++)  // Starts at 0
{
    for (int j = 0; j <= star; j++)  // Wrong condition
        printf("*");
    printf("\n");
    star++;
}

// ✅ Correct
for (int i = 1; i <= n; i++)  // Starts at 1
{
    for (int j = 1; j <= star; j++)  // Correct condition
        printf("*");
    printf("\n");
    star++;
}
```

### 4. Initializing Star to Wrong Value

```c
// ❌ Wrong - wrong initial value
int star = 0;  // Should be 1
for (int i = 1; i <= n; i++)
{
    for (int j = 1; j <= star; j++)
        printf("*");
    printf("\n");
    star++;
}
// Output: empty first line!

// ✅ Correct
int star = 1;  // Start with 1 star
```

## Variation Patterns

### Variation 1: Number Pattern

```c
int n;
scanf("%d", &n);

for (int i = 1; i <= n; i++)
{
    for (int j = 1; j <= i; j++)
    {
        printf("%d", j);
    }
    printf("\n");
}
```

**Output for n=5:**
```
1
12
123
1234
12345
```

### Variation 2: Character Pattern

```c
int n;
scanf("%d", &n);

for (int i = 1; i <= n; i++)
{
    for (int j = 1; j <= i; j++)
    {
        printf("%c", 'A' + j - 1);
    }
    printf("\n");
}
```

**Output for n=5:**
```
A
AB
ABC
ABCD
ABCDE
```

### Variation 3: Different Symbol

```c
int n;
scanf("%d", &n);

for (int i = 1; i <= n; i++)
{
    for (int j = 1; j <= i; j++)
    {
        printf("#");  // Use # instead of *
    }
    printf("\n");
}
```

## How to Compile and Run

### Compilation

```bash
gcc star-pattern-1.c -o star-pattern-1
```

### Execution

```bash
./star-pattern-1
```

### Sample Run

```bash
$ ./star-pattern-1
5
*
**
***
****
*****
```

## Pattern Formula

For input `n`:
- Total lines: `n`
- Stars on line `i`: `i`
- Total stars printed: `1 + 2 + 3 + ... + n = n(n+1)/2`

## Key Takeaways

- Nested loops: outer controls lines, inner controls stars
- Variable increment pattern: each line has one more star
- Alternative: use line number directly as loop limit
- Always include `printf("\n")` after inner loop
- Increment variable after each line
- This is the foundation for more complex patterns

Understanding this basic pattern opens the door to creating any star pattern!
