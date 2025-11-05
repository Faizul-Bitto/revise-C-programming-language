# Pointers in C

## Overview

This section covers pointers in C programming. Pointers are variables that store memory addresses of other variables. They are one of the most powerful and important features of C, enabling dynamic memory allocation, efficient array manipulation, and function parameter passing by reference.

## Topics Covered

- **Finding Memory Address**: Using the address-of operator (&) to get memory addresses
- **Pointer Variables**: Declaring and using pointer variables to store addresses

## What You'll Learn

- Understanding memory addresses and how variables are stored
- Using the address-of operator (&)
- Declaring and initializing pointer variables
- Dereferencing pointers to access values
- Understanding the relationship between pointers and variables
- Memory layout and pointer arithmetic basics

## Key Concepts

### Memory Address

Every variable is stored at a specific memory address. The `&` operator retrieves this address:

```c
int x = 10;
printf("%p", &x);  // Prints the memory address of x
```

### Pointer Variable

A pointer variable stores the memory address of another variable:

```c
int x = 10;
int *ptr = &x;     // ptr stores the address of x
```

### Pointer Syntax

```c
data_type *pointer_name;  // Declaration
pointer_name = &variable; // Assignment
```

### Format Specifier

Use `%p` to print memory addresses:

```c
printf("%p", ptr);    // Prints address stored in ptr
printf("%p", &ptr);   // Prints address of ptr itself
```

## Modules in This Section

1. **Finding Memory Address**: Using the & operator
2. **Pointer Variable**: Declaring and using pointers
