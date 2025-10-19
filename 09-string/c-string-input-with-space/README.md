# String Input with Spaces in C

## Overview

This program demonstrates how to read strings that contain spaces using the `fgets()` function. Unlike `scanf("%s")` which stops at spaces, `fgets()` can read complete lines including spaces.

## What You'll Learn

- How to use `fgets()` for string input with spaces
- Understanding the difference between `scanf()` and `fgets()`
- How to handle multi-word strings
- Buffer size management with `fgets()`

## Complete Code

```c
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char string[50];

    // string input with space with fgets()
    fgets(string, 8, stdin);
    printf("%s", string);

    return 0;
}
```

## Code Breakdown

### Step 1: String Declaration

```c
char string[50];
```

**What happens:**
- Creates a character array that can store 50 characters
- Large enough to handle strings with spaces
- Memory allocated but values are uninitialized

### Step 2: String Input with Spaces

```c
fgets(string, 8, stdin);
```

**What happens:**
- Reads a string from standard input (keyboard)
- Can read spaces and special characters
- Stops at newline character or when buffer is full
- Automatically adds null terminator

**Parameters:**
- `string` - destination array
- `8` - maximum number of characters to read (including null terminator)
- `stdin` - input source (standard input)

### Step 3: String Output

```c
printf("%s", string);
```

**What happens:**
- Prints the complete string including spaces
- Outputs exactly what was read by `fgets()`

## Sample Input/Output

### Example 1: String with Spaces

**Input:**
```
Hello World
```

**Output:**
```
Hello W
```

**Note:** Only 7 characters are read (8-1 for null terminator)

### Example 2: Short String

**Input:**
```
Hi
```

**Output:**
```
Hi
```

### Example 3: Long String

**Input:**
```
Programming is fun
```

**Output:**
```
Program
```

## scanf() vs fgets() Comparison

### scanf() Method

```c
char string[50];
scanf("%s", string);
```

**Limitations:**
- Stops at first space
- Cannot read "Hello World" completely
- Only reads "Hello" from "Hello World"

### fgets() Method

```c
char string[50];
fgets(string, 50, stdin);
```

**Advantages:**
- Reads complete lines including spaces
- Can read "Hello World" completely
- More reliable for multi-word input

## Buffer Size Management

### Understanding the Size Parameter

```c
fgets(string, 8, stdin);
```

**What this means:**
- Maximum 7 characters will be read
- 1 position reserved for null terminator
- If input is longer, only first 7 characters are read

### Example with Different Sizes

```c
char string[20];

fgets(string, 10, stdin);  // Reads max 9 characters
fgets(string, 5, stdin);    // Reads max 4 characters
fgets(string, 20, stdin);   // Reads max 19 characters
```

## How to Compile and Run

### Compilation

```bash
gcc string-input-output.c -o string-input-output
```

### Execution

```bash
./string-input-output
```

### Sample Run

```bash
$ ./string-input-output
Hello World
Hello W
```

## Common Beginner Mistakes

### 1. Wrong Buffer Size

```c
// ❌ Wrong - buffer too small
char string[5];
fgets(string, 10, stdin);  // Buffer overflow!

// ✅ Correct - buffer large enough
char string[20];
fgets(string, 10, stdin);
```

### 2. Forgetting stdin Parameter

```c
// ❌ Wrong - missing stdin
fgets(string, 10);

// ✅ Correct - include stdin
fgets(string, 10, stdin);
```

### 3. Using scanf() for Spaces

```c
// ❌ Wrong - scanf stops at spaces
scanf("%s", string);

// ✅ Correct - fgets reads spaces
fgets(string, 50, stdin);
```

## Key Takeaways

- Use `fgets()` to read strings with spaces
- Always specify buffer size in `fgets()`
- `fgets()` reads until newline or buffer is full
- Buffer size should be larger than expected input
- `fgets()` automatically adds null terminator
- This method is essential for multi-word string input

Understanding `fgets()` is crucial for handling real-world string input in C programming!
