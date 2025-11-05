# Strings in C

## Overview

This section covers string manipulation in C programming. In C, strings are represented as arrays of characters terminated by a null character ('\0'). Understanding strings is essential for working with text data, user input, and text processing.

## Topics Covered

- **String Basics**: Character array declaration and initialization
- **String Input/Output**: Getting and displaying string data
- **String Input with Space**: Handling strings containing spaces
- **String Length**: Calculating string length manually and using built-in functions
- **String Copy**: Copying strings manually and using `strcpy()`
- **String Concatenation**: Joining strings manually and using `strcat()`
- **String Comparison**: Comparing strings manually and using `strcmp()`

## What You'll Learn

- Representing strings as character arrays
- Handling null-terminated strings
- Reading strings with and without spaces
- Calculating string length
- Copying, concatenating, and comparing strings
- Using string manipulation functions from `string.h`
- Manual implementation of string operations for better understanding

## Key Concepts

### String Declaration

```c
char name[20];                    // Character array
char greeting[] = "Hello";        // Initialized string
```

### String Input

```c
scanf("%s", name);                // Without spaces
scanf(" %[^\n]", name);           // With spaces
fgets(name, sizeof(name), stdin); // Alternative method
```

### String Functions

```c
strlen(str);      // Get string length
strcpy(dest, src); // Copy string
strcat(dest, src); // Concatenate strings
strcmp(str1, str2); // Compare strings
```

## Modules in This Section

1. **String**: Basic string declaration and concepts
2. **String Input/Output**: Reading and displaying strings
3. **String Input with Space**: Handling strings with spaces
4. **String Length**: Calculating string length
5. **String Length with strlen()**: Using built-in function
6. **String Copy (Manual)**: Manual string copying
7. **String Copy with strcpy()**: Using built-in function
8. **String Concat (Manual)**: Manual string concatenation
9. **String Concat with strcat()**: Using built-in function
10. **String Compare (Manual)**: Manual string comparison
11. **String Compare with strcmp()**: Using built-in function
