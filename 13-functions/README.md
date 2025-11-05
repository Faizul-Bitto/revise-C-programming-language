# Functions in C

## Overview

This section covers functions in C programming. Functions are blocks of code that perform specific tasks and can be reused throughout your program. They help organize code, reduce repetition, and make programs more modular and maintainable. Understanding different function types is crucial for effective C programming.

## Topics Covered

- **Function Types**: Overview of the four types of functions in C
- **Return + Parameter**: Functions that accept parameters and return values
- **Return + Parameter with User Input**: Functions with parameters that get values from user input
- **Return + No Parameter**: Functions that return values but don't accept parameters
- **No Return + Parameter**: Functions that accept parameters but don't return values (void)
- **No Return + No Parameter**: Functions that neither accept parameters nor return values

## What You'll Learn

- Breaking code into reusable functions
- Function declaration and definition
- Passing parameters to functions
- Returning values from functions
- Using void functions for procedures
- Function calls and return statements
- Parameter passing mechanisms
- Scope of variables in functions

## Key Concepts

### Function Types

1. **Return + Parameter**: `int add(int a, int b) { return a + b; }`
2. **Return + No Parameter**: `int getNumber() { return 10; }`
3. **No Return + Parameter**: `void printValue(int x) { printf("%d", x); }`
4. **No Return + No Parameter**: `void greet() { printf("Hello"); }`

### Function Syntax

```c
returnType functionName(parameterList) {
    // Function body
    return value;  // If returnType is not void
}
```

### Function Call

```c
int result = functionName(arguments);
```

## Modules in This Section

1. **Function Types**: Overview of all function types
2. **Return + Parameter**: Functions with return and parameters
3. **Return + Parameter with User Input**: User input with functions
4. **Return + No Parameter**: Functions returning values without parameters
5. **No Return + Parameter**: Void functions with parameters
6. **No Return + No Parameter**: Void functions without parameters
