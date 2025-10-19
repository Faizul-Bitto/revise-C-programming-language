# String Input and Output in C

## Overview

This program demonstrates how to read and display strings in C using the standard `%s` format specifier. It shows the difference between character-by-character input and string input/output methods.

## What You'll Learn

- How to use `%s` format specifier for string input/output
- Understanding string declaration and null termination
- Difference between character arrays and strings
- How C automatically handles string termination

## Complete Code

```c
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char string[10]; //! always declare extra one position, so that, it becomes the size of ( size + 1 )

    scanf("%s", string);
    printf("%s", string);

    /*
        index 0 - H
        index 1 - e
        index 2 - l
        index 3 - l
        index 4 - o

        computer will put :
        index 5 - 0

        rest of the indexes will be filled with garbage values
    */

    /*
        but remember, if we try to print an index value which has no value of the string, it will throw garbage value
    */

    return 0;
}
```

## Code Breakdown

### Step 1: String Declaration

```c
char string[10];
```

**What happens:**
- Creates a character array that can store 10 characters
- Always declare one extra position for null terminator
- Memory allocated but values are uninitialized

### Step 2: String Input

```c
scanf("%s", string);
```

**What happens:**
- Reads a complete string from user
- Automatically adds null terminator (`\0`) at the end
- No need for `&` operator with strings

**Example with input "Hello":**
```
Index:  0  1  2  3  4  5  6  7  8  9
Value:  H  e  l  l  o  \0 ?  ?  ?  ?
```

### Step 3: String Output

```c
printf("%s", string);
```

**What happens:**
- Prints the string until it encounters null terminator
- Stops at `\0`, ignores garbage values after it
- Outputs: `Hello`

## Sample Input/Output

### Example 1: Basic String

**Input:**
```
Hello
```

**Output:**
```
Hello
```

### Example 2: Different String

**Input:**
```
World
```

**Output:**
```
World
```

### Example 3: String with Spaces

**Input:**
```
HelloWorld
```

**Output:**
```
HelloWorld
```

## String vs Character Array

### String Input/Output (This Program)

```c
char string[10];
scanf("%s", string);   // Reads entire string
printf("%s", string);  // Prints entire string
```

### Character-by-Character (Previous Program)

```c
char string[10];
for (int i = 0; i <= 4; i++) {
    scanf("%c", &string[i]);  // Reads one character at a time
}
```

## Key Differences

| Aspect | String I/O | Character I/O |
|--------|-------------|---------------|
| Format | `%s` | `%c` |
| Operator | No `&` needed | `&` required |
| Termination | Automatic `\0` | Manual handling |
| Input | Complete string | One character |
| Output | Complete string | One character |

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
Hello
Hello
```

## Common Beginner Mistakes

### 1. Using & with String Input

```c
// ❌ Wrong - don't use & with strings
scanf("%s", &string);

// ✅ Correct - no & needed for strings
scanf("%s", string);
```

### 2. Wrong Format Specifier

```c
// ❌ Wrong - using %c for strings
scanf("%c", string);

// ✅ Correct - using %s for strings
scanf("%s", string);
```

### 3. Array Size Too Small

```c
// ❌ Wrong - no space for null terminator
char string[5];
scanf("%s", string);  // "Hello" needs 6 positions!

// ✅ Correct - extra space for null terminator
char string[10];
scanf("%s", string);
```

## Key Takeaways

- Use `%s` format specifier for string input/output
- No `&` operator needed with `scanf("%s", string)`
- Always declare array size one larger than needed
- C automatically adds null terminator (`\0`)
- `printf("%s")` stops at null terminator
- This method is simpler than character-by-character input

Understanding string input/output is essential for working with text data in C programming!
