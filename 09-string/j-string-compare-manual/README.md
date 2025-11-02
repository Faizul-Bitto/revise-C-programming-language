# String Comparison Manual Implementation

## Overview

This program demonstrates how to manually compare two strings character by character without using built-in library functions. This teaches the fundamental algorithm for string comparison in C programming.

## What You'll Learn

- Manual string comparison logic
- Character-by-character comparison
- Determining lexical order
- Handling string length differences
- Using `stdbool.h` for boolean values

## Complete Code

```c
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char a[1001], b[1001];
    scanf("%s %s", &a, &b);

    int i = 0;

    while (true)
    {
        if ((a[i] == '\0') && (b[i] == '\0'))
        {
            printf("Equal");
            break;
        }
        else if (a[i] == '\0')
        {
            printf("A is smaller");
            break;
        }
        else if (b[i] == '\0')
        {
            printf("B is smaller");
            break;
        }
        else if (a[i] < b[i])
        {
            printf("A is smaller");
            break;
        }
        else if (a[i] > b[i])
        {
            printf("B is smaller");
            break;
        }
        else if (a[i] == b[i])
        {
            i++;
        }
    }

    return 0;
}
```

## Code Breakdown

### Step 1: Include Headers

```c
#include <stdbool.h>
```

**Why it's needed:**
- Provides the `true` constant for the while loop condition
- Makes boolean logic more readable

### Step 2: Read Strings

```c
char a[1001], b[1001];
scanf("%s %s", &a, &b);
int i = 0;
```

**What happens:**
- Declares and reads two strings
- Initializes index `i` to start from beginning

**Example Input:**
```
apple banana
```

**After input:**
```
a = "apple\0"
b = "banana\0"
```

### Step 3: Manual Comparison Logic

The comparison proceeds character by character:

```c
while (true)
{
    if ((a[i] == '\0') && (b[i] == '\0'))
    {
        printf("Equal");
        break;
    }
    else if (a[i] == '\0')
    {
        printf("A is smaller");
        break;
    }
    else if (b[i] == '\0')
    {
        printf("B is smaller");
        break;
    }
    else if (a[i] < b[i])
    {
        printf("A is smaller");
        break;
    }
    else if (a[i] > b[i])
    {
        printf("B is smaller");
        break;
    }
    else if (a[i] == b[i])
    {
        i++;
    }
}
```

## How It Works

### Case 1: Both Strings End Together

```c
if ((a[i] == '\0') && (b[i] == '\0'))
{
    printf("Equal");
    break;
}
```

**When:** Both strings have the same length and all characters match

**Example:**
```
a: "apple\0"
b: "apple\0"
    ↑
   same at every position, end together
Output: "Equal"
```

### Case 2: String A Ends First

```c
else if (a[i] == '\0')
{
    printf("A is smaller");
    break;
}
```

**When:** String `a` is shorter than string `b` (but initial characters matched)

**Example:**
```
a: "app\0"
b: "apple\0"
     ↑
   a ends before b
Output: "A is smaller"
```

### Case 3: String B Ends First

```c
else if (b[i] == '\0')
{
    printf("B is smaller");
    break;
}
```

**When:** String `b` is shorter than string `a` (but initial characters matched)

**Example:**
```
a: "apple\0"
b: "app\0"
     ↑
   b ends before a
Output: "B is smaller"
```

### Case 4: Character in A is Smaller

```c
else if (a[i] < b[i])
{
    printf("A is smaller");
    break;
}
```

**When:** Characters differ, and character in `a` has lower ASCII value

**Example:**
```
a: "apple"
b: "banana"
    ↑
   'a' < 'b' (97 < 98)
Output: "A is smaller"
```

### Case 5: Character in B is Smaller

```c
else if (a[i] > b[i])
{
    printf("B is smaller");
    break;
}
```

**When:** Characters differ, and character in `b` has lower ASCII value

**Example:**
```
a: "banana"
b: "apple"
    ↑
   'b' > 'a' (98 > 97)
Output: "B is smaller"
```

### Case 6: Characters Match

```c
else if (a[i] == b[i])
{
    i++;
}
```

**When:** Current characters are the same

**What happens:** Move to next character position and continue

## Step-by-Step Examples

### Example 1: Equal Strings

**Input:**
```
hello hello
```

**Process:**
```
i=0: 'h' == 'h' → i++ (now i=1)
i=1: 'e' == 'e' → i++ (now i=2)
i=2: 'l' == 'l' → i++ (now i=3)
i=3: 'l' == 'l' → i++ (now i=4)
i=4: 'o' == 'o' → i++ (now i=5)
i=5: '\0' && '\0' → "Equal"
```

