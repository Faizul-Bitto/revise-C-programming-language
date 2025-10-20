# String Length with Built-in Function strlen() in C

## Overview

This program demonstrates how to calculate the length of a string using the built-in `strlen()` function from the `string.h` library. This is the standard and efficient way to get string length in C.

## What You'll Learn

- How to use the `strlen()` function
- Understanding the `string.h` library
- Difference between manual and built-in string length calculation
- Proper function usage and syntax

## Complete Code

```c
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char string[50];
    scanf("%s", string);

    int stringSize = strlen(string);

    printf("%d", stringSize);

    return 0;
}
```

## Code Breakdown

### Step 1: Include String Library

```c
#include <string.h>
```

**What happens:**
- Includes the string manipulation library
- Provides access to `strlen()` function
- Required for all string functions

### Step 2: String Declaration and Input

```c
char string[50];
scanf("%s", string);
```

**What happens:**
- Creates a character array to store the string
- Reads a string from user input
- Automatically adds null terminator at the end

**Example with input "Hello":**
```
Index:  0  1  2  3  4  5  6  7  ...
Value:  H  e  l  l  o  \0 ?  ?  ...
```

### Step 3: Calculate String Length

```c
int stringSize = strlen(string);
```

**What happens:**
- `strlen()` counts characters until null terminator
- Returns the length as an integer
- Stores the result in `stringSize` variable

**How `strlen()` works internally:**
- Counts characters from index 0
- Stops when it encounters `\0`
- Returns the count

### Step 4: Display Length

```c
printf("%d", stringSize);
```

**Output:** `5`

## Sample Input/Output

### Example 1: Basic String

**Input:**
```
Hello
```

**Output:**
```
5
```

### Example 2: Different String

**Input:**
```
World
```

**Output:**
```
5
```

### Example 3: Single Character

**Input:**
```
A
```

**Output:**
```
1
```

### Example 4: Empty String

**Input:**
```

```

**Output:**
```
0
```

## Manual vs Built-in Function

### Manual Method (Previous Program)

```c
int count = 0;
for (int i = 0; string[i] != '\0'; i++) {
    count++;
}
```

**Characteristics:**
- More code required
- Educational value
- Slower execution

### Built-in Function (This Program)

```c
int stringSize = strlen(string);
```

**Characteristics:**
- One line of code
- Optimized for performance
- Standard library function

## strlen() Function Details

### Function Signature

```c
size_t strlen(const char *str);
```

**Parameters:**
- `str` - pointer to the string
- Returns `size_t` (unsigned integer)

### Usage Examples

```c
char str1[] = "Hello";
char str2[] = "World";
char str3[] = "";

int len1 = strlen(str1);  // Returns 5
int len2 = strlen(str2);  // Returns 5
int len3 = strlen(str3);  // Returns 0
```

## Variations and Extensions

### Variation 1: Direct Usage

```c
char string[50];
scanf("%s", string);
printf("%d", strlen(string));  // Direct usage
```

### Variation 2: Multiple Strings

```c
char str1[50], str2[50];
scanf("%s %s", str1, str2);

printf("Length of first string: %d\n", strlen(str1));
printf("Length of second string: %d\n", strlen(str2));
```

### Variation 3: Conditional Length Check

```c
char string[50];
scanf("%s", string);

if (strlen(string) > 10) {
    printf("String is too long!\n");
} else {
    printf("String length: %d\n", strlen(string));
}
```

## How to Compile and Run

### Compilation

```bash
gcc string-length-with-built-in-function-strlen.c -o string-length
```

### Execution

```bash
./string-length
```

### Sample Run

```bash
$ ./string-length
Hello
5
```

## Common Beginner Mistakes

### 1. Forgetting to Include string.h

```c
// ❌ Wrong - strlen() not recognized
#include <stdio.h>
int length = strlen(string);  // Compilation error!

// ✅ Correct - include string.h
#include <stdio.h>
#include <string.h>
int length = strlen(string);
```

### 2. Wrong Return Type

```c
// ❌ Wrong - strlen() returns size_t, not int
char stringSize = strlen(string);

// ✅ Correct - use int or size_t
int stringSize = strlen(string);
```

### 3. Using strlen() on Uninitialized String

```c
// ❌ Wrong - string not initialized
char string[50];
int length = strlen(string);  // Undefined behavior!

// ✅ Correct - initialize string first
char string[50];
scanf("%s", string);
int length = strlen(string);
```

## Key Takeaways

- Use `strlen()` for efficient string length calculation
- Always include `#include <string.h>`
- `strlen()` returns the number of characters before `\0`
- Much simpler than manual counting
- Standard library functions are optimized
- This is the preferred method in real programs

Understanding `strlen()` is essential for efficient string manipulation in C programming!
