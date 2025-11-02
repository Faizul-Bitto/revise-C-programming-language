# Pattern 4 - Right-Angle Triangle with Numbers

## Overview

This program demonstrates how to print a right-angle triangle pattern with spaces and stars, creating a bordered triangular effect. Each line starts with spaces followed by stars.

## What You'll Learn

- Creating bordered patterns
- Combining spaces and stars in patterns
- Variable tracking for pattern elements
- Basic geometric pattern formation

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
        star++;
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
- Initializes `space = n - 1` (first line has n-1 spaces)

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
- Prints `space` number of spaces before stars
- Creates indentation effect

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
star++;
space--;
```

**What happens:**
- Moves to next line
- Increases stars by 1
- Decreases spaces by 1

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
Line 1 (star=1, space=4):  [    ][*]      →     *
Line 2 (star=2, space=3):  [   ][**]      →    **
Line 3 (star=3, space=2):  [  ][***]      →   ***
Line 4 (star=4, space=1):  [ ][****]      →  ****
Line 5 (star=5, space=0):  [][*****]      → *****
```

**Note:** `[    ]` represents spaces for visualization

## Key Concepts

### Dual Variable Management

Two variables control the pattern:
- **`space`**: Leading spaces (starts at n-1, decreases to 0)
- **`star`**: Number of stars (starts at 1, increases by 1)

### Pattern Formula

For line `i`:
- Spaces: `n - i`
- Stars: `i`

**Example for n=5:**
```
Line 1: spaces = 5-1 = 4, stars = 1  ✓
Line 2: spaces = 5-2 = 3, stars = 2  ✓
Line 3: spaces = 5-3 = 2, stars = 3  ✓
Line 4: spaces = 5-4 = 1, stars = 4  ✓
Line 5: spaces = 5-5 = 0, stars = 5  ✓
```

### Increment/Decrement Pattern

**Important:** Stars increase by 1, spaces decrease by 1
```
Line 1: 1 star,  4 spaces
Line 2: 2 stars, 3 spaces
Line 3: 3 stars, 2 spaces
Line 4: 4 stars, 1 space
Line 5: 5 stars, 0 spaces
```

## Common Mistakes

### 1. Wrong Star Increment

```c
// ❌ Wrong - increment by 2
for (int i = 1; i <= n; i++)
{
    for (int j = 1; j <= space; j++)
        printf(" ");
    for (int j = 1; j <= star; j++)
        printf("*");
    printf("\n");
    star += 2;  // Should be star++
    space--;
}

// ✅ Correct
star++;  // Increment by 1
```

### 2. Forgetting Spaces

```c
// ❌ Wrong - no spaces, left-aligned
for (int i = 1; i <= n; i++)
{
    for (int j = 1; j <= star; j++)
        printf("*");
    printf("\n");
    star++;
}
// Output: left-aligned triangle

// ✅ Correct
for (int j = 1; j <= space; j++)  // Print spaces first
    printf(" ");
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

### 4. Confusing with Pyramid Pattern

**Pattern 4 (this one):**
```c
star++;
space--;
// Stars increase by 1
```

**Pyramid Pattern:**
```c
star += 2;
space--;
// Stars increase by 2
```

## Comparison with Other Patterns

### Pattern 1 (No Spaces)

```c
int star = 1;
for (int i = 1; i <= n; i++)
{
    for (int j = 1; j <= star; j++)
        printf("*");
    printf("\n");
    star++;
}
```

**Output:**
```
*
**
***
****
*****
```

### Pattern 4 (With Spaces - This one)

```c
int star = 1, space = n - 1;
for (int i = 1; i <= n; i++)
{
    for (int j = 1; j <= space; j++)
        printf(" ");
    for (int j = 1; j <= star; j++)
        printf("*");
    printf("\n");
    star++;
    space--;
}
```

**Output:**
```
    *
   **
  ***
 ****
*****
```

**Key difference:** Pattern 4 has leading spaces!

## Variation Patterns

### Variation 1: Number Pattern

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
    value++;
    space--;
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

int star = 1;
int space = n - 1;

for (int i = 1; i <= n; i++)
{
    for (int j = 1; j <= space; j++)
        printf(" ");
    
    for (int j = 1; j <= star; j++)
        printf("%c", 'A' + j - 1);
    
    printf("\n");
    star++;
    space--;
}
```

**Output for n=4:**
```
   A
  AB
 ABC
ABCD
```

### Variation 3: Different Symbol

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
        printf("#");  // Use # instead of *
    
    printf("\n");
    star++;
    space--;
}
```

## How to Compile and Run

### Compilation

```bash
gcc pattern-4.c -o pattern-4
```

### Execution

```bash
./pattern-4
```

### Sample Run

```bash
$ ./pattern-4
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
- Spaces on line `i`: `n - i`
- Stars on line `i`: `i`
- Total stars: `1 + 2 + 3 + ... + n = n(n+1)/2`

**Example (n=5):**
```
Total stars = 1 + 2 + 3 + 4 + 5 = 15
Formula: 5(5+1)/2 = 15 ✓
```

## Key Takeaways

- Use two variables: `space` and `star`
- Spaces decrease by 1 each line: `n-1 → n-2 → ... → 0`
- Stars increase by 1 each line: `1 → 2 → 3 → ... → n`
- This creates a right-aligned right-angle triangle
- Similar to Pattern 1, but with leading spaces
- Foundation for creating indented patterns

This pattern demonstrates the importance of leading spaces in creating visual hierarchy!
