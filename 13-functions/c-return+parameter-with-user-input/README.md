# Functions with Return Type and Parameters (User Input) in C

## Overview

This program demonstrates functions with return types and parameters, but with user input taken in the `main()` function. This shows how to combine function calls with dynamic user input, making programs interactive while maintaining the benefits of modular function design. This is a practical application of the return + parameter function type in real-world scenarios.

## What You'll Learn

- How to use functions with parameters when values come from user input
- Passing user-provided values as function arguments
- Combining `scanf()` with function calls
- Building interactive programs with functions
- Dynamic function calls based on user input
- Practical applications of functions with input/output

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
    int x, y;
    scanf("%d %d", &x, &y);

    int result = summation(x, y);

    printf("%d", result);

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

**This is the same function as before:**
- Accepts two integer parameters
- Returns the sum of the two numbers
- Function logic is unchanged

### Step 2: Reading User Input

```c
int x, y;
scanf("%d %d", &x, &y);
```

**What happens:**
- Declares two variables `x` and `y`
- Reads two integers from user input
- Stores values in `x` and `y`

**Example:** User enters `15 25`
- `x = 15`, `y = 25`

### Step 3: Calling Function with User Input

```c
int result = summation(x, y);
```

**What happens:**
1. Variables `x` and `y` contain user-provided values
2. Values are passed as arguments to `summation()`
3. Function receives: `number1 = 15`, `number2 = 25`
4. Function calculates: `answer = 15 + 25 = 40`
5. Function returns `40`
6. Return value stored in `result`

### Step 4: Displaying Result

```c
printf("%d", result);
```

**What happens:**
- Prints the result returned from the function

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
100 200
```

**Output:**
```
300
```

### Example 3

**Input:**
```
5 7
```

**Output:**
```
12
```

## Complete Execution Flow

### Visual Step-by-Step with Input "15 25"

**Step 1: Program starts**
```
Variables: x = ?, y = ?
```

**Step 2: User enters input**
```
Input: 15 25
scanf reads: x = 15, y = 25
```

**Step 3: Function call**
```
main() calls summation(15, 25)
         ↓
    summation receives: number1 = 15, number2 = 25
         ↓
    calculation: answer = 15 + 25 = 40
         ↓
    return 40
         ↓
main() receives: result = 40
```

**Step 4: Output**
```
printf prints: 40
```

## Key Difference from Previous Program

### Without User Input (Previous Program)
```c
int result1 = summation(10, 10);  // Hard-coded values
int result2 = summation(20, 20);  // Hard-coded values
```

**Limitation:** Values are fixed in code, cannot change at runtime

### With User Input (This Program)
```c
scanf("%d %d", &x, &y);  // Read from user
int result = summation(x, y);  // Use user values
```

**Advantage:** Values are dynamic, different each time program runs

## Practical Examples

### Example 1: Calculator Program

```c
int multiply(int a, int b)
{
    return a * b;
}

int main()
{
    int num1, num2;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    int product = multiply(num1, num2);
    printf("Product: %d\n", product);
    
    return 0;
}
```

**Sample Run:**
```
Enter two numbers: 6 7
Product: 42
```

### Example 2: Area Calculator

```c
int calculateArea(int length, int width)
{
    return length * width;
}

int main()
{
    int len, wid;
    
    printf("Enter length and width: ");
    scanf("%d %d", &len, &wid);
    
    int area = calculateArea(len, wid);
    printf("Area: %d square units\n", area);
    
    return 0;
}
```

**Sample Run:**
```
Enter length and width: 10 5
Area: 50 square units
```

### Example 3: Temperature Converter

```c
int celsiusToFahrenheit(int celsius)
{
    return (celsius * 9 / 5) + 32;
}

int main()
{
    int temp;
    
    printf("Enter temperature in Celsius: ");
    scanf("%d", &temp);
    
    int fahrenheit = celsiusToFahrenheit(temp);
    printf("%d°C = %d°F\n", temp, fahrenheit);
    
    return 0;
}
```

**Sample Run:**
```
Enter temperature in Celsius: 25
25°C = 77°F
```

### Example 4: Maximum Finder

```c
int findMax(int a, int b)
{
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main()
{
    int num1, num2;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    int maximum = findMax(num1, num2);
    printf("Maximum: %d\n", maximum);
    
    return 0;
}
```

**Sample Run:**
```
Enter two numbers: 45 67
Maximum: 67
```

### Example 5: Multiple Operations

```c
int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }

int main()
{
    int x, y;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    
    printf("Sum: %d\n", add(x, y));
    printf("Difference: %d\n", subtract(x, y));
    printf("Product: %d\n", multiply(x, y));
    
    return 0;
}
```

**Sample Run:**
```
Enter two numbers: 10 3
Sum: 13
Difference: 7
Product: 30
```

## How to Compile and Run

### Compilation

```bash
gcc return+parameter.c -o return-parameter-input
```

### Execution

```bash
./return-parameter-input
```

### Interactive Session

```
$ ./return-parameter-input
15 25          ← User enters two numbers
40             ← Program displays result
```

### Using Input File

**Create `input.txt`:**
```
15 25
```

**Run:**
```bash
./return-parameter-input < input.txt
```

**Output:**
```
40
```

## Understanding Variable Scope

### Local Variables in main()

```c
int main()
{
    int x, y;  // x and y exist only in main()
    scanf("%d %d", &x, &y);
    // ...
}
```

- `x` and `y` are **local variables** to `main()`
- They exist only within the `main()` function
- Their values are copied when passed to other functions

### Parameters in Function

```c
int summation(int number1, int number2)
{
    // number1 and number2 are local to summation()
    // They receive copies of x and y
}
```

- `number1` and `number2` are **local variables** to `summation()`
- They are **separate** from `x` and `y` in `main()`
- Changes to `number1` and `number2` don't affect `x` and `y`

### Visual Memory Layout

```
main() scope:
    x = 15
    y = 25
    result = ?

