# Functions with No Return Type and No Parameters in C

## Overview

This program demonstrates functions that neither accept parameters nor return values. These are the simplest type of functions, using `void` for both return type and empty parentheses for parameters. They are perfect for performing self-contained actions like displaying messages, reading and processing input internally, or executing simple operations that don't need input or output.

## What You'll Learn

- How to define and use `void` functions without parameters
- Functions that read input internally and display results
- Simplest function type in C
- When to use functions with no input and no output
- Building self-contained action functions
- Understanding the most basic function structure

## Complete Code

```c
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void summation()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int add = a + b;
    printf("%d", add);
}

int main()
{
    summation();

    return 0;
}
```

## Code Breakdown

### Step 1: Function Definition (void + No Parameters)

```c
void summation()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int add = a + b;
    printf("%d", add);
}
```

**Key Components:**

1. **Return Type**: `void` - Function doesn't return a value
2. **Function Name**: `summation` - Identifier for the function
3. **Parameters**: `()` - Empty parentheses mean no parameters
4. **Function Body**: Reads input, performs calculation, displays result
5. **No Return Statement**: Function doesn't return (or uses `return;`)

**Syntax:**
```c
void function_name()
{
    // Read input if needed
    // Perform operations
    // Display output
    // No return needed (or use: return;)
}
```

### Step 2: Function Call (No Arguments)

```c
summation();
```

**What happens:**
1. Function `summation()` is called with no arguments
2. Function execution begins
3. Inside function, `scanf()` reads two integers
4. Function calculates the sum
5. Function prints the result directly
6. Function ends (no value returned, no assignment needed)

**Visual Flow:**
```
main() calls summation()
         ↓
    summation() starts
         ↓
    scanf() reads input from user
         ↓
    calculation: add = a + b
         ↓
    printf displays result
         ↓
    function ends
         ↓
main() continues
```

## Expected Output

### Example 1

**Input:**
```
10 20
```

**Output:**
```
30
```

### Example 2

**Input:**
```
5 15
```

**Output:**
```
20
```

### Example 3

**Input:**
```
100 200
```

**Output:**
```
300
```

## Complete Execution Flow

### Detailed Step-by-Step with Input "15 25"

**Step 1: Function Call**
```c
summation();
```

**Step 2: Function Execution Begins**
```
summation() starts executing
```

**Step 3: Input Reading (Inside Function)**
```c
int a, b;
scanf("%d %d", &a, &b);
```
- Program waits for user input
- User enters: `15 25`
- `a = 15`, `b = 25`

**Step 4: Calculation**
```c
int add = a + b;  // add = 15 + 25 = 40
```

**Step 5: Display Result**
```c
printf("%d", add);  // Prints: 40
```

**Step 6: Function Ends**
- No return value
- Control returns to `main()`

## Understanding This Function Type

### Characteristics

1. **No Parameters**: Empty parentheses `()`
2. **No Return Value**: `void` return type
3. **Self-contained**: Handles input, processing, and output internally
4. **Simple Interface**: Just call `function();`
5. **Action-oriented**: Performs an action rather than computing a value

### All Four Function Types Comparison

| Function Type          | Parameters | Return | Input Location | Output Location | Example              |
| ---------------------- | --------- | ----- | ------------- | --------------- | -------------------- |
| Return + Parameter     | Yes       | Yes   | main()        | Return          | `int add(x, y)`      |
| Return + No Parameter  | No        | Yes   | Inside function | Return          | `int getSum()`       |
| No Return + Parameter  | Yes       | No    | main()        | Inside function | `void display(x, y)` |
| No Return + No Parameter | No      | No    | Inside function | Inside function | `void process()`      |

## Practical Examples

### Example 1: Simple Greeting

```c
void greet()
{
    printf("Hello, welcome to C programming!\n");
    printf("Have a great day!\n");
}

int main()
{
    greet();
    return 0;
}
```

**Output:**
```
Hello, welcome to C programming!
Have a great day!
```

### Example 2: Interactive Calculator

```c
void calculate()
{
    int num1, num2;
    char op;
    
    printf("Enter expression (e.g., 5 + 3): ");
    scanf("%d %c %d", &num1, &op, &num2);
    
    if (op == '+') {
        printf("Result: %d\n", num1 + num2);
    } else if (op == '-') {
        printf("Result: %d\n", num1 - num2);
    } else if (op == '*') {
        printf("Result: %d\n", num1 * num2);
    } else if (op == '/') {
        if (num2 != 0) {
            printf("Result: %.2f\n", (float)num1 / num2);
        } else {
            printf("Error: Division by zero!\n");
        }
    } else {
        printf("Invalid operator!\n");
    }
}

int main()
{
    calculate();
    return 0;
}
```

