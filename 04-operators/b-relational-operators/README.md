# Relational Operators in C

## Overview

Relational operators are symbols used to compare values and establish relationships between data. They evaluate expressions and return either **true** (1) or **false** (0). These operators are fundamental for making decisions in programming.

## Types of Relational Operators

| Operator | Name                  | Description                              | Example         |
| -------- | --------------------- | ---------------------------------------- | --------------- |
| `==`     | Equal to              | Checks if two values are equal           | `5 == 5` → true |
| `!=`     | Not equal to          | Checks if two values are different       | `5 != 3` → true |
| `<`      | Less than             | Checks if left value is smaller          | `3 < 5` → true  |
| `<=`     | Less than or equal    | Checks if left value is smaller or equal | `5 <= 5` → true |
| `>`      | Greater than          | Checks if left value is larger           | `7 > 3` → true  |
| `>=`     | Greater than or equal | Checks if left value is larger or equal  | `5 >= 5` → true |

## Code Example

```c
#include <stdio.h>

int main()
{
    // == (Equal to)
    int a = 5, b = 5;
    int result = (a == b);  // true (5 = 5)
    printf("%d\n", result); // output: 1 -> true

    // < (Less than)
    int c = 15, d = 25;
    printf("%d\n", (c < d)); // output: 1 -> true

    // > (Greater than)
    int e = 15, f = 25;
    printf("%d\n", (e > f)); // output: 0 -> false

    // <= (Less than or equal)
    int g = 15, h = 25;
    printf("%d\n", (g <= h)); // output: 1 -> true

    // >= (Greater than or equal)
    int i = 15, j = 25;
    printf("%d\n", (i >= j)); // output: 0 -> false

    // != (Not equal to)
    int k = 15, l = 25;
    printf("%d\n", (k != l)); // output: 1 -> true

    return 0;
}
```

## How It Works

### Return Values

- **True condition**: Returns `1`
- **False condition**: Returns `0`

### Comparison Process

1. The operator compares two values
2. Evaluates the relationship
3. Returns 1 (true) or 0 (false)

## Detailed Examples

### Equal to (==)

```c
int a = 5, b = 5;
printf("%d\n", a == b); // Output: 1 (true)
printf("%d\n", 3 == 7); // Output: 0 (false)
```

### Not Equal to (!=)

```c
int x = 10, y = 20;
printf("%d\n", x != y); // Output: 1 (true)
printf("%d\n", 5 != 5); // Output: 0 (false)
```

### Less than (<)

```c
int p = 3, q = 8;
printf("%d\n", p < q); // Output: 1 (true)
printf("%d\n", 9 < 2); // Output: 0 (false)
```

### Greater than (>)

```c
int m = 15, n = 10;
printf("%d\n", m > n); // Output: 1 (true)
printf("%d\n", 4 > 7); // Output: 0 (false)
```

## Common Use Cases

### 1. Conditional Statements

```c
int age = 18;
if (age >= 18) {
    printf("You can vote!");
}
```

### 2. Loop Conditions

```c
for (int i = 0; i < 10; i++) {
    printf("%d ", i);
}
```

### 3. Finding Maximum

```c
int a = 25, b = 30;
int max = (a > b) ? a : b; // max = 30
```

## Important Notes

### Assignment vs Comparison

- `=` assigns a value
- `==` compares values

```c
int x = 5;    // Assignment
int y = (x == 5); // Comparison, y = 1
```

### Data Type Compatibility

- Can compare different numeric types
- Automatic type conversion occurs

```c
int a = 5;
float b = 5.0;
printf("%d\n", a == b); // Output: 1 (true)
```

### Operator Precedence

Relational operators have lower precedence than arithmetic operators:

```c
int result = 5 + 3 > 2 * 3; // Evaluates as: (5+3) > (2*3) = 8 > 6 = 1
```

## Program Output

When you run the program, you'll see:

```
1
1
0
1
0
1
```

## How to Compile and Run

1. **Compile the program:**

   ```bash
   gcc relational-operators.c -o relational-operators
   ```

2. **Run the executable:**
   ```bash
   ./relational-operators
   ```

## Quick Reference

| Comparison | Result    |
| ---------- | --------- |
| `5 == 5`   | 1 (true)  |
| `5 != 3`   | 1 (true)  |
| `3 < 5`    | 1 (true)  |
| `5 <= 5`   | 1 (true)  |
| `7 > 3`    | 1 (true)  |
| `5 >= 5`   | 1 (true)  |
| `5 == 3`   | 0 (false) |
| `5 != 5`   | 0 (false) |

## Learning Points

1. **Boolean Logic**: Relational operators return 1 for true and 0 for false
2. **Decision Making**: Essential for if statements, loops, and conditional expressions
3. **Comparison Rules**: Understand when expressions evaluate to true or false
4. **Practical Usage**: Used in virtually every C program for control flow
