# If-Else Ladder in C

## Overview

An if-else ladder (also called if-else-if chain) is a series of conditional statements that allows a program to check multiple conditions in sequence. It executes the first condition that evaluates to **true** and skips all remaining conditions. This is perfect for making decisions between multiple options.

## Basic Syntax

```c
if (condition1) {
    // Code for condition1
} else if (condition2) {
    // Code for condition2
} else if (condition3) {
    // Code for condition3
} else {
    // Code when no condition is true
}
```

## Code Example

```c
#include <stdio.h>

int main()
{
    int taka;
    scanf("%d", &taka);

    if (taka >= 500)
    {
        printf("Eat pizza!");
    }
    else if (taka >= 200)
    {
        printf("Eat shawarma!");
    }
    else if (taka >= 100)
    {
        printf("Eat burger!");
    }
    else
    {
        printf("Nothing to eat!");
    }

    return 0;
}
```

## How It Works

### Step-by-Step Process

1. **Input**: Program reads money amount (taka) from user
2. **Sequential Check**: Program evaluates conditions from top to bottom:
   - First: `taka >= 500`
   - If false, check: `taka >= 200`
   - If false, check: `taka >= 100`
   - If all false, execute `else` block
3. **Stop at First True**: Once a condition is true, remaining conditions are skipped

### Example Scenarios

#### Scenario 1: Input is 600

```c
taka = 600;
// Check: 600 >= 500 → TRUE
// Execute: printf("Eat pizza!");
// Skip all remaining conditions
// Output: Eat pizza!
```

#### Scenario 2: Input is 250

```c
taka = 250;
// Check: 250 >= 500 → FALSE
// Check: 250 >= 200 → TRUE
// Execute: printf("Eat shawarma!");
// Skip remaining conditions
// Output: Eat shawarma!
```

#### Scenario 3: Input is 150

```c
taka = 150;
// Check: 150 >= 500 → FALSE
// Check: 150 >= 200 → FALSE
// Check: 150 >= 100 → TRUE
// Execute: printf("Eat burger!");
// Skip remaining conditions
// Output: Eat burger!
```

#### Scenario 4: Input is 50

```c
taka = 50;
// Check: 50 >= 500 → FALSE
// Check: 50 >= 200 → FALSE
// Check: 50 >= 100 → FALSE
// Execute: printf("Nothing to eat!");
// Output: Nothing to eat!
```

## Key Characteristics

### 1. Sequential Evaluation

- Conditions are checked from top to bottom
- Only the **first true condition** executes
- Remaining conditions are **automatically skipped**

### 2. Mutually Exclusive

- Only **one block** of code executes
- Never executes multiple blocks for the same input

### 3. Order Matters

```c
// Correct order (most restrictive first)
if (taka >= 500) { ... }
else if (taka >= 200) { ... }
else if (taka >= 100) { ... }

// Wrong order (less restrictive first)
if (taka >= 100) { ... }  // This would catch 500 taka too!
else if (taka >= 200) { ... }  // Never reached
else if (taka >= 500) { ... }  // Never reached
```

## Practical Examples

### Example 1: Grade Assignment

```c
int marks;
scanf("%d", &marks);

if (marks >= 90) {
    printf("Grade A - Excellent!");
} else if (marks >= 80) {
    printf("Grade B - Good!");
} else if (marks >= 70) {
    printf("Grade C - Average!");
} else if (marks >= 60) {
    printf("Grade D - Pass!");
} else {
    printf("Grade F - Fail!");
}
```

### Example 2: Age Categories

```c
int age;
scanf("%d", &age);

if (age >= 65) {
    printf("Senior Citizen");
} else if (age >= 18) {
    printf("Adult");
} else if (age >= 13) {
    printf("Teenager");
} else if (age >= 1) {
    printf("Child");
} else {
    printf("Invalid age");
}
```

### Example 3: Temperature Description

```c
int temp;
scanf("%d", &temp);

if (temp >= 40) {
    printf("Extremely Hot!");
} else if (temp >= 30) {
    printf("Hot");
} else if (temp >= 20) {
    printf("Warm");
} else if (temp >= 10) {
    printf("Cool");
} else if (temp >= 0) {
    printf("Cold");
} else {
    printf("Freezing");
}
```

### Example 4: Discount Calculator

