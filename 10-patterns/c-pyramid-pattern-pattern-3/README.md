# Pyramid Pattern - Centered Triangle

## Overview

This program demonstrates how to print a centered pyramid pattern using nested loops with spaces and stars. This creates a symmetric triangular pattern that is centered on the page.

## What You'll Learn

- Combining space and star printing
- Centering patterns using spaces
- Variable tracking for both spaces and stars
- Creating symmetric patterns

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

    int star = 1;
    int space = n - 1;

    for (int i = 1; i <= n; i++) // for printing line
    {
        for (int j = 1; j <= space; j++) // for printing space
        {
            printf(" ");
        }

        for (int j = 1; j <= star; j++) // for printing *
        {
            printf("*");
        }

        printf("\n");
        star += 2;
        space--;
    }

    return 0;
}
```

## Code Breakdown

### Step 1: Read Input and Initialize

```c
int n;
scanf("%d", &n);
int star = 1;
int space = n - 1;
```

**What happens:**
- Reads the number of lines to print
- Initializes `star = 1` (first line has 1 star)
- Initializes `space = n - 1` (first line has n-1 spaces before the star)

**Example Input:**
```
5
```

**Initial values:**
```
star = 1
space = 4
```

### Step 2: Outer Loop - Print Lines

```c
for (int i = 1; i <= n; i++) // for printing line
```

**What happens:**
- Loops `n` times to print `n` lines

### Step 3: Print Spaces

```c
for (int j = 1; j <= space; j++) // for printing space
{
    printf(" ");
}
```

**What happens:**
- Prints `space` number of spaces at the beginning of each line
- This centers the pyramid

### Step 4: Print Stars

```c
for (int j = 1; j <= star; j++) // for printing *
{
    printf("*");
}
```

**What happens:**
- Prints `star` number of asterisks

### Step 5: New Line and Update Variables

```c
printf("\n");
star += 2;
space--;
```

**What happens:**
- Moves to next line
- Increases stars by 2 (pattern: 1, 3, 5, 7, 9...)
- Decreases spaces by 1

## Pattern Output

**Input:**
```
5
```

**Output:**
```
    *
   ***
  *****
 *******
*********
```

## Visual Breakdown

**Line by line execution:**

```
Line 1 (star=1, space=4):  [    ][*]        →     *
Line 2 (star=3, space=3):  [   ][***]       →    ***
Line 3 (star=5, space=2):  [  ][*****]      →   *****
Line 4 (star=7, space=1):  [ ][*******]     →  *******
Line 5 (star=9, space=0):  [][*********]    → *********
```

**Note:** `[    ]` represents spaces for visualization

## Key Concepts

### Dual Variable Management

Two variables control the pattern:
- **`space`**: Number of leading spaces (decreases: n-1, n-2, ..., 0)
- **`star`**: Number of stars (increases: 1, 3, 5, 7, ...)

### Space Formula

For line `i`:
- Spaces: `n - i`
- Stars: `2i - 1`

**Example for n=5:**
```
Line 1: spaces = 5-1 = 4, stars = 2(1)-1 = 1  ✓
Line 2: spaces = 5-2 = 3, stars = 2(2)-1 = 3  ✓
Line 3: spaces = 5-3 = 2, stars = 2(3)-1 = 5  ✓
Line 4: spaces = 5-4 = 1, stars = 2(4)-1 = 7  ✓
Line 5: spaces = 5-5 = 0, stars = 2(5)-1 = 9  ✓
```

### Star Increment Pattern

**Important:** Stars increase by 2, not 1!
```
Line 1: 1 star
Line 2: 3 stars (1+2)
Line 3: 5 stars (3+2)
Line 4: 7 stars (5+2)
Line 5: 9 stars (7+2)
```

### Why `star += 2`?

- Creates symmetric pyramid
- Each line is 2 stars wider than previous
- Creates the classic centered triangle effect

## Common Mistakes

### 1. Wrong Star Increment

```c
// ❌ Wrong - increment by 1
for (int i = 1; i <= n; i++)
{
    for (int j = 1; j <= space; j++)
        printf(" ");
    for (int j = 1; j <= star; j++)
        printf("*");
    printf("\n");
    star++;  // Should be += 2
    space--;
}

