# Function with String

## Overview

This program demonstrates how to pass a string (character array) to a function and perform operations on it. The function receives a string, prints it, and calculates its length using the `strlen()` function.

## What You'll Learn

- Passing strings to functions
- String parameter syntax `char s[]`
- Printing strings inside functions
- Using `strlen()` to calculate string length
- Understanding how strings work as function parameters

## Complete Code

```c
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void func(char s[])
{
    printf("%s\n", s);

    int lengthOfString = strlen(s);

    printf("%d", lengthOfString);
}

int main()
{
    char s[10];

    scanf("%s", s);

    func(s);

    return 0;
}
```

## Code Breakdown

### Step 1: Function Declaration with String Parameter

```c
void func(char s[])
{
    printf("%s\n", s);

    int lengthOfString = strlen(s);

    printf("%d", lengthOfString);
}
```

**What happens:**
- Function accepts string parameter `char s[]`
- Prints the string using `%s` format specifier
- Calculates string length using `strlen()` from `string.h`
- Prints the length

### Step 2: String Declaration

```c
char s[10];
```

**What happens:**
- Declares character array (string) with size 10
- Can store up to 9 characters plus null terminator

### Step 3: Reading String Input

```c
scanf("%s", s);
```

**What happens:**
- Reads string from user
- Stores in character array `s`
- Note: No `&` needed because array name is already an address

### Step 4: Passing String to Function

```c
func(s);
```

**What happens:**
- Passes string to function
- String is passed by reference (like arrays)
- Function receives the string and can work with it

## Key Concepts

### String Parameter Syntax

When declaring a function that accepts a string:

```c
void func(char s[])    // String parameter
void func(char *s)     // Pointer parameter (equivalent)
```

Both forms are equivalent. Strings are character arrays.

### Using strlen()

```c
#include <string.h>    // Required for strlen()

int length = strlen(s);
```

`strlen()` returns the number of characters in the string (excluding null terminator).

### String Input

```c
scanf("%s", s);  // No & needed - array name is address
```

Array name `s` is already an address, so `&` is not used.

## Expected Output

**Example Input:**
```
Hello
```

**Example Output:**
```
Hello
5
```

**Explanation:**
- String "Hello" is printed
- Length is 5 characters

## How to Compile and Run

1. **Compile the program:**

   ```bash
   gcc string-input-and-print.c -o string-input-and-print
   ```

2. **Run the executable:**

   ```bash
   ./string-input-and-print
   ```

3. **Input:**
   - Enter a string (e.g., `Hello`)

4. **Expected output:**
   ```
   Hello
   5
   ```

## Common Beginner Mistakes

### 1. Using `&` with String Input

```c
// ❌ Wrong - don't use & with array name
scanf("%s", &s);

// ✅ Correct - array name is already address
scanf("%s", s);
```

### 2. Forgetting to Include string.h

```c
// ❌ Wrong - strlen() won't work
#include <stdio.h>
// Missing: #include <string.h>

// ✅ Correct - include string.h for strlen()
#include <stdio.h>
#include <string.h>
```

## Key Takeaways

1. Strings are passed to functions like arrays: `char s[]`
2. No `&` needed when reading strings with `scanf()`
3. Use `strlen()` to get string length (requires `string.h`)
4. Strings are passed by reference to functions
5. Function can print and manipulate the string
