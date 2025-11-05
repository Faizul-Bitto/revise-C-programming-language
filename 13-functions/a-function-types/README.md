# Function Types in C

## Overview

This section provides an overview of the four fundamental types of functions in C programming. Understanding these function types is essential for writing well-structured and efficient C programs. Functions can be categorized based on whether they return a value and whether they accept parameters.

## Four Types of Functions

There are four types of functions in C:

1. **Return + Parameter**: Functions that accept parameters and return a value
2. **Return + No Parameter**: Functions that return a value but don't accept parameters
3. **No Return + Parameter**: Functions that accept parameters but don't return a value (void)
4. **No Return + No Parameter**: Functions that neither accept parameters nor return a value

## Function Syntax

### Function with Return Type and Parameters

```c
returnType functionName(type_of_parameter parameter)
{
    // Function body
    return something;
}

int main()
{
    function_call(arguments);
    return 0;
}
```

### Function with No Return Type (void)

```c
void functionName(type_of_parameter parameter)
{
    // Function body
    // Can use 'return;' to exit early (no value returned)
}

int main()
{
    function_call(arguments);
    return 0;
}
```

## Key Concepts

### Return Type

- Functions can return a value of a specific data type (int, float, char, etc.)
- Use `return value;` to return a value
- Functions with `void` return type don't return any value

### Parameters

- Parameters are variables that receive values when the function is called
- Functions can have zero or more parameters
- Parameters must be declared with their data types

### Void Functions

- `void` keyword indicates the function doesn't return any value
- Can still use `return;` statement to exit the function early
- Useful for functions that perform actions but don't need to return data

## What You'll Learn

- Understanding the four function type categories
- When to use each function type
- Function declaration and definition syntax
- Return statements and void functions
- Parameter passing mechanisms

## Example Function Types

1. **Return + Parameter**: `int add(int a, int b) { return a + b; }`
2. **Return + No Parameter**: `int getRandom() { return 42; }`
3. **No Return + Parameter**: `void printValue(int x) { printf("%d", x); }`
4. **No Return + No Parameter**: `void greet() { printf("Hello"); }`
