# String Length Calculation in C

## Overview

This program demonstrates how to calculate the length of a string manually by counting characters until the null terminator (`\0`) is encountered. This shows the fundamental concept behind how string length works in C.

## What You'll Learn

- How to calculate string length manually
- Understanding null terminator (`\0`) in strings
- Using loops to traverse strings
- Character counting techniques

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

    int count = 0;

    for (int i = 0; string[i] != '\0'; i++)
    {
        count++;
    }

    printf("%d", count);

    return 0;
}
```

## Code Breakdown

### Step 1: String Declaration and Input

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

### Step 2: Initialize Counter

```c
int count = 0;
```

**What happens:**
- Creates a variable to count characters
- Starts at 0 before counting begins

### Step 3: Count Characters

```c
for (int i = 0; string[i] != '\0'; i++)
{
    count++;
}
```

**How it works:**

**Loop Execution:**
1. `i = 0`: `string[0] = 'H'` ≠ `\0` → `count = 1`
2. `i = 1`: `string[1] = 'e'` ≠ `\0` → `count = 2`
3. `i = 2`: `string[2] = 'l'` ≠ `\0` → `count = 3`
4. `i = 3`: `string[3] = 'l'` ≠ `\0` → `count = 4`
5. `i = 4`: `string[4] = 'o'` ≠ `\0` → `count = 5`
6. `i = 5`: `string[5] = '\0'` = `\0` → Loop exits

**Final count:** `5`

### Step 4: Display Length

```c
printf("%d", count);
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

### Manual Method (This Program)

```c
int count = 0;
for (int i = 0; string[i] != '\0'; i++) {
    count++;
}
```

### Built-in Function

```c
int length = strlen(string);
```

**Both methods give the same result!**

## Understanding Null Terminator

### String in Memory

```
String: "Hello"
Index:  0  1  2  3  4  5  6  7  ...
Value:  H  e  l  l  o  \0 ?  ?  ...
```

**Key Points:**
- `\0` marks the end of the string
- Characters after `\0` are ignored
- Loop stops when `\0` is encountered

## Variations and Extensions

### Variation 1: Using While Loop

```c
int count = 0;
int i = 0;
while (string[i] != '\0') {
    count++;
    i++;
}
```

### Variation 2: Function Implementation

```c
int stringLength(char str[]) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        count++;
    }
    return count;
}
```

### Variation 3: Counting Specific Characters

```c
int count = 0;
for (int i = 0; string[i] != '\0'; i++) {
    if (string[i] == 'a' || string[i] == 'e') {
        count++;
    }
}
```

## How to Compile and Run

### Compilation

```bash
gcc string-length.c -o string-length
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

### 1. Wrong Loop Condition

```c
// ❌ Wrong - stops at array size, not null terminator
for (int i = 0; i < 50; i++) {
    count++;
}

// ✅ Correct - stops at null terminator
for (int i = 0; string[i] != '\0'; i++) {
    count++;
}
```

### 2. Forgetting to Initialize Counter

```c
// ❌ Wrong - count has garbage value
int count;
for (int i = 0; string[i] != '\0'; i++) {
    count++;
}

// ✅ Correct - initialize to 0
int count = 0;
for (int i = 0; string[i] != '\0'; i++) {
    count++;
}
```

### 3. Using Wrong Comparison

```c
// ❌ Wrong - comparing with '0' (character)
for (int i = 0; string[i] != '0'; i++)

// ✅ Correct - comparing with '\0' (null terminator)
for (int i = 0; string[i] != '\0'; i++)
```

## Key Takeaways

- Strings end with null terminator (`\0`)
- Loop through string until `\0` is found
- Count characters as you traverse
- This is how `strlen()` works internally
- Always initialize counter to 0
- Understanding this concept is fundamental to string manipulation

Understanding manual string length calculation is essential for mastering string operations in C programming!
