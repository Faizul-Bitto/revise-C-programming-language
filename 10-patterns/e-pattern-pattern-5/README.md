# Pattern 5 - Number Triangle with Spaces

## Overview

This program demonstrates how to print a number triangle pattern with spaces, where each line displays an increasing sequence of numbers. This creates an indented numerical pattern.

## What You'll Learn

- Printing number sequences in patterns
- Combining spaces with numbers
- Variable tracking for pattern elements
- Creating formatted numerical displays

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

    int value = 1;
    int space = n - 1;

    for (int i = 1; i <= n; i++) // for printing line
    {
        for (int j = 1; j <= space; j++) // for printing space
        {
            printf(" ");
        }

        for (int j = 1; j <= value; j++) // for printing numbers
        {
            printf("%d", j);
        }

        printf("\n");
        value++;
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
int value = 1;
int space = n - 1;
```

**What happens:**
- Reads the number of lines to print
- Initializes `value = 1` (first line has 1 number)
- Initializes `space = n - 1` (first line has n-1 spaces)

**Example Input:**
```
5
```

**Initial values:**
```
value = 1
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
- Prints `space` number of spaces before numbers
- Creates indentation

### Step 4: Print Numbers

```c
for (int j = 1; j <= value; j++) // for printing numbers
{
    printf("%d", j);
}
```

**What happens:**
- Prints numbers from 1 to `value`
- Uses `j` as both loop counter and number to print

### Step 5: New Line and Update Variables

```c
printf("\n");
value++;
space--;
```

**What happens:**
- Moves to next line
- Increases `value` by 1
- Decreases `space` by 1

## Pattern Output

**Input:**
```
5
```

**Output:**
```
    1
   12
  123
 1234
12345
```

## Visual Breakdown

**Line by line execution:**

```
Line 1 (value=1, space=4):  [    ][1]         →     1
Line 2 (value=2, space=3):  [   ][12]         →    12
Line 3 (value=3, space=2):  [  ][123]         →   123
Line 4 (value=4, space=1):  [ ][1234]         →  1234
Line 5 (value=5, space=0):  [][12345]         → 12345
```

**Note:** `[    ]` represents spaces for visualization

## Key Concepts

### Dual Variable Management

Two variables control the pattern:
- **`space`**: Leading spaces (starts at n-1, decreases to 0)
- **`value`**: Number of digits to print (starts at 1, increases by 1)

### Number Sequence Pattern

Each line prints numbers from 1 up to `value`:
```
Line 1: 1
Line 2: 1, 2
Line 3: 1, 2, 3
Line 4: 1, 2, 3, 4
Line 5: 1, 2, 3, 4, 5
```

### Pattern Formula

For line `i`:
- Spaces: `n - i`
- Numbers: 1 to `i`

**Example for n=5:**
```
Line 1: spaces = 5-1 = 4, numbers = 1          ✓
Line 2: spaces = 5-2 = 3, numbers = 1-2        ✓
Line 3: spaces = 5-3 = 2, numbers = 1-3        ✓
Line 4: spaces = 5-4 = 1, numbers = 1-4        ✓
Line 5: spaces = 5-5 = 0, numbers = 1-5        ✓
```

### Using Loop Counter as Number

**Key Insight:**
```c
for (int j = 1; j <= value; j++)
{
    printf("%d", j);  // j is both counter AND the number to print
}
```

This elegant approach uses the loop counter directly as the value!

## Common Mistakes

### 1. Forgetting Spaces

```c
// ❌ Wrong - no spaces, left-aligned
for (int i = 1; i <= n; i++)
{
    for (int j = 1; j <= value; j++)
        printf("%d", j);
    printf("\n");
    value++;
}
// Output: left-aligned numbers

// ✅ Correct
for (int j = 1; j <= space; j++)  // Print spaces first
    printf(" ");
```

### 2. Not Incrementing Value

```c
// ❌ Wrong - no increment
for (int i = 1; i <= n; i++)
{
    for (int j = 1; j <= space; j++)
        printf(" ");
    for (int j = 1; j <= value; j++)
        printf("%d", j);
    printf("\n");
    // Missing value++;
}
// Output: same number on every line

// ✅ Correct
printf("\n");
value++;  // Increment value
space--;  // Decrement space
```

### 3. Wrong Initial Values

```c
// ❌ Wrong - incorrect starting values
int value = 0;    // Should be 1
int space = n;    // Should be n-1

// ✅ Correct
int value = 1;     // First line: 1 number
int space = n - 1; // First line: n-1 spaces
```

### 4. Printing Wrong Numbers

```c
// ❌ Wrong - printing value itself
for (int j = 1; j <= value; j++)
{
    printf("%d", value);  // Prints: 1, 22, 333, 4444
}

// ✅ Correct - printing j
for (int j = 1; j <= value; j++)
{
    printf("%d", j);  // Prints: 1, 12, 123, 1234
}
```

## Variation Patterns

### Variation 1: Star Pattern

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
        printf("*");
    
    printf("\n");
    star++;
    space--;
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

### Variation 2: Alphabet Pattern

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
        printf("%c", 'A' + j - 1);
    
    printf("\n");
    value++;
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

### Variation 3: Reverse Number Pattern

```c
int n;
scanf("%d", &n);

int value = 1;
int space = n - 1;

for (int i = 1; i <= n; i++)
{
    for (int j = 1; j <= space; j++)
        printf(" ");
    
    for (int j = value; j >= 1; j--)
        printf("%d", j);
    
    printf("\n");
    value++;
    space--;
}
```

**Output for n=5:**
```
    1
   21
  321
 4321
54321
```

### Variation 4: Repeated Number

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
        printf("%d", i);  // Print line number
    
    printf("\n");
    value++;
    space--;
}
```

**Output for n=5:**
```
    1
   22
  333
 4444
55555
```

## How to Compile and Run

### Compilation

```bash
gcc pattern-5.c -o pattern-5
```

### Execution

```bash
./pattern-5
```

### Sample Run

```bash
$ ./pattern-5
5
    1
   12
  123
 1234
12345
```

## Pattern Formula

For input `n`:
- Total lines: `n`
- Spaces on line `i`: `n - i`
- Numbers on line `i`: digits from 1 to `i`
- Total characters: `1 + 2 + ... + n = n(n+1)/2`

**Example (n=5):**
```
Total digits = 1 + 2 + 3 + 4 + 5 = 15
Formula: 5(5+1)/2 = 15 ✓
```

## Comparison with Other Patterns

### Pattern 4 (Stars)

```c
int star = 1, space = n - 1;
for (int i = 1; i <= n; i++)
{
    for (int j = 1; j <= space; j++)
        printf(" ");
    for (int j = 1; j <= star; j++)
        printf("*");
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

### Pattern 5 (Numbers - This one)

```c
int value = 1, space = n - 1;
for (int i = 1; i <= n; i++)
{
    for (int j = 1; j <= space; j++)
        printf(" ");
    for (int j = 1; j <= value; j++)
        printf("%d", j);
    value++;
    space--;
}
```

**Output:**
```
    1
   12
  123
 1234
12345
```

**Key difference:** Numbers instead of stars!

## Key Takeaways

- Use loop counter as the number to print
- Spaces decrease by 1: `n-1 → n-2 → ... → 0`
- Value increases by 1: `1 → 2 → 3 → ... → n`
- Each line prints numbers from 1 to `value`
- Same structure as Pattern 4, but with numbers
- `printf("%d", j)` uses the counter as the value

This pattern demonstrates how loop counters can be used creatively in output!
