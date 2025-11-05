# Printing Value from Pointer Variable

## Overview

As we know, we can store one variable's memory address in another variable, which we call pointer variable. We can also manipulate that variable with that pointer variable, which is called dereferencing. This program demonstrates how to get the value stored at a memory address using the dereference operator `*`.

## What You'll Learn

- Understanding dereferencing concept
- Using `*` operator to access value at address
- Getting value from pointer variable
- Difference between pointer address and value at address
- How `*ptr` gets the value where `ptr` points

## Complete Code

```c
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    /*
        As we know, we can store one variable's memory address in another variable, which we call pointer variable. We can also manipulate that variable with that pointer variable, which is called dereferencing.                             
    */

    int x = 10;
    printf("value of x                                           = %d\n", x);   

    printf("address of x                                         = %p\n", &x);  

    int *ptr;
    ptr = &x;
    printf("address of x, but now stored in ptr                  = %p\n", ptr); 

    printf("value of x, but now collected from the ptr variable  = %d\n", *ptr);

    return 0;
}
```

## Code Breakdown

### Step 1: Variable Declaration

```c
int x = 10;
printf("value of x                                           = %d\n", x);
```

**What happens:**
- Creates integer variable `x` with value 10
- Prints the value of `x`: `10`

### Step 2: Getting Address of Variable

```c
printf("address of x                                         = %p\n", &x);
```

**What happens:**
- Uses `&` operator to get memory address of `x`
- Prints the address in hexadecimal format

### Step 3: Pointer Declaration and Assignment

```c
int *ptr;
ptr = &x;
printf("address of x, but now stored in ptr                  = %p\n", ptr);
```

**What happens:**
- Declares pointer variable `ptr` that can store address of integer
- Assigns address of `x` to `ptr` using `ptr = &x`
- Prints the address stored in `ptr` (same as `&x`)

### Step 4: Dereferencing - Getting Value from Pointer

```c
printf("value of x, but now collected from the ptr variable  = %d\n", *ptr);
```

**What happens:**
- Uses `*ptr` to dereference (get value at address stored in `ptr`)
- `*ptr` goes to the address stored in `ptr` and gets the value there
- Prints the value: `10` (same as value of `x`)

## Key Concepts

### Dereferencing Operator `*`

The `*` operator is used to get the value at the address stored in a pointer:

```c
int x = 10;
int *ptr = &x;

*ptr  // Gets the value at address stored in ptr (which is 10)
```

### Reference vs Dereference

- **Reference (`&`)**: Gets address from value
  - `&x` → gets address of variable `x`
  
- **Dereference (`*`)**: Gets value from address
  - `*ptr` → gets value at address stored in `ptr`

### Visual Representation

```
Memory Layout:

Address 0x1000  →  [x = 10]          ← Variable x
Address 0x2000  →  [ptr = 0x1000]   ← Pointer ptr stores address of x

&x     → 0x1000  (address of x)
ptr    → 0x1000  (address stored in ptr)
*ptr   → 10      (value at address 0x1000)
```

## Expected Output

```
value of x                                           = 10
address of x                                         = 000000000061FE1C
address of x, but now stored in ptr                  = 000000000061FE1C
value of x, but now collected from the ptr variable  = 10
```

**Explanation:**
- First line: Value of `x` is 10
- Second line: Address of `x` in hexadecimal
- Third line: Same address stored in `ptr`
- Fourth line: Value obtained by dereferencing `ptr` is 10

## How to Compile and Run

1. **Compile the program:**

   ```bash
   gcc printing-value-from-pointer-variable.c -o printing-value-from-pointer-variable
   ```

2. **Run the executable:**

   ```bash
   ./printing-value-from-pointer-variable
   ```

## Common Beginner Mistakes

### 1. Confusing `ptr` and `*ptr`

```c
// ❌ Wrong - trying to print address as value
printf("%d", ptr);  // Prints address as integer (wrong!)

// ✅ Correct - use * to get value
printf("%d", *ptr);  // Prints value at address (10)
```

### 2. Using Wrong Format Specifier

```c
// ❌ Wrong - using %p for value
printf("%p", *ptr);  // May work but displays value as address

// ✅ Correct - use %d for integer value
printf("%d", *ptr);  // Displays value correctly
```

## Key Takeaways

1. **Dereferencing** uses `*` operator to get value at address
2. `*ptr` gets the value stored at the address in `ptr`
3. `ptr` contains address, `*ptr` contains value at that address
4. Reference (`&`) gets address from value
5. Dereference (`*`) gets value from address
