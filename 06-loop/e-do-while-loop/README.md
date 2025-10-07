# Do-While Loop in C

## Overview

A do-while loop is a post-test loop that executes a block of code at least once, then continues to repeat as long as a specified condition remains true. Unlike a while loop, the condition is checked **after** each iteration, guaranteeing at least one execution.

## Do-While Loop Syntax

```c
initialization;

do {
    // code to execute
    increment/decrement;
} while (condition);
```

## Components of a Do-While Loop

1. **Initialization**: Set up the loop variable before the loop starts
2. **Body**: Code that gets executed repeatedly
3. **Update**: Modify the loop variable inside the loop body
4. **Condition**: Checked **after** each iteration; loop continues if true

## Code Example

```c
#include <stdio.h>

int main()
{
    int i = 1;              // 1. Initialization

    do {
        printf("%d\n", i);  // 2. Body - code to execute
        i++;                // 3. Update - increment counter
    } while (i <= 10);      // 4. Condition - checked after execution

    return 0;
}
```

## How It Works

### Step-by-Step Execution:

1. **Initialize**: `i = 1`
2. **Execute body**: Print `1`, then increment `i` to `2`
3. **Check condition**: `i <= 10` → `2 <= 10` → true
4. **Execute body**: Print `2`, then increment `i` to `3`
5. **Check condition**: `i <= 10` → `3 <= 10` → true
6. This continues until `i` becomes `11`
7. **Execute body**: Print `10`, then increment `i` to `11`
8. **Check condition**: `i <= 10` → `11 <= 10` → false
9. **Exit loop**

### Visual Flow:

```
Start → i=1 → Execute Body → i++ → Check(i<=10)? → True → Execute Body → ...
                   ↑                     ↓                      ↑
                   |                    False                   |
                   |                     ↓                      |
                   ←←←←←←←←←←←←←←←←←←←←← End                     |
                                                                 |
                                         ←←←←←←←←←←←←←←←←←←←←←←←
```

## Program Output

When you run the program, you'll see:

```
1
2
3
4
5
6
7
8
9
10
```

## Do-While vs While Loop

| Do-While Loop                                    | While Loop                                       |
| ------------------------------------------------ | ------------------------------------------------ |
| **Post-test**: Condition checked after execution | **Pre-test**: Condition checked before execution |
| **Executes at least once**                       | May not execute at all                           |
| Body runs first, then condition is evaluated     | Condition evaluated first, then body runs        |
| Perfect for menu systems and input validation    | Better for conditional repetition                |

## Key Difference Example

```c
// While loop - may not execute
int x = 15;
while (x < 10) {
    printf("This won't print\n");  // Never executes
}

// Do-while loop - executes at least once
int y = 15;
do {
    printf("This will print once\n");  // Executes once
} while (y < 10);
```

## Common Use Cases

### 1. Menu-Driven Programs

```c
int choice;
do {
    printf("1. Add\n2. Delete\n3. View\n4. Exit\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: /* Add logic */ break;
        case 2: /* Delete logic */ break;
        case 3: /* View logic */ break;
        case 4: printf("Goodbye!\n"); break;
        default: printf("Invalid choice!\n");
    }
} while (choice != 4);
```

### 2. Input Validation

```c
int number;
do {
    printf("Enter a number between 1-100: ");
    scanf("%d", &number);

    if (number < 1 || number > 100) {
        printf("Invalid input! Try again.\n");
    }
} while (number < 1 || number > 100);
```

### 3. Game Loop

```c
char playAgain;
do {
    // Play the game
    printf("Playing the game...\n");

    printf("Play again? (y/n): ");
    scanf(" %c", &playAgain);
} while (playAgain == 'y' || playAgain == 'Y');
```

## Important Notes

### Guaranteed Execution

- The loop body **always executes at least once**
- This is the primary advantage over while loops
- Perfect when you need to perform an action before checking a condition

### Semicolon After While

```c
// CORRECT - Notice the semicolon after while(condition)
do {
    // code
} while (condition);

// WRONG - Missing semicolon
do {
    // code
} while (condition)  // Syntax error!
```

### Post-test Nature

- Condition is evaluated **after** the loop body
- Loop continues if condition is true
- Loop terminates if condition is false

## How to Compile and Run

1. **Compile the program:**

   ```bash
   gcc do-while-loop.c -o do-while-loop
   ```

2. **Run the executable:**
   ```bash
   ./do-while-loop
   ```

## More Examples

### Password Verification

```c
char password[20];
char correct[] = "secret123";
do {
    printf("Enter password: ");
    scanf("%s", password);

    if (strcmp(password, correct) != 0) {
        printf("Wrong password! Try again.\n");
    }
} while (strcmp(password, correct) != 0);
printf("Access granted!\n");
```

### Number Guessing Game

```c
int secret = 7, guess;
do {
    printf("Guess a number (1-10): ");
    scanf("%d", &guess);

    if (guess != secret) {
        printf("Wrong! Try again.\n");
    }
} while (guess != secret);
printf("Correct! You guessed it!\n");
```

## Learning Points

1. **At Least Once**: Do-while loops always execute the body at least once
2. **Post-test**: Condition is checked after each iteration, not before
3. **Semicolon Required**: Don't forget the semicolon after the while condition
4. **Menu Systems**: Perfect for user interface loops that need to show options first
5. **Input Validation**: Ideal for prompting user input until valid data is entered

## When to Use Do-While

- **Menu-driven programs**: Show menu first, then check user choice
- **Input validation**: Prompt user first, then validate input
- **Game loops**: Perform game action first, then check if player wants to continue
- **Any scenario where the action must happen before the condition check**