# Changing Value from Pointer Variable

## Overview

As we know, we can store one variable's memory address in another variable, which we call pointer variable. We can also manipulate that variable with that pointer variable, which is called dereferencing. This program demonstrates how to modify the value stored at a memory address using the dereference operator `*`.

## What You'll Learn

- Modifying values through pointers
- Using `*ptr = value` to change value at address
- Understanding that changes through pointer affect original variable
- How dereferencing works for both reading and writing
- Understanding reference vs dereference

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

    *ptr = 200; // go to that address -> in that address -> put the value 200   

    printf("value of x, but now collected from the ptr variable  = %d\n", *ptr);

    /*
        so,

        value -> address = reference

        address -> value = dereference
    */

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

### Step 2: Getting Address

```c
printf("address of x                                         = %p\n", &x);
```

**What happens:**
- Gets and prints memory address of `x`

### Step 3: Pointer Setup

```c
int *ptr;
ptr = &x;
printf("address of x, but now stored in ptr                  = %p\n", ptr);
```

**What happens:**
- Declares pointer `ptr`
- Stores address of `x` in `ptr`
- Prints the address stored in `ptr`

### Step 4: Changing Value Through Pointer

```c
*ptr = 200; // go to that address -> in that address -> put the value 200
```

**What happens:**
- Uses `*ptr` to access the memory location
- Assigns new value 200 to that location
- This changes the value of `x` from 10 to 200
- Original variable `x` is modified through the pointer

### Step 5: Verifying the Change

```c
printf("value of x, but now collected from the ptr variable  = %d\n", *ptr);
```

**What happens:**
- Dereferences `ptr` to get the value
- Prints `200` (the new value)
- Value of `x` is now 200

## Key Concepts

### Modifying Value Through Pointer

```c
*ptr = 200;  // Changes value at address stored in ptr
```

This statement:
1. Goes to the address stored in `ptr`
2. Puts value 200 at that address
3. Changes the original variable `x`

### Reference vs Dereference

From the code comments:

```
value -> address = reference    (using &)
address -> value = dereference (using *)
```

- **Reference (`&`)**: `&x` gets address from value
- **Dereference (`*`)**: `*ptr` gets/changes value from address

### Visual Representation

```
Before *ptr = 200:

Address 0x1000  →  [x = 10]          ← Variable x
Address 0x2000  →  [ptr = 0x1000]   ← Pointer ptr

After *ptr = 200:

Address 0x1000  →  [x = 200]         ← Variable x changed!
Address 0x2000  →  [ptr = 0x1000]   ← Pointer ptr unchanged
```

## Expected Output

```
value of x                                           = 10
address of x                                         = 000000000061FE1C
address of x, but now stored in ptr                  = 000000000061FE1C
value of x, but now collected from the ptr variable  = 200
```

**Explanation:**
- Initially `x` is 10
- After `*ptr = 200`, value of `x` becomes 200
- Dereferencing `ptr` shows the new value 200

## How to Compile and Run

1. **Compile the program:**

   ```bash
   gcc chaning-value-from-pointer-variable.c -o chaning-value-from-pointer-variable
   ```

2. **Run the executable:**

   ```bash
   ./chaning-value-from-pointer-variable
   ```

3. **Expected output:**
   ```
   value of x                                           = 10
   address of x                                         = 000000000061FE1C
   address of x, but now stored in ptr                  = 000000000061FE1C
   value of x, but now collected from the ptr variable  = 200
   ```

## Common Beginner Mistakes

### 1. Forgetting `*` When Assigning

```c
// ❌ Wrong - assigns address, not value
ptr = 200;  // Error: trying to assign integer to pointer

// ✅ Correct - dereference to change value
*ptr = 200;  // Changes value at address to 200
```

### 2. Confusing Pointer and Value

```c
// ❌ Wrong - changes where pointer points
ptr = &someOtherVariable;  // Changes pointer, not value

// ✅ Correct - changes value at pointed location
*ptr = 200;  // Changes value at address
```

## Key Takeaways

1. `*ptr = value` changes the value at the address stored in `ptr`
2. Changes through pointer affect the original variable
3. Reference (`&`) gets address from value
4. Dereference (`*`) gets/changes value from address
5. Pointer is a powerful way to modify variables indirectly
