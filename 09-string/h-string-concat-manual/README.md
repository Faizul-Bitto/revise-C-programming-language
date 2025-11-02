# String Concatenation Manual Implementation

## Overview

This program demonstrates how to manually concatenate (join) two strings together without using built-in library functions. This teaches the fundamental technique of appending one string to the end of another.

## What You'll Learn

- Manual string concatenation technique
- Finding the end of a string
- Appending characters from one string to another
- Understanding concatenation at the character level

## Complete Code

```c
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char a[1001], b[1001];
    scanf("%s %s", &a, &b);

    int stringLengthOfFirstString = strlen(a);
    int stringLengthOfSecondString = strlen(b);

    for (int i = 0; i <= stringLengthOfSecondString; i++)
    {
        a[i + stringLengthOfFirstString] = b[i];
    }

    printf("%s %s", a, b);

    return 0;
}
```

## Code Breakdown

### Step 1: Declare and Read Strings

```c
char a[1001], b[1001];
scanf("%s %s", &a, &b);
```

**What happens:**
- Declares two character arrays
- Reads two strings from user

**Example Input:**
```
Hello World
```

**After input:**
```
a = "Hello\0"
b = "World\0"
```

### Step 2: Calculate String Lengths

```c
int stringLengthOfFirstString = strlen(a);
int stringLengthOfSecondString = strlen(b);
```

**What happens:**
- Gets the length of string `a` (destination)
- Gets the length of string `b` (source to append)

**Example:**
- `stringLengthOfFirstString = 5` (for "Hello")
- `stringLengthOfSecondString = 5` (for "World")

### Step 3: Manual Concatenation

```c
for (int i = 0; i <= stringLengthOfSecondString; i++)
{
    a[i + stringLengthOfFirstString] = b[i];
}
```

**How it works:**

**Visual Progress:**

**Before concatenation:**
```
a: ['H', 'e', 'l', 'l', 'o', '\0', ...]
b: ['W', 'o', 'r', 'l', 'd', '\0']
```

**During concatenation:**
```
i=0: a[5+0] = b[0] → a[5] = 'W'  ['H','e','l','l','o','W',...]
i=1: a[5+1] = b[1] → a[6] = 'o'  ['H','e','l','l','o','W','o',...]
i=2: a[5+2] = b[2] → a[7] = 'r'  ['H','e','l','l','o','W','o','r',...]
i=3: a[5+3] = b[3] → a[8] = 'l'  ['H','e','l','l','o','W','o','r','l',...]
i=4: a[5+4] = b[4] → a[9] = 'd'  ['H','e','l','l','o','W','o','r','l','d',...]
i=5: a[5+5] = b[5] → a[10]= '\0' ['H','e','l','l','o','W','o','r','l','d','\0']
```

**After concatenation:**
```
a: "HelloWorld\0"
b: "World\0"
```

### Step 4: Display Results

```c
printf("%s %s", a, b);
```

**Output:**
```
HelloWorld World
```

## Sample Input/Output

### Example 1: Basic Concatenation

**Input:**
```
Hello World
```

**Output:**
```
HelloWorld World
```

### Example 2: Different Strings

**Input:**
```
Good Morning
```

**Output:**
```
GoodMorning Morning
```

### Example 3: Numbers in Strings

**Input:**
```
123 456
```

**Output:**
```
123456 456
```

## Visual Step-by-Step

**Initial State:**
```
Index:  0  1  2  3  4  5  6  7  8  9  10 11
a:      H  e  l  l  o \0  ?  ?  ?  ?  ?  ?
b:      W  o  r  l  d \0
```

**After concatenation:**
```
Index:  0  1  2  3  4  5  6  7  8  9  10 11
a:      H  e  l  l  o  W  o  r  l  d \0  ?
b:      W  o  r  l  d \0
```

## Key Concepts

### Finding the End

- `strlen(a)` gives us the position after the last character of `a`
- This is where we need to start appending characters from `b`
- The null terminator is at index `strlen(a)`

### Concatenation Formula

```
new_position = current_end + offset
a[strlen(a) + i] = b[i]
```

**Why this works:**
- We skip past the existing characters in `a`
- We add characters from `b` starting at the end of `a`
- We include the null terminator from `b`

