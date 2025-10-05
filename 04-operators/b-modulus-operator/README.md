# Modulus Operator in C

## Overview

The modulus operator (`%`) is a special arithmetic operator that returns the remainder of a division operation. It's particularly useful for determining if numbers are even or odd, creating patterns, and implementing circular logic.

## The Modulus Operator

The modulus operator `%` performs division and returns only the remainder:

```
9 ÷ 5 = 1 remainder 4
9 % 5 = 4
```

## Code Example

```c
#include <stdio.h>

int main()
{
    int a = 9, b = 5;
    int mod = a % b; // 9 % 5 = 4, returns the remainder

    printf("Modulus : %d", mod); // Output: Modulus : 4

    return 0;
}
```

## How It Works

When we perform `9 % 5`:

1. Divide 9 by 5: `9 ÷ 5 = 1` with remainder `4`
2. The modulus operator returns the remainder: `4`
3. The quotient (`1`) is discarded

## Visual Representation

```
9 ÷ 5:
┌─────┬─────┬─────┬─────┬─────┐ + 4 remaining
│  1  │  1  │  1  │  1  │  1  │
└─────┴─────┴─────┴─────┴─────┘
  5     5     5     5     5    = 5 × 1 = 5

Total: 5 + 4 = 9
Remainder: 4
```

## Common Use Cases

### 1. Check Even or Odd Numbers

```c
int number = 7;
if (number % 2 == 0) {
    printf("%d is even", number);
} else {
    printf("%d is odd", number);
}
// Output: 7 is odd
```

### 2. Circular Array Indexing

```c
int array[5] = {10, 20, 30, 40, 50};
int index = 7;
int circular_index = index % 5; // 7 % 5 = 2
printf("Value: %d", array[circular_index]); // Value: 30
```

### 3. Extract Digits

```c
int number = 123;
int last_digit = number % 10; // Gets the last digit: 3
```

## Important Notes

### Works Only with Integers

- The modulus operator works only with integer operands
- Both operands must be integers
- The result is always an integer

### Division by Zero

- Using `%` with zero as the second operand causes undefined behavior
- Always ensure the divisor is not zero

### Sign Rules

- The sign of the result follows the sign of the dividend (first operand)
- `7 % 3 = 1` and `-7 % 3 = -1`

## Program Output

When you run the program, you'll see:

```
Modulus : 4
```

## How to Compile and Run

1. **Compile the program:**

   ```bash
   gcc modulus-operator.c -o modulus-operator
   ```

2. **Run the executable:**
   ```bash
   ./modulus-operator
   ```

## More Examples

```c
printf("%d\n", 10 % 3);  // Output: 1
printf("%d\n", 15 % 4);  // Output: 3
printf("%d\n", 20 % 5);  // Output: 0
printf("%d\n", 7 % 10);  // Output: 7 (when dividend < divisor)
```

## Learning Points

1. **Remainder Operation**: Modulus gives you the remainder, not the quotient
2. **Integer Only**: Works exclusively with integer data types
3. **Practical Applications**: Useful for cyclic operations, pattern creation, and mathematical checks
4. **Zero Remainder**: When `a % b = 0`, it means `a` is perfectly divisible by `b`