# Logical Operators in C

## Overview

Logical operators are symbols used to combine or modify logical expressions. They work with boolean conditions and return either **true** (1) or **false** (0). These operators are essential for creating complex decision-making logic in programs.

## Types of Logical Operators

| Operator | Name        | Description                         | Example                        |
| -------- | ----------- | ----------------------------------- | ------------------------------ |
| `&&`     | Logical AND | Both conditions must be true        | `(5 == 5) && (3 < 4)` → true   |
| `\|\|`   | Logical OR  | At least one condition must be true | `(5 == 3) \|\| (2 < 4)` → true |
| `!`      | Logical NOT | Reverses the condition              | `!(5 == 5)` → false            |

## Code Example

```c
#include <stdio.h>

int main()
{
    // && (Logical AND)
    printf("%d\n", ((5 == 5) && (6 == 6))); // true -> 1

    // || (Logical OR)
    printf("%d\n", ((5 == 5) || (7 == 6))); // true -> 1

    // ! (Logical NOT)
    printf("%d", (!(5 == 5))); // false -> 0

    return 0;
}
```

## How Each Operator Works

### Logical AND (&&)

The AND operator returns **true** only when **both** conditions are true.

| Condition A | Condition B | A && B   |
| ----------- | ----------- | -------- |
| true        | true        | **true** |
| true        | false       | false    |
| false       | true        | false    |
| false       | false       | false    |

#### Examples:

```c
printf("%d\n", (5 == 5) && (3 < 4));   // Output: 1 (both true)
printf("%d\n", (5 == 5) && (3 > 4));   // Output: 0 (one false)
printf("%d\n", (5 == 3) && (3 < 4));   // Output: 0 (one false)
printf("%d\n", (5 == 3) && (3 > 4));   // Output: 0 (both false)
```

### Logical OR (||)

The OR operator returns **true** when **at least one** condition is true.

| Condition A | Condition B | A \|\| B |
| ----------- | ----------- | -------- |
| true        | true        | **true** |
| true        | false       | **true** |
| false       | true        | **true** |
| false       | false       | false    |

#### Examples:

```c
printf("%d\n", (5 == 5) || (3 < 4));   // Output: 1 (both true)
printf("%d\n", (5 == 5) || (3 > 4));   // Output: 1 (one true)
printf("%d\n", (5 == 3) || (3 < 4));   // Output: 1 (one true)
printf("%d\n", (5 == 3) || (3 > 4));   // Output: 0 (both false)
```

### Logical NOT (!)

The NOT operator **reverses** the condition: true becomes false, false becomes true.

| Condition | !Condition |
| --------- | ---------- |
| true      | **false**  |
| false     | **true**   |

#### Examples:

```c
printf("%d\n", !(5 == 5));   // Output: 0 (reverses true to false)
printf("%d\n", !(5 == 3));   // Output: 1 (reverses false to true)
printf("%d\n", !(3 < 4));    // Output: 0 (reverses true to false)
printf("%d\n", !(3 > 4));    // Output: 1 (reverses false to true)
```

## Practical Examples

### Age and License Check

```c
int age = 20;
int hasLicense = 1; // 1 = true, 0 = false

if (age >= 18 && hasLicense) {
    printf("Can drive a car");
} else {
    printf("Cannot drive a car");
}
// Output: Can drive a car
```

### Weekend or Holiday Check

```c
int isWeekend = 0;
int isHoliday = 1;

if (isWeekend || isHoliday) {
    printf("No work today!");
} else {
    printf("Work day");
}
// Output: No work today!
```

### Password Validation

```c
int correctUsername = 1;
int correctPassword = 0;

if (!(correctUsername && correctPassword)) {
    printf("Login failed");
} else {
    printf("Login successful");
}
// Output: Login failed
```

## Short-Circuit Evaluation

C uses **short-circuit evaluation** for logical operators:

### AND (&&) Short-Circuit

If the first condition is **false**, the second condition is **not evaluated**.

```c
int x = 0;
int result = (x != 0) && (10 / x > 5); // Safe: division not executed
```

### OR (||) Short-Circuit

If the first condition is **true**, the second condition is **not evaluated**.

```c
int x = 5;
int result = (x == 5) || (10 / 0 > 1); // Safe: division not executed
```

## Combining Multiple Operators

You can combine multiple logical operators using parentheses for clarity:

```c
int age = 25;
int hasJob = 1;
int goodCredit = 1;

// Complex condition
if ((age >= 18 && age <= 65) && (hasJob || goodCredit)) {
    printf("Loan approved");
} else {
    printf("Loan denied");
}
```

## Operator Precedence

From highest to lowest precedence:

1. `!` (Logical NOT)
2. `&&` (Logical AND)
3. `||` (Logical OR)

```c
// Without parentheses
int result = !0 && 1 || 0;  // Evaluates as: ((!0) && 1) || 0 = 1

// With parentheses for clarity
int result = ((!0) && 1) || 0;  // Same result, clearer intention
```

## Common Mistakes

### 1. Confusing Assignment with Comparison

```c
// Wrong
if (x = 5) { ... }  // Assignment, always true if x != 0

// Correct
if (x == 5) { ... } // Comparison
```

### 2. Using Bitwise Operators Instead

```c
// Wrong (bitwise operators)
if (x & y) { ... }   // Bitwise AND
if (x | y) { ... }   // Bitwise OR

// Correct (logical operators)
if (x && y) { ... }  // Logical AND
if (x || y) { ... }  // Logical OR
```

## Program Output

When you run the program, you'll see:

```
1
1
0
```

## How to Compile and Run

1. **Compile the program:**

   ```bash
   gcc logical-operators.c -o logical-operators
   ```

2. **Run the executable:**
   ```bash
   ./logical-operators
   ```

## Truth Tables Summary

### Complete Truth Table for All Operations

| A   | B   | A && B | A \|\| B | !A  | !B  |
| --- | --- | ------ | -------- | --- | --- |
| 0   | 0   | 0      | 0        | 1   | 1   |
| 0   | 1   | 0      | 1        | 1   | 0   |
| 1   | 0   | 0      | 1        | 0   | 1   |
| 1   | 1   | 1      | 1        | 0   | 0   |

## Learning Points

1. **Boolean Logic**: Logical operators work with true/false values and return 1 or 0
2. **Decision Making**: Essential for complex conditional statements and program flow control
3. **Short-Circuit**: Understanding when expressions are not fully evaluated can prevent errors
4. **Precedence**: Know the order of operations to write correct expressions
5. **Practical Usage**: Used in every C program for combining conditions and making decisions
