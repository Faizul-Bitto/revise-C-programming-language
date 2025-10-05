# Nested If-Else Statements in C

## Overview

Nested if-else statements are conditional structures placed **inside** other conditional structures. This allows programs to make multi-level decisions by checking additional conditions only after certain primary conditions are met. It's like making decisions within decisions.

## Basic Syntax

```c
if (outer_condition) {
    // Code for outer condition

    if (inner_condition) {
        // Code when both outer and inner are true
    } else {
        // Code when outer is true but inner is false
    }
} else {
    // Code when outer condition is false
}
```

## Code Example

```c
#include <stdio.h>

int main()
{
    int money;
    scanf("%d", &money);

    if (money >= 5000)
    {
        printf("Let's go to Cox's Bazar!");

        if (money >= 10000)
        {
            printf(" Then, let's go to Saint Martin!");
        }
        else
        {
            printf(" And then We will come back!");
        }
    }
    else
    {
        printf("We will not go for travel!");
    }

    return 0;
}
```

## How It Works

### Step-by-Step Process

1. **Input**: Program reads money amount from user
2. **Outer Check**: Program evaluates `money >= 5000`
   - **If false**: Execute outer else block and stop
   - **If true**: Execute outer if block, then check inner condition
3. **Inner Check**: If outer was true, evaluate `money >= 10000`
   - **If true**: Execute inner if block
   - **If false**: Execute inner else block

### Example Scenarios

#### Scenario 1: Input is 15000

```c
money = 15000;
// Outer check: 15000 >= 5000 → TRUE
// Execute: printf("Let's go to Cox's Bazar!");
// Inner check: 15000 >= 10000 → TRUE
// Execute: printf(" Then, let's go to Saint Martin!");
// Output: Let's go to Cox's Bazar! Then, let's go to Saint Martin!
```

#### Scenario 2: Input is 7000

```c
money = 7000;
// Outer check: 7000 >= 5000 → TRUE
// Execute: printf("Let's go to Cox's Bazar!");
// Inner check: 7000 >= 10000 → FALSE
// Execute: printf(" And then We will come back!");
// Output: Let's go to Cox's Bazar! And then We will come back!
```

#### Scenario 3: Input is 3000

```c
money = 3000;
// Outer check: 3000 >= 5000 → FALSE
// Execute: printf("We will not go for travel!");
// Inner conditions are NEVER checked
// Output: We will not go for travel!
```

## Key Characteristics

### 1. Hierarchical Decision Making

- **Outer condition** determines if inner conditions are even checked
- **Inner conditions** only matter when outer condition is true
- Creates a **tree-like decision structure**

### 2. Conditional Execution of Inner Logic

- Inner if-else only executes when outer condition is **true**
- If outer condition is **false**, inner logic is completely **skipped**

### 3. Multiple Levels Possible

```c
if (condition1) {
    if (condition2) {
        if (condition3) {
            // Three levels deep
        }
    }
}
```

## Decision Tree Visualization

```
money >= 5000?
├── No: "We will not go for travel!"
└── Yes: "Let's go to Cox's Bazar!" +
    ├── money >= 10000?
    ├── No: " And then We will come back!"
    └── Yes: " Then, let's go to Saint Martin!"
```

## Practical Examples

### Example 1: Login System

```c
char username[20], password[20];
scanf("%s %s", username, password);

if (strcmp(username, "admin") == 0) {
    printf("Username correct! ");

    if (strcmp(password, "1234") == 0) {
        printf("Login successful!");
    } else {
        printf("Wrong password!");
    }
} else {
    printf("Username not found!");
}
```

### Example 2: Age and License Check

```c
int age, hasLicense;
scanf("%d %d", &age, &hasLicense);

if (age >= 18) {
    printf("You are an adult. ");

    if (hasLicense == 1) {
        printf("You can drive!");
    } else {
        printf("You need a license to drive.");
    }
} else {
    printf("You are too young to drive!");
}
```

### Example 3: Weather and Activity Planning

```c
int isSunny, temperature;
scanf("%d %d", &isSunny, &temperature);

if (isSunny == 1) {
    printf("It's sunny! ");

    if (temperature >= 25) {
        printf("Perfect for swimming!");
    } else {
        printf("Good for a walk.");
    }
} else {
    printf("Stay indoors today!");
}
```

### Example 4: Grade and Scholarship

```c
int marks, attendance;
scanf("%d %d", &marks, &attendance);

if (marks >= 80) {
    printf("Excellent marks! ");

    if (attendance >= 90) {
        printf("You qualify for scholarship!");
    } else {
        printf("But attendance is low for scholarship.");
    }
} else {
    printf("Need to improve marks for scholarship.");
}
```

## Nested vs Sequential Conditions

### Nested If-Else (Hierarchical)