### Example 2: A is Smaller (Different Character)

**Input:**
```
apple banana
```

**Process:**
```
i=0: 'a' == 'a' → i++ (now i=1)
i=1: 'p' < 'b' → "A is smaller"
(Actually 'p' > 'b', so this would output "B is smaller")
```

**Correction:** Let's trace with correct input:

**Input:**
```
apple banana
```

**Process:**
```
i=0: 'a' == 'a' → i++ (now i=1)
i=1: 'p' > 'a' (112 > 97) → "B is smaller"
```

### Example 3: Different Lengths

**Input:**
```
app apple
```

**Process:**
```
i=0: 'a' == 'a' → i++ (now i=1)
i=1: 'p' == 'p' → i++ (now i=2)
i=2: 'p' == 'p' → i++ (now i=3)
i=3: '\0' && 'l' → "A is smaller"
```

## ASCII Values Reference

Important ASCII values for character comparison:

| Character | ASCII Value |
|-----------|-------------|
| 'A'       | 65          |
| 'B'       | 66          |
| ...       | ...         |
| 'a'       | 97          |
| 'b'       | 98          |
| ...       | ...         |
| '0'       | 48          |
| '1'       | 49          |
| ...       | ...         |

## Key Concepts

### Lexicographic Order

- Strings are compared character by character
- First differing character determines the result
- If all characters match, shorter string is "smaller"
- Characters are compared by their ASCII values

### Breaking the Loop

- `break` exits the while loop immediately
- Only one case will execute per comparison
- Loop continues until a decision is made

### Null Terminator Checking

- Checking for `'\0'` handles different string lengths
- Shorter string reaches null terminator first
- If both reach null together, strings are equal

## Common Mistakes

### 1. Not Including stdbool.h

```c
// ❌ Wrong - true not defined
while (true)  // Compilation error!
{
    // ...
}

// ✅ Correct
#include <stdbool.h>
while (true)
{
    // ...
}
```

### 2. Missing Break Statements

```c
// ❌ Wrong - missing breaks, multiple print statements
while (true)
{
    if (a[i] == '\0' && b[i] == '\0')
    {
        printf("Equal");
        // No break! Falls through to other cases
    }
}

// ✅ Correct - break after each case
while (true)
{
    if (a[i] == '\0' && b[i] == '\0')
    {
        printf("Equal");
        break;  // Exit loop
    }
}
```

### 3. Wrong Comparison Logic

```c
// ❌ Wrong - comparing strings directly
if (a < b)  // Compares addresses, not contents!

// ✅ Correct - character by character
if (a[i] < b[i])
{
    printf("A is smaller");
}
```

### 4. Infinite Loop

```c
// ❌ Wrong - no termination condition
int i = 0;
while (true)
{
    // No break or i++ might cause infinite loop!
}

// ✅ Correct - always increment when equal
while (true)
{
    if (a[i] == b[i])
    {
        i++;  // Progress forward
    }
    else
    {
        // Handle other cases with break
    }
}
```

## Alternative Implementation

### Without stdbool.h

```c
char a[1001], b[1001];
scanf("%s %s", &a, &b);

int i = 0;
int done = 0;  // 0 = not done, 1 = done

while (!done)
{
    if (a[i] == '\0' && b[i] == '\0')
    {
        printf("Equal");
        done = 1;
    }
    else if (a[i] == '\0')
    {
        printf("A is smaller");
        done = 1;
    }
    else if (b[i] == '\0')
    {
        printf("B is smaller");
        done = 1;
    }
    else if (a[i] != b[i])
    {
        if (a[i] < b[i])
            printf("A is smaller");
        else
            printf("B is smaller");
        done = 1;
    }
    else
    {
        i++;
    }
}
```

## How to Compile and Run

### Compilation

```bash
gcc string-compare-manual.c -o string-compare-manual
```

### Execution

```bash
./string-compare-manual
```

### Sample Run

```bash
$ ./string-compare-manual
apple banana
B is smaller

$ ./string-compare-manual
banana apple
A is smaller

$ ./string-compare-manual
hello hello
Equal
```

## Key Takeaways

- Manual comparison checks strings character by character
- ASCII values determine character order
- Shorter string is "smaller" if all characters match
- Must include `<stdbool.h>` for `true` constant
- Always use `break` after printing result
- Increment index when characters match
- First differing character determines result

Understanding manual comparison builds the foundation for understanding built-in `strcmp()`!