summation() scope (when called):
    number1 = 15  (copy of x)
    number2 = 25  (copy of y)
    answer = 40
```

## Common Beginner Mistakes

### 1. Forgetting to Read Input

```c
// ❌ Wrong - x and y are uninitialized
int x, y;
int result = summation(x, y);  // Garbage values!

// ✅ Correct - read input first
int x, y;
scanf("%d %d", &x, &y);
int result = summation(x, y);
```

### 2. Wrong Format Specifier

```c
// ❌ Wrong - using %f for integers
int x, y;
scanf("%f %f", &x, &y);  // Type mismatch!

// ✅ Correct - use %d for integers
int x, y;
scanf("%d %d", &x, &y);
```

### 3. Missing & in scanf

```c
// ❌ Wrong - missing address operator
int x, y;
scanf("%d %d", x, y);  // Compilation error or crash!

// ✅ Correct - use & for scanf
int x, y;
scanf("%d %d", &x, &y);
```

### 4. Passing Wrong Number of Arguments

```c
// ❌ Wrong - function expects 2, given 1
int x;
scanf("%d", &x);
int result = summation(x);  // Error!

// ✅ Correct - pass both values
int x, y;
scanf("%d %d", &x, &y);
int result = summation(x, y);
```

### 5. Not Storing Return Value

```c
// ⚠️ Not wrong, but result is lost
int x, y;
scanf("%d %d", &x, &y);
summation(x, y);  // Return value ignored

// ✅ Better - use the return value
int x, y;
scanf("%d %d", &x, &y);
int result = summation(x, y);
printf("%d\n", result);
```

## Input Validation

### Basic Validation

```c
int main()
{
    int x, y;
    
    printf("Enter two integers: ");
    if (scanf("%d %d", &x, &y) == 2) {
        int result = summation(x, y);
        printf("Result: %d\n", result);
    } else {
        printf("Invalid input!\n");
        return 1;
    }
    
    return 0;
}
```

### Range Validation

```c
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    
    // Validate input range
    if (x < 0 || y < 0) {
        printf("Error: Numbers must be positive\n");
        return 1;
    }
    
    int result = summation(x, y);
    printf("%d\n", result);
    
    return 0;
}
```

## Advantages of User Input with Functions

1. **Flexibility**: Same function works with any input values
2. **Interactivity**: Programs respond to user actions
3. **Reusability**: Function code remains unchanged for different inputs
4. **Testing**: Easy to test with different input scenarios
5. **Practical**: Mimics real-world program behavior

## When to Use This Pattern

**Use when:**
- Building interactive applications
- Creating calculator programs
- Processing user-provided data
- Building tools that work with variable input
- Making programs that adapt to different scenarios

**Examples:**
- Calculator applications
- Data processing tools
- Conversion programs
- Game score calculations
- Form processing applications

## Comparison: Hard-coded vs User Input

### Hard-coded Values (Previous Program)

```c
int result = summation(10, 10);  // Always same result
```

**Pros:** Predictable, easy to test
**Cons:** Inflexible, same output every time

### User Input (This Program)

```c
scanf("%d %d", &x, &y);
int result = summation(x, y);  // Different result each time
```

**Pros:** Flexible, interactive, adaptable
**Cons:** Requires input validation, less predictable

## Best Practices

### 1. Always Prompt User

```c
printf("Enter two numbers: ");
scanf("%d %d", &x, &y);
```

### 2. Validate Input

```c
if (scanf("%d %d", &x, &y) != 2) {
    printf("Invalid input!\n");
    return 1;
}
```

### 3. Use Clear Variable Names

```c
int firstNumber, secondNumber;  // Clear purpose
scanf("%d %d", &firstNumber, &secondNumber);
```

### 4. Provide Feedback

```c
printf("Enter two numbers: ");
scanf("%d %d", &x, &y);
printf("Calculating sum of %d and %d...\n", x, y);
int result = summation(x, y);
printf("Result: %d\n", result);
```

### 5. Handle Edge Cases

```c
int x, y;
scanf("%d %d", &x, &y);

// Check for potential overflow
if (x > 1000000 || y > 1000000) {
    printf("Warning: Large numbers may cause overflow\n");
}

int result = summation(x, y);
printf("%d\n", result);
```

## Key Takeaways

- Functions with parameters work seamlessly with user input
- Read input in `main()`, then pass values as arguments
- User input makes programs interactive and flexible
- Same function can be used with different inputs
- Always validate user input for better programs
- This pattern is used in most real-world applications
- Combining functions with user input creates powerful, flexible programs

## Next Steps

After mastering functions with user input, you'll learn:

1. **Functions with Return but No Parameters** - Functions that read input internally
2. **Functions with Parameters but No Return** - Functions that process and display directly
3. **Error Handling** - Validating and handling invalid input
4. **Multiple Function Calls** - Building complex programs with multiple functions

## Troubleshooting

**Problem:** Program shows garbage values

- **Solution:** Make sure you're reading input before calling the function

**Problem:** Function always returns same value

- **Solution:** Verify you're passing the input variables, not hard-coded values

**Problem:** scanf doesn't read properly

- **Solution:** Check format specifiers match variable types, and use `&` for scanf

**Problem:** Output doesn't match expected

- **Solution:** Verify input was read correctly, add `printf` statements to debug

This pattern of combining user input with functions is fundamental to building interactive C programs. Most real-world applications use this approach to create flexible, user-friendly programs!