### Why `i <= stringLengthOfSecondString`?

- The condition ensures we copy all characters including null terminator
- `i < stringLengthOfSecondString` would miss the null terminator
- Without null terminator, string operations won't work correctly

## Common Mistakes

### 1. Missing Null Terminator

```c
// ❌ Wrong - stops before null terminator
for (int i = 0; i < stringLengthOfSecondString; i++)
{
    a[i + stringLengthOfFirstString] = b[i];
}
// Result: "HelloWorld" without proper termination!

// ✅ Correct - includes null terminator
for (int i = 0; i <= stringLengthOfSecondString; i++)
{
    a[i + stringLengthOfFirstString] = b[i];
}
```

### 2. Starting From Wrong Position

```c
// ❌ Wrong - overwrites existing string
for (int i = 0; i <= stringLengthOfSecondString; i++)
{
    a[i] = b[i];  // Starts at 0, not at end of a!
}

// ✅ Correct - starts after existing string
for (int i = 0; i <= stringLengthOfSecondString; i++)
{
    a[i + stringLengthOfFirstString] = b[i];
}
```

### 3. Buffer Overflow

```c
// ❌ Wrong - destination array too small
char a[5], b[10];
strcpy(a, "Hi");
strcpy(b, "World");
// a cannot hold "HiWorld" (8 characters)!

// ✅ Correct - adequate size
char a[20], b[10];
```

### 4. Not Using strlen()

```c
// ❌ Wrong - guessing the length
a[5] = b[0];  // What if a isn't 5 characters?
a[6] = b[1];

// ✅ Correct - calculate actual length
int len = strlen(a);
for (int i = 0; i <= strlen(b); i++)
{
    a[len + i] = b[i];
}
```

## Alternative Implementations

### Method 1: Without strlen()

```c
char a[1001], b[1001];
scanf("%s %s", &a, &b);

// Find end of a manually
int len_a = 0;
while (a[len_a] != '\0')
{
    len_a++;
}

// Append b to a
int i = 0;
while (b[i] != '\0')
{
    a[len_a + i] = b[i];
    i++;
}
a[len_a + i] = '\0';

printf("%s", a);
```

### Method 2: Variable Names

```c
char dest[1001], source[1001];
scanf("%s %s", &dest, &source);

int destLen = strlen(dest);
int sourceLen = strlen(source);

for (int i = 0; i <= sourceLen; i++)
{
    dest[destLen + i] = source[i];
}

printf("%s %s", dest, source);
```

## How to Compile and Run

### Compilation

```bash
gcc string-concat-manual.c -o string-concat-manual
```

### Execution

```bash
./string-concat-manual
```

### Sample Run

```bash
$ ./string-concat-manual
Hello World
HelloWorld World
```

## Practical Applications

### Application 1: Building Messages

```c
char message[200], name[50];
scanf("%s", name);

strcpy(message, "Welcome, ");
// Concatenate "name" to message
int msgLen = strlen(message);
int nameLen = strlen(name);
for (int i = 0; i <= nameLen; i++)
{
    message[msgLen + i] = name[i];
}
printf("%s!\n", message);
```

### Application 2: Path Concatenation

```c
char path[200], filename[50];
scanf("%s %s", path, filename);

// Add separator
int pathLen = strlen(path);
path[pathLen] = '/';
path[pathLen + 1] = '\0';

// Append filename
int newLen = strlen(path);
int fileLen = strlen(filename);
for (int i = 0; i <= fileLen; i++)
{
    path[newLen + i] = filename[i];
}
printf("Full path: %s\n", path);
```

## Comparison: Manual vs strcat()

### Manual Concatenation

```c
int len_a = strlen(a);
int len_b = strlen(b);
for (int i = 0; i <= len_b; i++)
{
    a[len_a + i] = b[i];
}
```

### Using strcat()

```c
strcat(a, b);
```

## Key Takeaways

- Concatenation appends one string to the end of another
- Find the end using `strlen()` of destination string
- Start appending from `strlen(dest) + i`
- Always include the null terminator in the copy
- Ensure destination array is large enough for both strings
- Manual concatenation teaches fundamental string manipulation

Understanding manual concatenation builds the foundation for all string operations!
