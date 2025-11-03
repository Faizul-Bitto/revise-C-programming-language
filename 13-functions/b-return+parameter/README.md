# Functions with Return Type and Parameters in C

## Overview

This program demonstrates functions that both accept parameters and return a value. This is one of the most commonly used function types in C programming, allowing you to pass data into a function and receive a result back. Understanding this function type is fundamental to writing reusable and modular code.

## What You'll Learn

- How to define functions with return types and parameters
- How to pass arguments to functions
- How to receive return values from functions
- Understanding the function call mechanism
- Using function return values in expressions
- Writing modular and reusable code

## What is a Function?

A **function** is a block of code that performs a specific task. Functions allow you to:
- Organize code into logical units
- Avoid code repetition (DRY - Don't Repeat Yourself)
- Make programs easier to understand and maintain
- Reuse code multiple times

## Function Types in C

There are four types of functions:

1. **Return + Parameter** (this program) - Accepts input, returns output
2. **Return + No Parameter** - No input, returns output
3. **No Return + Parameter** - Accepts input, no output
4. **No Return + No Parameter** - No input, no output

## Complete Code

```c
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int summation(int number1, int number2)
{
    int answer = number1 + number2;

    return answer;
}

int main()
{
    int result1 = summation(10, 10);
    printf("%d\n", result1);

    int result2 = summation(20, 20);
    printf("%d\n", result2);

    int result3 = summation(30, 30);
    printf("%d", result3);

    return 0;
}
```

## Code Breakdown

### Step 1: Function Definition

```c
int summation(int number1, int number2)
{
    int answer = number1 + number2;
    return answer;
}
```

**Function Components:**

1. **Return Type**: `int` - The function returns an integer value
2. **Function Name**: `summation` - Identifier used to call the function
3. **Parameters**: `(int number1, int number2)` - Two integer inputs
4. **Function Body**: Code that performs the calculation
5. **Return Statement**: `return answer;` - Sends result back to caller

**Syntax:**
```c
return_type function_name(parameter_type parameter_name, ...)
{
    // Function body
    return value;
}
```

### Step 2: Function Calls

```c
int result1 = summation(10, 10);
```

**What happens:**
1. Function `summation` is called with arguments `10` and `10`
2. `number1 = 10`, `number2 = 10` (parameters receive values)
3. Function calculates: `answer = 10 + 10 = 20`
4. Function returns `20`
5. Return value is stored in `result1`

**Visual Flow:**
```
main() calls summation(10, 10)
         ↓
    summation receives: number1=10, number2=10
         ↓
    calculation: answer = 10 + 10 = 20
         ↓
    return 20
         ↓
main() receives: result1 = 20
```

### Step 3: Using Return Values

```c
printf("%d\n", result1);
```

**What happens:**
- Prints the value stored in `result1` (which is 20)

## Expected Output

```
20
40
60
```

**Explanation:**
- `summation(10, 10)` returns `20` → prints `20`
- `summation(20, 20)` returns `40` → prints `40`
- `summation(30, 30)` returns `60` → prints `60`

## Function Execution Flow

### Detailed Execution for `summation(10, 10)`

**Step 1: Function Call**
```c
int result1 = summation(10, 10);
```

**Step 2: Parameter Passing**
```
number1 = 10  (first argument copied to first parameter)
number2 = 10  (second argument copied to second parameter)
```

**Step 3: Function Body Execution**
```c
int answer = number1 + number2;  // answer = 10 + 10 = 20
```

**Step 4: Return Statement**
```c
return answer;  // Returns 20 to the caller
```

**Step 5: Value Assignment**
```c
result1 = 20;  // Return value stored in result1
```

## Understanding Parameters vs Arguments

### Parameters (Function Definition)

```c
int summation(int number1, int number2)
//             ↑ parameter  ↑ parameter
```

**Parameters** are variables declared in the function definition. They act as placeholders for values that will be passed in.

### Arguments (Function Call)

```c
summation(10, 10);
//        ↑ argument ↑ argument
```

**Arguments** are the actual values passed to the function when it's called.

### Key Concept: Copy Behavior

```c
int x = 10, y = 20;
int result = summation(x, y);
```

**What happens:**
- Values of `x` and `y` are **copied** to `number1` and `number2`
- Changes to `number1` and `number2` inside the function **don't affect** `x` and `y`
- This is called **pass by value**

## Practical Examples

### Example 1: Multiplication Function

```c
int multiply(int a, int b)
{
    return a * b;
}

int main()
{
    int product = multiply(5, 6);
    printf("Product: %d\n", product);  // Output: Product: 30
    return 0;
}
```

### Example 2: Maximum of Two Numbers

```c
int findMax(int num1, int num2)
{
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int main()
{
    int max = findMax(15, 25);
    printf("Maximum: %d\n", max);  // Output: Maximum: 25
    return 0;
}
```

### Example 3: Power Calculation

```c
int power(int base, int exponent)
{
    int result = 1;
    for (int i = 0; i < exponent; i++) {
        result = result * base;
    }
    return result;
}

int main()
{
    int squared = power(5, 2);
    printf("5^2 = %d\n", squared);  // Output: 5^2 = 25
    return 0;
}
```

### Example 4: Using Return Values in Expressions

```c
int add(int a, int b)
{
    return a + b;
}

int main()
{
    // Can use function directly in expressions
    int sum1 = add(5, 3);
    int sum2 = add(10, 20);
    int total = add(sum1, sum2);  // Using return values as arguments
    
    printf("Total: %d\n", total);  // Output: Total: 38
    return 0;
}
```

### Example 5: Multiple Function Calls

```c
int calculateArea(int length, int width)
{
    return length * width;
}

int main()
{
    int room1 = calculateArea(10, 12);
    int room2 = calculateArea(8, 10);
    int room3 = calculateArea(15, 20);
    
    printf("Room 1 area: %d\n", room1);  // 120
    printf("Room 2 area: %d\n", room2);  // 80
    printf("Room 3 area: %d\n", room3);  // 300
    
    int totalArea = room1 + room2 + room3;
    printf("Total area: %d\n", totalArea);  // 500
    
    return 0;
}
```

## How to Compile and Run

### Compilation

```bash
gcc return+parameter.c -o return-parameter
```

### Execution

```bash
./return-parameter
```

### Expected Output

```
20
40
60
```

## Function Declaration vs Definition

### Function Definition (Full Implementation)

```c
int summation(int number1, int number2)  // Definition
{
    int answer = number1 + number2;
    return answer;
}
```

### Function Declaration (Prototype)

```c
int summation(int number1, int number2);  // Declaration (prototype)

int main()
{
    // Can call function here even if defined later
    int result = summation(10, 10);
    return 0;
}

int summation(int number1, int number2)  // Definition
{
    return number1 + number2;
}
```

**Declaration** tells compiler: "This function exists, you can use it"
**Definition** contains the actual implementation

## Common Beginner Mistakes

### 1. Missing Return Statement

```c
// ❌ Wrong - function promises to return int but doesn't
int summation(int a, int b)
{
    int answer = a + b;
    // Missing return statement!
}

// ✅ Correct - returns the calculated value
int summation(int a, int b)
{
    int answer = a + b;
    return answer;
}
```

### 2. Wrong Return Type

```c
// ❌ Wrong - returns int but declared as void
void summation(int a, int b)
{
    return a + b;  // Error: void functions can't return values
}

// ✅ Correct - matches return type
int summation(int a, int b)
{
    return a + b;
}
```

### 3. Using Wrong Number of Arguments

```c
// ❌ Wrong - function expects 2 arguments, given 3
int result = summation(10, 20, 30);  // Error!

// ✅ Correct - matches parameter count
int result = summation(10, 20);
```

### 4. Wrong Argument Types

```c
// ❌ Wrong - passing float to int parameter
int result = summation(10.5, 20.3);  // Type mismatch

// ✅ Correct - pass integers
int result = summation(10, 20);
```

### 5. Not Storing Return Value

```c
// ⚠️ Not wrong, but wasteful
summation(10, 20);  // Return value is ignored

// ✅ Better - store and use return value
int result = summation(10, 20);
printf("%d\n", result);
```

## Best Practices

### 1. Use Meaningful Function Names

```c
// ❌ Unclear
int func(int a, int b) { return a + b; }

// ✅ Clear purpose
int add(int num1, int num2) { return num1 + num2; }
```

### 2. Use Descriptive Parameter Names

```c
// ❌ Unclear parameters
int calculate(int x, int y) { return x * y; }

// ✅ Self-documenting
int calculateArea(int length, int width) { return length * width; }
```

### 3. Single Responsibility

```c
// ✅ Good - function does one thing
int multiply(int a, int b) { return a * b; }
int add(int a, int b) { return a + b; }

// ❌ Bad - function does multiple things
int calculate(int a, int b, int op) {
    if (op == 1) return a + b;
    else if (op == 2) return a - b;
    // ... too many responsibilities
}
```

### 4. Document Your Functions

```c
/**
 * Calculates the sum of two integers
 * @param number1 First integer to add
 * @param number2 Second integer to add
 * @return Sum of number1 and number2
 */
int summation(int number1, int number2)
{
    return number1 + number2;
}
```

### 5. Handle Edge Cases

```c
int divide(int dividend, int divisor)
{
    if (divisor == 0) {
        printf("Error: Division by zero!\n");
        return 0;  // or use error code
    }
    return dividend / divisor;
}
```

## Advantages of Functions with Return and Parameters

1. **Reusability**: Write once, use many times
2. **Modularity**: Break complex problems into smaller parts
3. **Testability**: Easy to test individual functions
4. **Readability**: Code is more organized and understandable
5. **Flexibility**: Same function works with different inputs

## When to Use This Function Type

**Use when:**
- You need to process input and return a result
- You want to reuse the same calculation with different values
- The operation produces a value you need to use later
- You're performing mathematical operations or transformations

**Examples:**
- Mathematical operations (add, subtract, multiply)
- Conversions (celsius to fahrenheit)
- Validations (check if number is prime)
- Data processing (find maximum, calculate average)

## Key Takeaways

- Functions with return type and parameters accept input and produce output
- Parameters receive values from arguments passed during function call
- Return statement sends a value back to the caller
- Return values can be stored in variables or used in expressions
- Function calls create copies of arguments (pass by value)
- This is the most versatile and commonly used function type
- Functions improve code organization, reusability, and readability

## Next Steps

After mastering functions with return and parameters, you'll learn:

1. **Functions with Return but No Parameters** - Functions that return values without input
2. **Functions with Parameters but No Return** - Functions that process input but don't return values
3. **Functions with No Return and No Parameters** - Simple action functions
4. **Advanced Function Concepts** - Recursion, function pointers, variadic functions

## Troubleshooting

**Problem:** Function doesn't compile - "return statement missing"

- **Solution:** Make sure your function has a `return` statement if it's not `void`

**Problem:** Return value is always wrong

- **Solution:** Check that you're returning the correct variable and calculation is correct

**Problem:** Function call gives unexpected results

- **Solution:** Verify arguments match parameter types and are passed in correct order

**Problem:** Can't use return value

- **Solution:** Store the return value in a variable: `int result = function();`

Understanding functions with return types and parameters is essential for writing effective, modular C programs. This function type forms the foundation for building more complex programs!