```c
if (money >= 5000) {
    printf("Can travel!");
    if (money >= 10000) {
        printf(" Premium travel!");
    } else {
        printf(" Budget travel!");
    }
} else {
    printf("No travel!");
}
// Only checks inner condition when outer is true
```

### Sequential If-Else Ladder (Independent)

```c
if (money >= 10000) {
    printf("Premium travel!");
} else if (money >= 5000) {
    printf("Budget travel!");
} else {
    printf("No travel!");
}
// Checks conditions independently
```

## Multiple Nesting Levels

### Three-Level Nesting Example

```c
int score, attendance, behavior;
scanf("%d %d %d", &score, &attendance, &behavior);

if (score >= 70) {
    printf("Good academic performance! ");

    if (attendance >= 80) {
        printf("Good attendance! ");

        if (behavior >= 80) {
            printf("Excellent student award!");
        } else {
            printf("Need to improve behavior.");
        }
    } else {
        printf("Need better attendance.");
    }
} else {
    printf("Need to improve grades.");
}
```

## Flow Control Visualization

```
Start
  ↓
Read input (money)
  ↓
money >= 5000?
  ↓
No ────────────> Print "We will not go for travel!" ──┐
  ↓                                                    │
Yes                                                    │
  ↓                                                    │
Print "Let's go to Cox's Bazar!"                      │
  ↓                                                    │
money >= 10000?                                       │
  ↓                                                    │
No ──> Print " And then We will come back!" ──────────┤
  ↓                                                    │
Yes                                                    │
  ↓                                                    │
Print " Then, let's go to Saint Martin!" ─────────────┤
  ↓                                                    │
  └────────────────────────────────────────────────────┘
  ↓
End
```

## Sample Input and Output

### Test Cases:

| Input   | Output                                                   |
| ------- | -------------------------------------------------------- |
| `15000` | Let's go to Cox's Bazar! Then, let's go to Saint Martin! |
| `8000`  | Let's go to Cox's Bazar! And then We will come back!     |
| `5000`  | Let's go to Cox's Bazar! And then We will come back!     |
| `3000`  | We will not go for travel!                               |

## How to Compile and Run

1. **Compile the program:**

   ```bash
   gcc nested-if-else.c -o nested-if-else
   ```

2. **Run the executable:**

   ```bash
   ./nested-if-else
   ```

3. **Enter different amounts to test:**

   ```
   12000
   ```

4. **See the result:**
   ```
   Let's go to Cox's Bazar! Then, let's go to Saint Martin!
   ```

## Important Notes

### 1. Indentation is Crucial

```c
// Good - clear nesting structure
if (condition1) {
    if (condition2) {
        // Inner code
    } else {
        // Inner else
    }
} else {
    // Outer else
}
```

### 2. Each Level Needs Braces

```c
// Recommended - use braces for all levels
if (outer) {
    if (inner) {
        statement1;
    }
}
```

### 3. Logical Flow Must Make Sense

```c
// Good - logical hierarchy
if (hasAccount) {
    if (correctPassword) {
        // Login logic
    }
}

// Poor - illogical nesting
if (correctPassword) {
    if (hasAccount) {  // Should check account first
        // Login logic
    }
}
```

## Common Mistakes

### 1. Wrong Indentation

```c
// Hard to read
if (condition1) {
if (condition2) {
printf("Nested");
}
}

// Clear and readable
if (condition1) {
    if (condition2) {
        printf("Nested");
    }
}
```

### 2. Missing Braces

```c
// Dangerous - unclear nesting
if (condition1)
if (condition2)
    printf("Which if does this belong to?");

// Safe - always use braces
if (condition1) {
    if (condition2) {
        printf("Clear nesting");
    }
}
```

### 3. Too Much Nesting

```c
// Hard to follow - too many levels
if (a) {
    if (b) {
        if (c) {
            if (d) {
                if (e) {
                    // Too deep!
                }
            }
        }
    }
}
```

## Best Practices

1. **Keep nesting levels reasonable** (maximum 3-4 levels)
2. **Use proper indentation** to show structure clearly
3. **Always use braces** even for single statements
4. **Comment complex nested logic** to explain the flow
5. **Consider alternatives** like functions for deep nesting
6. **Test all possible paths** through the nested structure

## When to Use Nested If-Else

### Good Use Cases:

- **Hierarchical decisions**: Check main condition before sub-conditions
- **Dependent conditions**: Inner condition only matters if outer is true
- **Step-by-step validation**: Multiple levels of checking

### Consider Alternatives When:

- **Too many nesting levels** (more than 3-4)
- **Independent conditions** that don't depend on each other
- **Complex logic** that becomes hard to read

## Learning Points

1. **Hierarchical Logic**: Nested if-else creates decision trees
2. **Conditional Execution**: Inner conditions only checked when outer is true
3. **Structure Matters**: Proper indentation makes nested logic readable
4. **Multiple Outcomes**: Different combinations create different execution paths
5. **Real-World Modeling**: Mirrors how we make complex decisions in real life
