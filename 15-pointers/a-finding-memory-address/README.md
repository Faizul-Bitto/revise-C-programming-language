# Finding Memory Address in C

## Overview

This program demonstrates how to find and display the memory address of a variable using the address-of operator (`&`) in C. Every variable is stored at a specific location in memory, and this program shows how to access that location's address.

## What You'll Learn

- Understanding that variables are stored in memory locations
- Using the address-of operator (`&`) to get memory addresses
- Using the `%p` format specifier to print addresses
- Understanding the difference between a variable's value and its address

## Program Structure

### Complete Code

```c
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a = 10;

    printf("%d\n", a); // will print the value -> 10

    printf("%p", &a); // will print the address where the value '10' stored

    /*
        so the format specifier of the address -> %p
     */

    return 0;
}
```

### Code Explanation

1. **Variable Declaration**: `int a = 10;` creates an integer variable `a` with value 10
2. **Printing Value**: `printf("%d\n", a);` prints the value stored in `a` (which is 10)
3. **Printing Address**: `printf("%p", &a);` prints the memory address where `a` is stored

## Key Concepts

### The Address-of Operator (`&`)

The `&` operator returns the memory address of a variable:

```c
int a = 10;
&a  // Returns the memory address where 'a' is stored
```

### Format Specifier for Addresses

Use `%p` to print memory addresses:

```c
printf("%p", &a);  // Prints the address in hexadecimal format
```

**Note**: `%p` is the standard format specifier for printing pointer values (memory addresses).

## Understanding Output

- First `printf`: Prints the **value** of variable `a` → `10`
- Second `printf`: Prints the **memory address** where `a` is stored → Address in hexadecimal (e.g., `000000000061FE1C`)

## Key Differences

### Value vs Address

```c
int a = 10;
printf("%d", a);   // Prints: 10 (the value)
printf("%p", &a);  // Prints: memory address (e.g., 000000000061FE1C)
```

## Expected Output

```
10
000000000061FE1C
```

The exact address will vary each time you run the program or on different systems, as memory allocation can differ.

## How to Compile and Run

1. **Compile the program:**

   ```bash
   gcc memory-address.c -o memory-address
   ```

2. **Run the executable:**

   ```bash
   ./memory-address
   ```

3. **Expected output:**
   - First line: The value of `a` (10)
   - Second line: The memory address of `a` (hexadecimal address)

## Common Beginner Mistakes

### 1. Forgetting the `&` Operator

```c
// ❌ Wrong - trying to print address without &
printf("%p", a);  // This will print the value of a as if it were an address

// ✅ Correct - using & to get address
printf("%p", &a);  // This prints the actual memory address
```

### 2. Using Wrong Format Specifier

```c
// ❌ Wrong - using %d for address
printf("%d", &a);  // May work but displays address as integer (incorrect format)

// ✅ Correct - using %p for address
printf("%p", &a);  // Displays address in proper hexadecimal format
```

## Real-World Analogy

Think of a variable like a house:
- The **value** (`a = 10`) is like what's inside the house (furniture, people, etc.)
- The **address** (`&a`) is like the house's street address
- The `&` operator is like asking "What is this house's address?"

## Key Takeaways

1. Every variable has a **memory address** where it's stored
2. Use the **`&` operator** to get a variable's memory address
3. Use **`%p` format specifier** to print memory addresses
4. Memory addresses are typically displayed in **hexadecimal format**
5. The address will be different each time or on different systems (memory allocation varies)