// ✅ Correct
star += 2;  // Increment by 2
```

### 2. Forgetting Spaces

```c
// ❌ Wrong - no spaces, pattern left-aligned
for (int i = 1; i <= n; i++)
{
    for (int j = 1; j <= star; j++)
        printf("*");
    printf("\n");
    star += 2;
}
// Output: left-aligned, not centered

// ✅ Correct
for (int i = 1; i <= n; i++)
{
    for (int j = 1; j <= space; j++)  // Print spaces first
        printf(" ");
    for (int j = 1; j <= star; j++)
        printf("*");
    printf("\n");
    star += 2;
    space--;
}
```

### 3. Wrong Initial Values

```c
// ❌ Wrong - incorrect starting values
int star = 2;     // Should be 1
int space = n;    // Should be n-1

// ✅ Correct
int star = 1;     // First line: 1 star
int space = n - 1; // First line: n-1 spaces
```

### 4. Forgetting to Update Variables

```c
// ❌ Wrong - variables don't change
for (int i = 1; i <= n; i++)
{
    for (int j = 1; j <= space; j++)
        printf(" ");
    for (int j = 1; j <= star; j++)
        printf("*");
    printf("\n");
    // Missing star += 2 and space--;
}
// Output: same pattern repeated n times

// ✅ Correct
printf("\n");
star += 2;  // Update stars
space--;    // Update spaces
```

## Variation Patterns

### Variation 1: Number Pyramid

```c
int n;
scanf("%d", &n);

int value = 1;
int space = n - 1;

for (int i = 1; i <= n; i++)
{
    for (int j = 1; j <= space; j++)
        printf(" ");
    
    for (int j = 1; j <= value; j++)
        printf("%d", j);
    
    printf("\n");
    value += 2;
    space--;
}
```

**Output for n=4:**
```
   1
  123
 12345
1234567
```

### Variation 2: Character Pyramid

```c
int n;
scanf("%d", &n);

int star = 1;
int space = n - 1;

for (int i = 1; i <= n; i++)
{
    for (int j = 1; j <= space; j++)
        printf(" ");
    
    for (int j = 1; j <= star; j++)
        printf("%c", 'A' + j - 1);
    
    printf("\n");
    star += 2;
    space--;
}
```

**Output for n=4:**
```
   A
  ABC
 ABCDE
ABCDEFG
```

### Variation 3: Reverse Number Pyramid

```c
int n;
scanf("%d", &n);

int star = 1;
int space = n - 1;

for (int i = 1; i <= n; i++)
{
    for (int j = 1; j <= space; j++)
        printf(" ");
    
    for (int j = star; j >= 1; j--)
        printf("%d", j);
    
    printf("\n");
    star += 2;
    space--;
}
```

**Output for n=4:**
```
   1
  321
 54321
7654321
```

## How to Compile and Run

### Compilation

```bash
gcc pyramid-pattern.c -o pyramid-pattern
```

### Execution

```bash
./pyramid-pattern
```

### Sample Run

```bash
$ ./pyramid-pattern
5
    *
   ***
  *****
 *******
*********
```

## Pattern Formula

For input `n`:
- Total lines: `n`
- Spaces on line `i`: `n - i`
- Stars on line `i`: `2i - 1`
- Total stars: `1² + 3² + 5² + ... = n²`

**Example (n=5):**
```
Total stars = 1 + 3 + 5 + 7 + 9 = 25 = 5² ✓
```

## Key Takeaways

- Use two variables: `space` and `star`
- Spaces decrease by 1 each line
- Stars increase by 2 each line (creates symmetry)
- Spaces on line `i`: `n - i`
- Stars on line `i`: `2i - 1`
- This creates a centered pyramid pattern
- Foundation for more complex symmetric patterns

Understanding this pyramid pattern enables creation of many beautiful centered designs!
