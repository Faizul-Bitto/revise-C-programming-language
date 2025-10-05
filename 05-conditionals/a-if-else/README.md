# If-Else Statements in C

## Overview

If-else statements are conditional structures that allow programs to make decisions. They execute different blocks of code based on whether a condition is **true** or **false**. This is fundamental to creating programs that can respond to different situations.

## Basic Syntax

```c
if (condition) {
    // Code to execute when condition is true
} else {
    // Code to execute when condition is false
}
```

## Code Example

```c
#include <stdio.h>

int main()
{
    int taka;
    scanf("%d", &taka);

    if (taka >= 200)
    {
        printf("Eat burger!");
    }
    else
    {
        printf("No burger!");
    }

    return 0;
}
```

## How It Works

### Step-by-Step Process

1. **Input**: Program reads a number (taka) from user
2. **Condition Check**: Program evaluates `taka >= 200`
3. **Decision**: Based on true/false result:
   - **True**: Execute code in `if` block
   - **False**: Execute code in `else` block

### Example Scenarios

#### Scenario 1: Input is 250

```c
taka = 250;
// Condition: 250 >= 200 → true
if (true) {
    printf("Eat burger!"); // This executes
} else {
    printf("No burger!");  // This is skipped
}
// Output: Eat burger!
```

#### Scenario 2: Input is 150

```c
taka = 150;
// Condition: 150 >= 200 → false
if (false) {
    printf("Eat burger!");  // This is skipped
} else {
    printf("No burger!");   // This executes
}
// Output: No burger!
```

## Types of If Statements

### 1. Simple If Statement

```c
int age = 18;
if (age >= 18) {
    printf("You can vote!");
}
// No else block - nothing happens if condition is false
```

### 2. If-Else Statement

```c
int temperature = 25;
if (temperature > 30) {
    printf("It's hot!");
} else {
    printf("It's cool!");
}
```

## Practical Examples

### Example 1: Number Comparison

```c
int num1 = 15, num2 = 10;

if (num1 > num2) {
    printf("%d is greater than %d", num1, num2);
} else {
    printf("%d is not greater than %d", num1, num2);
}
// Output: 15 is greater than 10
```

### Example 2: Even or Odd Check

```c
int number = 7;

if (number % 2 == 0) {
    printf("%d is even", number);
} else {
    printf("%d is odd", number);
}
// Output: 7 is odd
```

### Example 3: Login Validation

```c
char username[] = "admin";
char password[] = "1234";
char inputUser[] = "admin";
char inputPass[] = "1234";

if (strcmp(username, inputUser) == 0 && strcmp(password, inputPass) == 0) {
    printf("Login successful!");
} else {
    printf("Invalid credentials!");
}
```

### Example 4: Pass or Fail Check

```c
int marks = 78;

if (marks >= 60) {
    printf("Pass!");
} else {
    printf("Fail!");
}
// Output: Pass!
```

## Conditions and Operators

### Relational Operators in Conditions

```c
int x = 10, y = 20;

if (x == y)  // Equal to
if (x != y)  // Not equal to
if (x < y)   // Less than
if (x <= y)  // Less than or equal
if (x > y)   // Greater than
if (x >= y)  // Greater than or equal
```

### Logical Operators in Conditions

```c
int age = 25;
int salary = 50000;

// AND operator
if (age >= 18 && salary >= 30000) {
    printf("Loan approved!");
}

// OR operator
if (age < 18 || salary < 20000) {
    printf("Special consideration needed!");
}

// NOT operator
if (!(age < 18)) {
    printf("Adult!");
}
```

## Common Patterns

### 1. Simple Condition Check

```c
int temperature = 25;

if (temperature > 30) {
    printf("Hot weather");
} else {
    printf("Cool weather");
}
```

### 2. Multiple Conditions

```c
int day = 7; // Sunday

if (day == 1 || day == 7) {
    printf("Weekend!");
} else {
    printf("Weekday!");
}
```

### 3. Simple Input Validation

```c
int age;
printf("Enter your age: ");
scanf("%d", &age);

if (age >= 18) {
    printf("You are an adult");
} else {
    printf("You are a minor");
}
```

## Program Flow Visualization

```
Start
  ↓
Read input (taka)
  ↓
Check: taka >= 200?
  ↓
Yes ←--→ No
  ↓      ↓
Print   Print
"Eat    "No
burger!" burger!"
  ↓      ↓
  ↓ ←----↓
  ↓
End
```

## Sample Input and Output

### Test Case 1:

**Input:** `300`
**Output:** `Eat burger!`

### Test Case 2:

**Input:** `150`
**Output:** `No burger!`

### Test Case 3:

**Input:** `200`
**Output:** `Eat burger!` (exactly 200 meets the >= condition)

## How to Compile and Run

1. **Compile the program:**

   ```bash
   gcc if-else.c -o if-else
   ```

2. **Run the executable:**

   ```bash
   ./if-else
   ```

3. **Enter a number when prompted:**

   ```
   250
   ```

4. **See the result:**
   ```
   Eat burger!
   ```

## Important Notes

### Braces Usage

```c
// Single statement - braces optional but recommended
if (condition)
    printf("Hello");

// Multiple statements - braces required
if (condition) {
    printf("Hello");
    printf("World");
}
```

### Common Mistakes

#### 1. Assignment vs Comparison

```c
// Wrong - assignment instead of comparison
if (x = 5) { ... }

// Correct - comparison
if (x == 5) { ... }
```

#### 2. Missing Braces

```c
// Dangerous - only first statement is in if block
if (condition)
    printf("First line");
    printf("This always executes!"); // Not in if block

// Safe - use braces
if (condition) {
    printf("First line");
    printf("Second line");
}
```

#### 3. Semicolon After If

```c
// Wrong - semicolon creates empty if statement
if (condition); {
    printf("This always executes!");
}

// Correct
if (condition) {
    printf("This executes only if true!");
}
```

## Best Practices

1. **Always use braces** for clarity, even for single statements
2. **Proper indentation** makes code readable
3. **Clear variable names** make conditions understandable
4. **Comment complex conditions** to explain logic
5. **Test edge cases** like boundary values

## Learning Points

1. **Decision Making**: If-else allows programs to choose different paths
2. **Boolean Logic**: Conditions evaluate to true (1) or false (0)
3. **Program Flow**: Only one block (if or else) executes, never both
4. **Flexibility**: Can handle simple yes/no decisions or complex multi-condition logic
5. **Foundation**: Essential building block for all programming logic
