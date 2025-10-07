# While Loop in C

## Overview

A while loop is a fundamental control structure that repeatedly executes a block of code as long as a specified condition remains true. It's perfect for situations where you don't know exactly how many times the loop will run.

## While Loop Syntax

```c
initialization;

while (condition) {
    // code to execute
    increment/decrement;
}
```

## Components of a While Loop

1. **Initialization**: Set up the loop variable before the loop starts
2. **Condition**: Checked before each iteration; loop continues if true
3. **Body**: Code that gets executed repeatedly
4. **Update**: Modify the loop variable to eventually make the condition false

## Code Example

```c
#include <stdio.h>

int main()
{
    int i = 1;              // 1. Initialization

    while (i <= 10)         // 2. Condition
    {
        printf("%d\n", i);  // 3. Body - code to execute
        i++;                // 4. Update - increment counter
    }

    return 0;
}
```

## How It Works

### Step-by-Step Execution:

1. **Initialize**: `i = 1`
2. **Check condition**: `i <= 10` → `1 <= 10` → true
3. **Execute body**: Print `1`, then increment `i` to `2`
4. **Check condition**: `i <= 10` → `2 <= 10` → true
5. **Execute body**: Print `2`, then increment `i` to `3`
6. This continues until `i` becomes `11`
7. **Check condition**: `i <= 10` → `11 <= 10` → false
8. **Exit loop**

### Visual Flow:

```
Start → i=1 → Check(i<=10)? → True → Print i → i++ → Check(i<=10)? → ...
                    ↓                                      ↑
                   False                                   |
                    ↓                                      |
                   End ←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←
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

## While Loop vs For Loop

| While Loop                             | For Loop                                          |
| -------------------------------------- | ------------------------------------------------- |
| Better when iteration count is unknown | Better when iteration count is known              |
| More flexible condition checking       | More compact syntax                               |
| Initialization and update are separate | Initialization, condition, and update in one line |

## Common Use Cases

### 1. Input Validation

```c
int number;
while (number < 1 || number > 100) {
    printf("Enter a number between 1-100: ");
    scanf("%d", &number);
}
```

### 2. Menu-driven Programs

```c
int choice = 0;
while (choice != 4) {
    printf("1. Add\n2. Delete\n3. View\n4. Exit\n");
    scanf("%d", &choice);
    // Process choice
}
```

### 3. Reading Until End of File

```c
char ch;
while ((ch = getchar()) != EOF) {
    // Process each character
}
```

## Important Notes

### Infinite Loops

Always ensure the condition can become false:

```c
// WRONG - Infinite loop
int i = 1;
while (i <= 10) {
    printf("%d\n", i);
    // Missing i++ - i never changes!
}

// CORRECT
int i = 1;
while (i <= 10) {
    printf("%d\n", i);
    i++; // This makes the condition eventually false
}
```

### Pre-test Loop

- The condition is checked **before** each iteration
- If the condition is false initially, the loop body never executes
- This makes it different from do-while loops

## How to Compile and Run

1. **Compile the program:**

   ```bash
   gcc while-loop.c -o while-loop
   ```

2. **Run the executable:**
   ```bash
   ./while-loop
   ```

## More Examples

### Countdown Timer

```c
int countdown = 5;
while (countdown > 0) {
    printf("%d...\n", countdown);
    countdown--;
}
printf("Blast off!\n");
```

### Sum of Numbers

```c
int num = 1, sum = 0;
while (num <= 5) {
    sum += num;
    num++;
}
printf("Sum: %d\n", sum); // Output: Sum: 15
```

## Learning Points

1. **Condition First**: Always check the condition before executing the body
2. **Update Variable**: Remember to modify the loop variable inside the loop
3. **Infinite Loop Prevention**: Ensure the condition can eventually become false
4. **Flexibility**: While loops are more flexible than for loops for complex conditions
5. **Pre-test Nature**: The loop body might not execute at all if the condition is initially false
