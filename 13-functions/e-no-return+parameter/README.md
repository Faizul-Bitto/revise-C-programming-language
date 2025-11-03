# Functions with No Return Type but Parameters in C

## Overview

This program demonstrates functions that accept parameters but don't return a value. These functions use the `void` return type, meaning they perform actions (like calculations or printing) but don't send results back to the caller. This function type is perfect for operations that process input and display output directly, without needing to return values.

## What You'll Learn

- How to use `void` return type in functions
- Functions that accept parameters but don't return values
- When to use functions without return values
- Understanding `void` functions vs functions with return types
- Building functions that perform actions rather than calculations
- Direct output within functions

## What is `void`?

The `void` keyword means "nothing" or "empty". When used as a return type:
- Function doesn't return any value
- Function performs actions (calculations, printing, etc.)
- No `return` statement needed (or `return;` without value)

## Complete Code

```c
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void summation(int number1, int number2)
{
    int answer = number1 + number2;

    printf("%d", answer);
}

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    summation(x, y);

    return 0;
}
```

## Code Breakdown

### Step 1: Function Definition with `void`

```c
void summation(int number1, int number2)
{
    int answer = number1 + number2;
    printf("%d", answer);
}
```

**Key Components:**

1. **Return Type**: `void` - Function doesn't return a value
2. **Function Name**: `summation` - Identifier for the function
3. **Parameters**: `(int number1, int number2)` - Two integer inputs
4. **Function Body**: Performs calculation and displays result
5. **No Return Statement**: Function doesn't return a value

**Syntax:**
```c
void function_name(parameter_type parameter_name, ...)
{
    // Perform actions
    // No return needed (or use: return;)
}
```

### Step 2: Reading User Input

```c
int x, y;
scanf("%d %d", &x, &y);
```

**What happens:**
- Reads two integers from user
- Stores values in `x` and `y`

**Example:** User enters `15 25`
- `x = 15`, `y = 25`

### Step 3: Calling Function (No Return Value Assignment)

```c
summation(x, y);
```

**Important:** Notice no variable assignment!
- **With return**: `int result = function();`
- **Without return (void)**: `function();` - just call it

**What happens:**
1. Function receives: `number1 = 15`, `number2 = 25`
2. Function calculates: `answer = 15 + 25 = 40`
3. Function prints: `40`
4. Function ends (no value returned)

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
5 7
```

**Output:**
```
12
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

### Visual Step-by-Step with Input "15 25"

**Step 1: Read Input**
```
Input: 15 25
x = 15, y = 25
```

**Step 2: Function Call**
```
main() calls summation(15, 25)
         ↓
    summation receives: number1 = 15, number2 = 25
         ↓
    calculation: answer = 15 + 25 = 40
         ↓
    printf prints: 40
         ↓
    function ends (no return)
         ↓
main() continues
```

**Step 3: Program Ends**
```
return 0;
```

## Understanding `void` Functions

### Characteristics of `void` Functions

1. **No Return Value**: Cannot assign result to a variable
2. **Perform Actions**: Do something (calculate, print, modify)
3. **Can Use `return;`**: Optional early exit without value
4. **Can't Be Used in Expressions**: Can't do `result = void_function()`

### Comparison: `int` vs `void`

#### Function with Return (`int`)

```c
int add(int a, int b)
{
    return a + b;
}

int main()
{
    int result = add(5, 3);  // Can assign return value
    printf("%d\n", result);
    return 0;
}
```

#### Function without Return (`void`)

```c
void add(int a, int b)
{
    printf("%d\n", a + b);  // Direct output, no return
}

int main()
{
    add(5, 3);  // Just call, no assignment
    return 0;
}
```

## Practical Examples

### Example 1: Display Function

```c
void displaySum(int a, int b)
{
    int sum = a + b;
    printf("Sum of %d and %d is %d\n", a, b, sum);
}

int main()
{
    displaySum(10, 20);  // Output: Sum of 10 and 20 is 30
    displaySum(5, 15);   // Output: Sum of 5 and 15 is 20
    return 0;
}
```

### Example 2: Print Table

```c
void printTable(int number)
{
    printf("Multiplication table for %d:\n", number);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    printTable(n);
    return 0;
}
```

**Sample Run:**
```
Input: 5
Output:
Multiplication table for 5:
5 x 1 = 5
5 x 2 = 10
...
5 x 10 = 50
```

### Example 3: Format Display

```c
void displayInfo(int age, char name[])
{
    printf("====================\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("====================\n");
}

int main()
{
    displayInfo(25, "John");
    return 0;
}
```

### Example 4: Conditional Display

```c
void checkEven(int number)
{
    if (number % 2 == 0) {
        printf("%d is even\n", number);
    } else {
        printf("%d is odd\n", number);
    }
}

int main()
{
    int num;
    scanf("%d", &num);
    checkEven(num);
    return 0;
}
```

### Example 5: Multiple Operations

```c
void calculate(int x, int y)
{
    printf("Addition: %d\n", x + y);
    printf("Subtraction: %d\n", x - y);
    printf("Multiplication: %d\n", x * y);
    if (y != 0) {
        printf("Division: %.2f\n", (float)x / y);
    } else {
        printf("Division: Undefined (division by zero)\n");
    }
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    calculate(a, b);
    return 0;
}
```

## Using `return;` in void Functions

### Early Exit

```c
void checkNumber(int num)
{
    if (num < 0) {
        printf("Error: Negative number!\n");
        return;  // Exit function early
    }
    
    printf("Number is valid: %d\n", num);
}

int main()
{
    checkNumber(-5);  // Prints error and exits
    checkNumber(10);  // Prints valid message
    return 0;
}
```

### Multiple Exit Points