### Example 3: Menu Display and Selection

```c
void showMenu()
{
    printf("\n========== MENU ==========\n");
    printf("1. View Profile\n");
    printf("2. Edit Settings\n");
    printf("3. View Statistics\n");
    printf("4. Exit\n");
    printf("=========================\n");
    printf("Enter your choice: ");
}

void processChoice()
{
    int choice;
    scanf("%d", &choice);
    
    switch(choice) {
        case 1:
            printf("Displaying profile...\n");
            break;
        case 2:
            printf("Opening settings...\n");
            break;
        case 3:
            printf("Loading statistics...\n");
            break;
        case 4:
            printf("Goodbye!\n");
            break;
        default:
            printf("Invalid choice!\n");
    }
}

int main()
{
    showMenu();
    processChoice();
    return 0;
}
```

### Example 4: Temperature Converter

```c
void convertTemperature()
{
    float celsius;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    
    float fahrenheit = (celsius * 9.0 / 5.0) + 32;
    printf("%.2f°C = %.2f°F\n", celsius, fahrenheit);
}

int main()
{
    convertTemperature();
    return 0;
}
```

### Example 5: Number Guessing Game

```c
void playGame()
{
    int secret = 42;
    int guess;
    int attempts = 0;
    
    printf("I'm thinking of a number between 1 and 100.\n");
    
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;
        
        if (guess < secret) {
            printf("Too low! Try again.\n");
        } else if (guess > secret) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You guessed it in %d attempts!\n", attempts);
        }
    } while (guess != secret);
}

int main()
{
    playGame();
    return 0;
}
```

## How to Compile and Run

### Compilation

```bash
gcc no-return+no-parameter.c -o no-return-no-parameter
```

### Execution

```bash
./no-return-no-parameter
```

### Interactive Session

```
$ ./no-return-no-parameter
15 25          ← User enters input (read inside function)
40             ← Function displays result directly
```

## Using `return;` in void Functions

### Early Exit

```c
void process()
{
    int value;
    scanf("%d", &value);
    
    if (value < 0) {
        printf("Error: Negative value not allowed!\n");
        return;  // Exit early
    }
    
    printf("Processing value: %d\n", value);
    // More processing...
}

int main()
{
    process();
    return 0;
}
```

### Multiple Exit Points

```c
void checkStatus()
{
    int status;
    scanf("%d", &status);
    
    if (status == 0) {
        printf("System is offline\n");
        return;
    }
    
    if (status == 1) {
        printf("System is online\n");
        return;
    }
    
    printf("Unknown status\n");
}

int main()
{
    checkStatus();
    return 0;
}
```

## Common Beginner Mistakes

### 1. Trying to Pass Arguments

```c
// ❌ Wrong - function doesn't accept parameters
void greet() { ... }
greet("Hello");  // Error: unexpected argument!

// ✅ Correct - call without arguments
void greet() { ... }
greet();  // No arguments
```

### 2. Trying to Assign Return Value

```c
// ❌ Wrong - void functions don't return values
void calculate() { ... }
int result = calculate();  // Error: can't assign void!

// ✅ Correct - just call the function
void calculate() { ... }
calculate();  // No assignment needed
```

### 3. Using `return value;` in void Function

```c
// ❌ Wrong - void functions can't return values
void add()
{
    return 10 + 20;  // Error: can't return value from void!
}

// ✅ Correct - no return or return; without value
void add()
{
    printf("%d\n", 10 + 20);
    // No return needed, or use: return;
}
```

### 4. Forgetting Input/Output

```c
// ⚠️ Function doesn't do anything visible
void doNothing()
{
    int x = 5;
    // No input, no output, no effect
}

// ✅ Better - function should do something
void displayNumber()
{
    int x;
    scanf("%d", &x);
    printf("You entered: %d\n", x);
}
```

## When to Use This Function Type

### Use when:
- Function needs to read input internally
- Function displays output directly
- Building simple, self-contained operations
- Creating menu functions or display functions
- Implementing interactive features
- Functions that are completely independent

### Examples:
- Greeting functions
- Menu displays
- Interactive calculators
- Simple games
- Display utilities
- Input/Output utilities

