# Pointer Variable in C

## Overview

This program demonstrates how to declare and use pointer variables in C. A pointer variable is a variable that stores the memory address of another variable. Pointers are one of the most powerful features of C programming.

## What You'll Learn

- Understanding what a pointer variable is
- Declaring pointer variables
- Storing memory addresses in pointer variables
- Accessing the address stored in a pointer
- Understanding that pointers themselves have memory addresses

## Program Structure

### Complete Code

```c
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    /*
        A variable which stores another variable's memory address is called pointer variable.

        syntax :

        data_type*    variable/pointer_name;

        int *ptr;
     */

    int x = 10;
    printf("address of p                          = %p\n", &x);

    int *ptr;
    ptr = &x;
    printf("address of p, but now stored in ptr   = %p\n", ptr); // address format specifier is -> %p

    printf("address of ptr itself                 = %p", &ptr); // ptr is variable, it has also its own memory address

    return 0;
}
```

### Code Explanation

1. **Regular Variable**: `int x = 10;` creates an integer variable `x` with value 10
2. **Print Original Address**: Prints the memory address of variable `x`
3. **Pointer Declaration**: `int *ptr;` declares a pointer variable that can store the address of an integer
4. **Pointer Assignment**: `ptr = &x;` stores the address of `x` in the pointer `ptr`
5. **Print Address in Pointer**: Prints the address stored in `ptr` (which is `&x`)
6. **Print Pointer's Address**: Prints the memory address of the pointer variable itself

## Key Concepts

### What is a Pointer Variable?

A pointer variable is a variable that stores the memory address of another variable. Instead of storing a value, it stores a location (address) where a value is stored.

### Pointer Declaration Syntax

```c
data_type *pointer_name;

// Examples:
int *ptr;        // Pointer to an integer
float *fptr;     // Pointer to a float
char *cptr;      // Pointer to a character
```

### Pointer Assignment

```c
int x = 10;
int *ptr;
ptr = &x;  // ptr now stores the address of x
```

### Key Points

1. **Pointer stores address**: `ptr` contains the memory address of `x`, not the value
2. **Pointer has its own address**: The pointer variable `ptr` itself is stored at a different memory location
3. **Format specifier**: Use `%p` to print addresses

## Understanding Output

The program will output three memory addresses:

1. **First address** (`&x`): The memory address where variable `x` is stored
2. **Second address** (`ptr`): The same address as above (because `ptr` stores `&x`)
3. **Third address** (`&ptr`): The memory address where the pointer variable `ptr` itself is stored

## Visual Representation

```
Memory Layout:

Address 0x1000  →  [x = 10]          ← Variable x
Address 0x2000  →  [ptr = 0x1000]    ← Pointer ptr stores address of x
```

- `x` is stored at address `0x1000` and contains value `10`
- `ptr` is stored at address `0x2000` and contains the address `0x1000` (where `x` is)

## Expected Output

```
address of p                          = 000000000061FE1C
address of p, but now stored in ptr   = 000000000061FE1C
address of ptr itself                 = 000000000061FE20
```

**Note**: 
- First two addresses will be the same (address of `x`)
- Third address will be different (address of `ptr` itself)
- Actual addresses will vary on different systems

## How to Compile and Run

1. **Compile the program:**

   ```bash
   gcc pointer-variable.c -o pointer-variable
   ```

2. **Run the executable:**

   ```bash
   ./pointer-variable
   ```

## Step-by-Step Execution

### Step 1: Create Regular Variable

```c
int x = 10;
```

- Variable `x` is created in memory
- Value `10` is stored in `x`
- `x` has its own memory address

### Step 2: Declare Pointer Variable

```c
int *ptr;
```

- Pointer variable `ptr` is declared
- It can store addresses of integer variables
- `ptr` has not been initialized yet

### Step 3: Assign Address to Pointer

```c
ptr = &x;
```

- The address of `x` (`&x`) is stored in `ptr`
- Now `ptr` "points to" `x`
- `ptr` contains the memory address where `x` is stored

### Step 4: Understanding the Outputs

```c
printf("%p\n", &x);   // Address of x
printf("%p\n", ptr);  // Address stored in ptr (same as &x)
printf("%p", &ptr);   // Address of ptr itself (different location)
```

## Common Beginner Mistakes

### 1. Not Using `&` When Assigning Address

```c
// ❌ Wrong - trying to assign value instead of address
int *ptr;
ptr = x;  // Error: trying to assign integer to pointer

// ✅ Correct - using & to get address
int *ptr;
ptr = &x;  // Correct: storing address of x
```

### 2. Wrong Pointer Declaration

```c
// ❌ Wrong - missing asterisk
int ptr;  // This is a regular integer, not a pointer

// ✅ Correct - using * to declare pointer
int *ptr;  // This is a pointer to integer
```

### 3. Confusing Pointer Address vs Stored Address

```c
int x = 10;
int *ptr = &x;

printf("%p", ptr);   // Address stored IN ptr (address of x)
printf("%p", &ptr);  // Address OF ptr itself (different address)
```

## Real-World Analogy

Think of it like this:
- **Variable `x`**: A house at address "123 Main St" containing value `10`
- **`&x`**: The address "123 Main St" itself
- **Pointer `ptr`**: A piece of paper that writes down "123 Main St" (the address)
- **`ptr`**: When you read the paper, you see "123 Main St"
- **`&ptr`**: The location where the paper itself is stored (e.g., "456 Oak Ave")

## Key Takeaways

1. **Pointer variable** stores the memory address of another variable
2. **Declaration syntax**: `data_type *pointer_name;`
3. **Assignment**: `ptr = &variable;` stores the address in the pointer
4. **Pointer has two addresses**: The address it stores AND its own memory address
5. **Use `%p`** to print memory addresses
6. Pointers are powerful tools for working with memory and creating efficient programs