```c
int purchaseAmount;
scanf("%d", &purchaseAmount);

if (purchaseAmount >= 1000) {
    printf("20%% discount - You save %d taka", purchaseAmount * 20 / 100);
} else if (purchaseAmount >= 500) {
    printf("10%% discount - You save %d taka", purchaseAmount * 10 / 100);
} else if (purchaseAmount >= 200) {
    printf("5%% discount - You save %d taka", purchaseAmount * 5 / 100);
} else {
    printf("No discount available");
}
```

## If-Else Ladder vs Multiple If Statements

### If-Else Ladder (Correct)

```c
int score = 85;
if (score >= 90) {
    printf("A");
} else if (score >= 80) {  // Only checked if score < 90
    printf("B");
} else if (score >= 70) {  // Only checked if score < 80
    printf("C");
}
// Output: B (only one condition executes)
```

### Multiple If Statements (Incorrect for this logic)

```c
int score = 85;
if (score >= 90) {
    printf("A");
}
if (score >= 80) {  // Always checked
    printf("B");
}
if (score >= 70) {  // Always checked
    printf("C");
}
// Output: BC (multiple conditions execute!)
```

## Decision Flow Visualization

```
Start
  ↓
Read input (taka)
  ↓
taka >= 500? ──Yes──> Print "Eat pizza!" ──┐
  ↓ No                                       │
taka >= 200? ──Yes──> Print "Eat shawarma!" │
  ↓ No                                       │
taka >= 100? ──Yes──> Print "Eat burger!"   │
  ↓ No                                       │
Print "Nothing to eat!"                      │
  ↓                                          │
  └──────────────────────────────────────────┘
  ↓
End
```

## Sample Input and Output

### Test Cases:

| Input | Output          |
| ----- | --------------- |
| `600` | Eat pizza!      |
| `400` | Eat shawarma!   |
| `250` | Eat shawarma!   |
| `150` | Eat burger!     |
| `100` | Eat burger!     |
| `50`  | Nothing to eat! |

## How to Compile and Run

1. **Compile the program:**

   ```bash
   gcc if-else-ladder.c -o if-else-ladder
   ```

2. **Run the executable:**

   ```bash
   ./if-else-ladder
   ```

3. **Enter different amounts to test:**

   ```
   350
   ```

4. **See the result:**
   ```
   Eat shawarma!
   ```

## Important Notes

### 1. Final Else is Optional

```c
if (condition1) {
    // Code
} else if (condition2) {
    // Code
}
// No final else - nothing happens if no condition is true
```

### 2. Use Braces for Clarity

```c
// Good practice - always use braces
if (condition1) {
    statement1;
} else if (condition2) {
    statement2;
}
```

### 3. Order from Most Restrictive to Least

```c
// Correct: Start with highest values
if (score >= 90) { ... }
else if (score >= 80) { ... }
else if (score >= 70) { ... }
```

## Common Mistakes

### 1. Wrong Order of Conditions

```c
// Wrong - less restrictive first
if (age >= 0) {
    printf("Valid age");  // This catches everything!
} else if (age >= 18) {
    printf("Adult");      // Never reached
}

// Correct - more restrictive first
if (age >= 18) {
    printf("Adult");
} else if (age >= 0) {
    printf("Minor");
}
```

### 2. Using && Instead of else if

```c
// Wrong - multiple conditions can be true
if (score >= 90 && score < 100) { printf("A"); }
if (score >= 80 && score < 90) { printf("B"); }

// Better - mutually exclusive
if (score >= 90) { printf("A"); }
else if (score >= 80) { printf("B"); }
```

### 3. Forgetting the Final Else

```c
// Incomplete - what if score < 60?
if (score >= 90) { printf("A"); }
else if (score >= 80) { printf("B"); }
else if (score >= 70) { printf("C"); }
else if (score >= 60) { printf("D"); }
// Missing: else { printf("F"); }
```

## Best Practices

1. **Order conditions from most restrictive to least restrictive**
2. **Always include a final else for completeness**
3. **Use meaningful variable names**
4. **Keep conditions simple and readable**
5. **Test all possible input ranges**
6. **Use braces even for single statements**

## Learning Points

1. **Sequential Logic**: Conditions are checked in order, first match wins
2. **Efficiency**: Once a condition is true, remaining checks are skipped
3. **Mutually Exclusive**: Only one block executes for any given input
4. **Range Handling**: Perfect for categorizing values into ranges
5. **Decision Trees**: Models real-world decision-making processes
