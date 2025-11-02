# String Copy Using strcpy() Function

## Overview

This program demonstrates how to copy one string to another using the built-in `strcpy()` function from the C standard library. This is the standard and recommended method for string copying in C programming.

## What You'll Learn

- Using the `strcpy()` function from `<string.h>`
- Syntax and usage of built-in string functions
- Benefits of using library functions
- Proper string copying with library support

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

    strcpy(a, b);

    printf("%s %s", a, b);

    return 0;
}
```

## Code Breakdown

### Step 1: Include String Header

```c
#include <string.h>
```

**Why it's needed:**
- Provides access to `strcpy()` function
- Contains declarations for all standard string manipulation functions

### Step 2: Declare and Read Strings

```c
char a[1001], b[1001];
scanf("%s %s", &a, &b);
```

**What happens:**
- Declares two character arrays of size 1001
- Reads two strings from user input

**Example Input:**
```
Hello World
```

**After input:**
```
a = "Hello\0"
b = "World\0"
```

### Step 3: Copy Using strcpy()

```c
strcpy(a, b);
```

**What happens:**
- `strcpy(destination, source)` copies string from `b` to `a`
- Automatically copies all characters including the null terminator
- Overwrites the contents of `a` with the contents of `b`

**After copying:**
```
a = "World\0"
b = "World\0"
```

### Step 4: Display Results

```c
printf("%s %s", a, b);
```

**Output:** Both strings now display the same content.

## Sample Input/Output

### Example 1: Basic Copy

**Input:**
```
Hello World
```

**Output:**
```
World World
```

### Example 2: Different Content

**Input:**
```
Programming C
```

**Output:**
```
C C
```

## How strcpy() Works Internally

The `strcpy()` function copies characters from source to destination:

```c
char* strcpy(char* destination, const char* source)
{
    int i = 0;
    while (source[i] != '\0')
    {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';  // Add null terminator
    return destination;
}
```

## Key Concepts

### Function Prototype

```c
char* strcpy(char* destination, const char* source);
```

**Parameters:**
- `destination`: Target string where content will be copied
- `source`: Source string to copy from (const means it won't be modified)

**Return Value:**
- Returns pointer to destination string
- Useful for chaining operations

### Automatic Null Termination

- `strcpy()` automatically copies the null terminator
- No need to manually add `'\0'`
- Ensures destination string is properly terminated

## Common Usage Patterns

### Pattern 1: Basic Copy

```c
char source[100], destination[100];
strcpy(source, "Hello");
strcpy(destination, source);
```

### Pattern 2: Chain Operations

```c
char str1[100], str2[100], str3[100];
strcpy(str1, strcpy(str2, strcpy(str3, "Hello")));
```

### Pattern 3: Copy from Literal

```c
char buffer[100];
strcpy(buffer, "Welcome to C programming");
printf("%s", buffer);
```

## Important Safety Considerations

### Buffer Overflow Risk

```c
// ❌ Dangerous - destination too small
char dest[5];
strcpy(dest, "This is a very long string");
// Buffer overflow! Undefined behavior!

// ✅ Safe - destination large enough
char dest[100];
strcpy(dest, "This is a very long string");
```

### Recommended: Use strncpy() for Safety

```c
// ✅ Safer - limits copy length
char dest[50];
strncpy(dest, source, 49);
dest[49] = '\0';  // Ensure null termination
```

### Or Use strcpy_s() in C11

```c
// ✅ Safest in C11
strcpy_s(dest, sizeof(dest), source);
```

## Practical Examples

### Example 1: String Backup

```c
char original[100], backup[100];
scanf("%s", original);

// Create backup
strcpy(backup, original);
printf("Original: %s\n", original);
printf("Backup: %s\n", backup);
```

### Example 2: Swap Strings

```c
char a[100], b[100], temp[100];

scanf("%s %s", &a, &b);

// Swap using strcpy
strcpy(temp, a);
strcpy(a, b);
strcpy(b, temp);

printf("%s %s", a, b);
```

### Example 3: Initialize from Literals

```c
char message[100];
strcpy(message, "Hello World");
printf("%s\n", message);  // Output: Hello World
```

## Comparison: Manual vs strcpy()

### Manual Copying

```c
int len = strlen(source);
for (int i = 0; i <= len; i++)
{
    destination[i] = source[i];
}
```

**Characteristics:**
- ~5 lines of code
- Requires loop management
- Easy to make mistakes
- Educational value

### Using strcpy()

```c
strcpy(destination, source);
```

**Characteristics:**
- 1 line of code
- Optimized by library
- Less error-prone
- Standard practice

## Common Mistakes

### 1. Missing Header File

```c
// ❌ Wrong - no string.h included
int main() {
    char a[100], b[100];
    strcpy(a, b);  // Compilation error!
    return 0;
}

// ✅ Correct
#include <string.h>
int main() {
    char a[100], b[100];
    strcpy(a, b);
    return 0;
}
```

### 2. Buffer Overflow

```c
// ❌ Wrong - destination too small
char dest[5];
strcpy(dest, "This is too long");  // Buffer overflow!

// ✅ Correct - adequate size
char dest[50];
strcpy(dest, "This is too long");
```

### 3. Wrong Parameter Order

```c
// ❌ Wrong - parameters reversed
strcpy(source, destination);  // Copies wrong direction!

// ✅ Correct
strcpy(destination, source);  // source → destination
```

### 4. Copying Uninitialized String

```c
// ❌ Wrong - source may not be null-terminated
char source[10] = {'a', 'b', 'c'};  // Not null-terminated
char dest[100];
strcpy(dest, source);  // Undefined behavior!

// ✅ Correct - properly null-terminated
char source[10] = "abc";  // Automatically null-terminated
char dest[100];
strcpy(dest, source);
```

## How to Compile and Run

### Compilation

```bash
gcc string-copy.c -o string-copy
```

### Execution

```bash
./string-copy
```

### Sample Run

```bash
$ ./string-copy
Hello World
World World
```

## Related String Functions

### Similar Functions

| Function | Purpose | Example |
|----------|---------|---------|
| `strcpy()` | Copy entire string | `strcpy(dest, src)` |
| `strncpy()` | Copy n characters | `strncpy(dest, src, n)` |
| `strcat()` | Concatenate strings | `strcat(dest, src)` |
| `strncat()` | Concatenate n characters | `strncat(dest, src, n)` |
| `strcmp()` | Compare strings | `strcmp(str1, str2)` |

## Key Takeaways

- `strcpy()` is the standard way to copy strings in C
- Always include `<string.h>` header
- Ensure destination buffer is large enough
- `strcpy()` automatically null-terminates the destination
- One simple line replaces manual looping code
- Use `strncpy()` or `strcpy_s()` for safer copying

The `strcpy()` function is the professional, standard way to copy strings in C programming!