## Best Practices

### 1. Use Clear, Action-Oriented Names

```c
// ❌ Unclear
void func() { ... }

// ✅ Clear purpose
void displayMenu() { ... }
void readAndCalculate() { ... }
void showGreeting() { ... }
```

### 2. Provide User Prompts

```c
void getNumbers()
{
    int a, b;
    printf("Enter two numbers: ");  // User-friendly prompt
    scanf("%d %d", &a, &b);
    printf("Sum: %d\n", a + b);
}
```

### 3. Handle Input Validation

```c
void calculate()
{
    int a, b;
    printf("Enter two numbers: ");
    
    if (scanf("%d %d", &a, &b) != 2) {
        printf("Invalid input!\n");
        return;  // Exit on error
    }
    
    printf("Sum: %d\n", a + b);
}
```

### 4. Keep Functions Focused

```c
// ✅ Good - single responsibility
void getInput()
{
    // Just reads input
}

void processData()
{
    // Just processes
}

void displayResult()
{
    // Just displays
}
```

### 5. Document Function Purpose

```c
/**
 * Reads two integers from user and displays their sum
 * No parameters needed, no return value
 */
void summation()
{
    // Implementation
}
```

## Advantages and Disadvantages

### Advantages

1. **Simple Interface**: Easy to call - just `function();`
2. **Self-contained**: All operations in one place
3. **Encapsulation**: Input, processing, and output together
4. **Readability**: Clear what function does
5. **Easy to Use**: No need to pass arguments or handle returns

### Disadvantages

1. **Less Flexible**: Can't reuse with different inputs
2. **Harder to Test**: Requires input simulation
3. **Less Modular**: Input/output tied together
4. **Limited Reusability**: Can't use in different contexts

## Advanced Example: Complete Program

```c
void showWelcome()
{
    printf("================================\n");
    printf("   Welcome to Calculator App    \n");
    printf("================================\n");
}

void showMenu()
{
    printf("\nOperations:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
}

void performOperation()
{
    int choice;
    float num1, num2;
    
    printf("Enter choice (1-4): ");
    scanf("%d", &choice);
    
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);
    
    switch(choice) {
        case 1:
            printf("Result: %.2f\n", num1 + num2);
            break;
        case 2:
            printf("Result: %.2f\n", num1 - num2);
            break;
        case 3:
            printf("Result: %.2f\n", num1 * num2);
            break;
        case 4:
            if (num2 != 0) {
                printf("Result: %.2f\n", num1 / num2);
            } else {
                printf("Error: Division by zero!\n");
            }
            break;
        default:
            printf("Invalid choice!\n");
    }
}

int main()
{
    showWelcome();
    showMenu();
    performOperation();
    return 0;
}
```

## Key Takeaways

- Functions can have neither parameters nor return values
- Use `void` return type and empty parentheses `()`
- Functions read input and display output internally
- Simplest function type - just call `function();`
- Perfect for self-contained, action-oriented operations
- Useful for menus, displays, and simple interactive programs
- Can use `return;` for early exit (no value)
- This is the foundation for understanding all function types

## Function Type Summary

| Type                      | Syntax                        | Call Example      | Use Case              |
| ------------------------- | ----------------------------- | ----------------- | --------------------- |
| Return + Parameter        | `int func(int a)`             | `result = func(5)` | Calculations          |
| Return + No Parameter     | `int func()`                  | `result = func()`  | Get values            |
| No Return + Parameter     | `void func(int a)`            | `func(5)`          | Display with input    |
| No Return + No Parameter  | `void func()`                 | `func()`           | Simple actions        |

## Next Steps

After mastering all four function types, you'll learn:

1. **Function Overloading** (in C++) - Multiple functions with same name
2. **Recursive Functions** - Functions calling themselves
3. **Function Pointers** - Storing function addresses
4. **Advanced Function Concepts** - Variadic functions, inline functions

## Troubleshooting

**Problem:** Function doesn't read input

- **Solution:** Make sure `scanf()` is inside the function body

**Problem:** Trying to pass arguments

- **Solution:** Remove arguments - this function type doesn't accept parameters

**Problem:** Trying to assign return value

- **Solution:** Don't assign - just call `function();` without assignment

**Problem:** Function does nothing visible

- **Solution:** Make sure function has `printf()` or other output statements

Understanding functions with no return and no parameters completes your knowledge of all four function types in C. This simplest function type is perfect for building self-contained, interactive programs where functions handle everything internally!

