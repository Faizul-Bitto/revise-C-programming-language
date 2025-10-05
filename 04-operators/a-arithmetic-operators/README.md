# Arithmetic Operators in C

## Overview

Operators are symbols used to perform operations on data. Arithmetic operators allow us to perform basic mathematical calculations like addition, subtraction, multiplication, and division.

## Basic Arithmetic Operators

C provides four fundamental arithmetic operators:

- `+` (Addition)
- `-` (Subtraction)
- `*` (Multiplication)
- `/` (Division)

## Code Examples

### Addition (+)

```c
int a = 10, b = 20;
int sum = a + b;
printf("Summation : %d\n", sum);
// Output: Summation : 30
```

### Subtraction (-)

```c
int c = 30, d = 20;
int sub = c - d;
printf("Subtraction : %d\n", sub);
// Output: Subtraction : 10
```

### Multiplication (\*)

```c
int e = 30, f = 20;
int mul = e * f;
printf("Multiplication : %d\n", mul);
// Output: Multiplication : 600
```

### Division (/) - Integer Division

```c
int g = 5, h = 2;
int div = g / h;
printf("Division : %d\n", div);
// Output: Division : 2 (not 2.5!)
```

**Important Note:** When both operands are integers, division performs integer division, which truncates the decimal part.

## Working with Floating Point Division

### Method 1: Using Float Variables

```c
int i = 9;
float j = 2;        // One operand is float
float div2 = i / j; // Result stored in float
printf("Division : %.2f\n", div2);
// Output: Division : 4.50
```

### Method 2: Type Casting

```c
int k = 9, l = 2;
float div3 = (float)k / l; // Cast one operand to float
printf("Division : %.2f\n", div3);
// Output: Division : 4.50
```

## Key Concepts

### Integer vs Floating Point Division

- **Integer Division**: When both operands are integers, the result is truncated to an integer
- **Floating Point Division**: When at least one operand is a float, the result includes decimal places

### Type Casting

Type casting `(float)` converts an integer to a floating-point number for the operation, ensuring we get decimal results.

### Format Specifiers

- `%d` - for integers
- `%.2f` - for floating-point numbers with 2 decimal places

## Program Output

When you run the program, you'll see:

```
Summation : 30
Subtraction : 10
Multiplication : 600
Division : 2
Division : 4.50
Division : 4.50
```

## How to Compile and Run

1. **Compile the program:**

   ```bash
   gcc arithmetic-operators.c -o arithmetic-operators
   ```

2. **Run the executable:**
   ```bash
   ./arithmetic-operators
   ```

## Learning Points

1. **Operator Precedence**: Multiplication and division have higher precedence than addition and subtraction
2. **Data Types Matter**: The data type of operands affects the result, especially in division
3. **Type Casting**: A powerful tool to control how operations are performed
4. **Integer Truncation**: Be aware that integer division discards the fractional part