```c
void process(int value)
{
    if (value == 0) {
        printf("Zero\n");
        return;
    }
    
    if (value > 0) {
        printf("Positive\n");
        return;
    }
    
    printf("Negative\n");
}

int main()
{
    process(0);   // Output: Zero
    process(5);   // Output: Positive
    process(-3);  // Output: Negative
    return 0;
}
```

## How to Compile and Run

### Compilation

```bash
gcc no-return+parameter.c -o no-return-parameter
```

### Execution

```bash
./no-return-parameter
```

### Interactive Session

```
$ ./no-return-parameter
15 25          ← User enters input
40             ← Function displays result directly
```

## Common Beginner Mistakes

### 1. Trying to Assign Return Value

```c
// ❌ Wrong - void functions don't return values
void add(int a, int b) { ... }
int result = add(5, 3);  // Error: can't assign void!

// ✅ Correct - just call the function
void add(int a, int b) { ... }
add(5, 3);  // No assignment needed
```

### 2. Using `return value;` in void Function

```c
// ❌ Wrong - void functions can't return values
void add(int a, int b)
{
    return a + b;  // Error: can't return value from void!
}

// ✅ Correct - no return or return; without value
void add(int a, int b)
{
    printf("%d\n", a + b);
    // No return needed, or use: return;
}
```

### 3. Using void Function in Expression

```c
// ❌ Wrong - can't use void function in calculations
void add(int a, int b) { printf("%d\n", a + b); }
int total = add(5, 3) + 10;  // Error!

// ✅ Correct - void function just performs action
void add(int a, int b) { printf("%d\n", a + b); }
add(5, 3);  // Just call it
```

### 4. Forgetting Parameters

```c
// ❌ Wrong - function expects parameters
void add(int a, int b) { ... }
add();  // Error: missing arguments!

// ✅ Correct - provide required arguments
void add(int a, int b) { ... }
add(5, 3);  // Pass arguments
```

## When to Use `void` Functions

### Use `void` when:
- Function performs actions (printing, displaying)
- Output is shown directly within the function
- You don't need the result in the caller
- Function modifies external state
- Function is a command/action rather than calculation

### Use return type when:
- You need the result for further calculations
- Function computes a value you'll use later
- You want to test the result
- Result is used in expressions

## Comparison Table

| Aspect              | Function with Return | Function with void |
| ------------------- | -------------------- | ----------------- |
| Return type         | `int`, `float`, etc. | `void`             |
| Return statement    | Required             | Optional (`return;`) |
| Assignment          | `result = func();`   | `func();`          |
| Use in expressions  | Yes                  | No                 |
| Typical use         | Calculations         | Actions/Display    |

## Best Practices

### 1. Use Descriptive Function Names

```c
// ❌ Unclear
void func(int a, int b) { ... }

// ✅ Clear purpose
void displaySum(int a, int b) { ... }
void printResult(int a, int b) { ... }
```

### 2. Add Documentation

```c
/**
 * Calculates and displays the sum of two numbers
 * @param number1 First integer
 * @param number2 Second integer
 */
void summation(int number1, int number2)
{
    // Implementation
}
```

### 3. Keep Functions Focused

```c
// ✅ Good - single responsibility
void printSum(int a, int b) {
    printf("Sum: %d\n", a + b);
}

void printProduct(int a, int b) {
    printf("Product: %d\n", a * b);
}
```

### 4. Handle Edge Cases

```c
void divide(int a, int b)
{
    if (b == 0) {
        printf("Error: Division by zero!\n");
        return;  // Early exit
    }
    printf("Result: %.2f\n", (float)a / b);
}
```

### 5. Provide Clear Output

```c
void displayResult(int num1, int num2, int result)
{
    printf("========================\n");
    printf("First number:  %d\n", num1);
    printf("Second number: %d\n", num2);
    printf("Result:        %d\n", result);
    printf("========================\n");
}
```

## Advanced Example: Menu System

```c
void displayMenu()
{
    printf("\n=== MENU ===\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Exit\n");
    printf("============\n");
}

void performOperation(int choice, int a, int b)
{
    switch(choice) {
        case 1:
            printf("Result: %d\n", a + b);
            break;
        case 2:
            printf("Result: %d\n", a - b);
            break;
        case 3:
            printf("Result: %d\n", a * b);
            break;
        default:
            printf("Invalid choice!\n");
    }
}

int main()
{
    displayMenu();
    
    int choice, x, y;
    scanf("%d %d %d", &choice, &x, &y);
    performOperation(choice, x, y);
    
    return 0;
}
```

## Key Takeaways

- `void` functions don't return values
- Use `void` for functions that perform actions or display results
- Void functions are called without assignment: `function();`
- Can use `return;` for early exit (no value)
- Perfect for display, print, and action-oriented operations
- Parameters allow function to receive input data
- Don't try to assign or use void functions in expressions
- This function type is ideal for output and display operations

## Next Steps

After mastering `void` functions with parameters, you'll learn:

1. **Functions with No Return and No Parameters** - Simple action functions
2. **Function Composition** - Combining void and non-void functions
3. **Function Pointers** - Advanced function handling
4. **Recursive Functions** - Functions calling themselves

## Troubleshooting

**Problem:** "return statement with value in void function"

- **Solution:** Remove the value from return: use `return;` instead of `return value;`

**Problem:** Trying to assign void function result

- **Solution:** Don't assign - just call the function: `function();` not `result = function();`

**Problem:** Function doesn't display output

- **Solution:** Make sure you have `printf()` statements inside the function

**Problem:** Missing parameters error

- **Solution:** Provide all required arguments when calling the function

Understanding `void` functions with parameters is essential for building programs that display results, perform actions, and interact with users. This function type is widely used for output operations and user interface functions!

