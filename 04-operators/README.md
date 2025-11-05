# Operators in C

## Overview

This section covers the various operators available in C programming. Operators are symbols that perform operations on variables and values. Understanding operators is crucial for performing calculations, comparisons, and logical operations in your programs.

## Topics Covered

- **Arithmetic Operators**: Basic mathematical operations (+, -, *, /, %)
- **Modulus Operator**: Finding remainders in division operations
- **Relational Operators**: Comparing values (==, !=, <, >, <=, >=)
- **Logical Operators**: Combining conditions (&&, ||, !)
- **Increment/Decrement Operators**: Shortcut operators for adding/subtracting 1 (++, --)

## What You'll Learn

- Performing arithmetic calculations in C
- Understanding integer vs floating-point division
- Using the modulus operator for remainders
- Comparing values and making decisions
- Combining multiple conditions with logical operators
- Pre-increment vs post-increment operators
- Operator precedence and associativity

## Key Concepts

### Arithmetic Operators

```c
int a = 10, b = 3;
int sum = a + b;      // Addition: 13
int diff = a - b;     // Subtraction: 7
int product = a * b;  // Multiplication: 30
int quotient = a / b; // Division: 3 (integer division)
int remainder = a % b;// Modulus: 1
```

### Relational Operators

```c
int x = 5, y = 10;
x == y  // Equal to: false (0)
x != y  // Not equal to: true (1)
x < y   // Less than: true (1)
x > y   // Greater than: false (0)
```

### Logical Operators

```c
int a = 5, b = 10;
(a < 10) && (b > 5)  // AND: true (both conditions true)
(a > 10) || (b > 5)  // OR: true (at least one condition true)
!(a > 10)            // NOT: true (negates the condition)
```

## Modules in This Section

1. **Arithmetic Operators**: Basic mathematical operations
2. **Modulus Operator**: Finding remainders
3. **Relational Operators**: Comparing values
4. **Logical Operators**: Combining conditions
5. **Increment/Decrement Operators**: Shortcut operators for incrementing/decrementing
