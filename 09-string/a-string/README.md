# String Input and Output in C

## Overview

This program demonstrates how to work with strings in C programming - a fundamental data type that allows you to store and manipulate text. Strings in C are essentially arrays of characters with special null-termination behavior.

## What You'll Learn

- How to declare and initialize character arrays (strings)
- Reading character input using loops
- Displaying string output character by character
- Understanding string indexing and character access
- Basic string manipulation concepts

## Complete Code

```c
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char string[10];

    for (int i = 0; i <= 4; i++)
    {
        scanf("%c", &string[i]);
    }

    for (int i = 0; i <= 4; i++)
    {
        printf("%c", string[i]);
    }

    return 0;
}

/*
    ! To work with strings in C:
    
    1. Declare a character array: char string[size];
    2. Read characters one by one using a loop
    3. Display characters one by one using a loop
    4. Each character is accessed using array indexing
    
    Example:
    Input: "Hello"
    Output: "Hello"
*/
```

## Code Breakdown

### Step 1: String Declaration

```c
char string[10];
```

**What happens:**
- Creates a character array that can store 10 characters
- Memory allocated but values are uninitialized
- Ready to receive character input from user

```
Index:  0  1  2  3  4  5  6  7  8  9
Value:  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  (uninitialized)
```

### Step 2: Reading Character Input

```c
for (int i = 0; i <= 4; i++)
{
    scanf("%c", &string[i]);
}
```

**How it works:**

**Loop Execution:**
1. `i = 0`: Read character into `string[0]`
2. `i = 1`: Read character into `string[1]`
3. `i = 2`: Read character into `string[2]`
4. `i = 3`: Read character into `string[3]`
5. `i = 4`: Read character into `string[4]`
6. `i = 5`: Condition `i <= 4` is false, loop exits

**Example with input "Hello":**

```
User Input: H e l l o

Iteration 1: i=0 → scanf reads 'H' → string[0] = 'H'
Iteration 2: i=1 → scanf reads 'e' → string[1] = 'e'
Iteration 3: i=2 → scanf reads 'l' → string[2] = 'l'
Iteration 4: i=3 → scanf reads 'l' → string[3] = 'l'
Iteration 5: i=4 → scanf reads 'o' → string[4] = 'o'
```

**After input:**
```
Index:  0  1  2  3  4  5  6  7  8  9
Value:  H  e  l  l  o  ?  ?  ?  ?  ?
```

### Step 3: Displaying Character Output

```c
for (int i = 0; i <= 4; i++)
{
    printf("%c", string[i]);
}
```

**How it works:**

**Loop Execution:**
1. `i = 0`: Print `string[0]` → Outputs: `H`
2. `i = 1`: Print `string[1]` → Outputs: `e`
3. `i = 2`: Print `string[2]` → Outputs: `l`
4. `i = 3`: Print `string[3]` → Outputs: `l`
5. `i = 4`: Print `string[4]` → Outputs: `o`

**Complete Output:** `Hello`

## Sample Input/Output

### Example 1: Basic String

**Input:**
```
Hello
```

**Output:**
```
Hello
```

### Example 2: Different String

**Input:**
```
World
```

**Output:**
```
World
```

### Example 3: Numbers as Characters

**Input:**
```
12345
```

**Output:**
```
12345
```

## String vs Character Array

### Character Array (What we're using)

```c
char string[10];
// Stores individual characters
// No automatic null termination
// Manual indexing required
```

### String (Standard C strings)

```c
char string[10];
scanf("%s", string);  // Automatically null-terminated
printf("%s", string); // Prints until null character
```

## Variations and Extensions

### Variation 1: Using String Input/Output

```c
char string[10];

scanf("%s", string);
printf("%s", string);
```

### Variation 2: Dynamic String Size

```c
int n;
scanf("%d", &n);
char string[n];

for (int i = 0; i < n; i++) {
    scanf("%c", &string[i]);
}

for (int i = 0; i < n; i++) {
    printf("%c", string[i]);
}
```

### Variation 3: String with Spaces

```c
char string[20];

// Read string with spaces
scanf(" %[^\n]", string);
printf("%s", string);
```

### Variation 4: Character-by-Character with Validation

```c
char string[10];
char ch;

for (int i = 0; i < 5; i++) {
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z') {
        string[i] = ch;
    } else {
        string[i] = '?';
    }
}

for (int i = 0; i < 5; i++) {
    printf("%c", string[i]);
}
```

## Practical Examples

### Example 1: Password Input

```c
char password[10];

printf("Enter password (5 characters): ");
for (int i = 0; i < 5; i++) {
    scanf("%c", &password[i]);
}

printf("Password entered: ");
for (int i = 0; i < 5; i++) {
    printf("%c", password[i]);
}
```

### Example 2: Word Reversal

```c
char word[10];

printf("Enter a word (5 characters): ");
for (int i = 0; i < 5; i++) {
    scanf("%c", &word[i]);
}

printf("Reversed: ");
for (int i = 4; i >= 0; i--) {
    printf("%c", word[i]);
}
```

### Example 3: Character Counting

```c
char text[20];
int vowelCount = 0;

printf("Enter text (5 characters): ");
for (int i = 0; i < 5; i++) {
    scanf("%c", &text[i]);
    
    if (text[i] == 'a' || text[i] == 'e' || text[i] == 'i' || 
        text[i] == 'o' || text[i] == 'u') {
        vowelCount++;
    }
}

printf("Text: ");
for (int i = 0; i < 5; i++) {
    printf("%c", text[i]);
}
printf("\nVowels: %d", vowelCount);
```

## How to Compile and Run

### Compilation

```bash
gcc string.c -o string
```

### Execution

```bash
./string
```

### Sample Run

```bash
$ ./string
Hello
Hello
```

## Common Beginner Mistakes

### 1. Wrong Loop Boundary

```c
// ❌ Wrong - loops 6 times (0, 1, 2, 3, 4, 5)
for (int i = 0; i <= 5; i++) {
    scanf("%c", &string[i]);
}

// ✅ Correct - loops 5 times (0, 1, 2, 3, 4)
for (int i = 0; i <= 4; i++) {
    scanf("%c", &string[i]);
}
```

### 2. Forgetting the & in scanf

```c
// ❌ Wrong - missing & before string[i]
scanf("%c", string[i]);  // Compilation error!

// ✅ Correct - & needed for scanf
scanf("%c", &string[i]);
```

### 3. Wrong Format Specifier

```c
// ❌ Wrong - using %s for single character
scanf("%s", &string[i]);

// ✅ Correct - using %c for single character
scanf("%c", &string[i]);
```

### 4. Array Size Too Small

```c
// ❌ Wrong - array too small
char string[3];
for (int i = 0; i <= 4; i++) {  // Will cause buffer overflow!
    scanf("%c", &string[i]);
}

// ✅ Correct - array large enough
char string[10];
for (int i = 0; i <= 4; i++) {
    scanf("%c", &string[i]);
}
```

## Best Practices

### 1. Use Appropriate Array Size

```c
char string[20];  // Always declare larger than needed
```

### 2. Validate Input

```c
char ch;
scanf("%c", &ch);
if (ch >= 'a' && ch <= 'z') {
    string[i] = ch;
} else {
    printf("Invalid character!\n");
}
```

### 3. Use Meaningful Variable Names

```c
char userName[20];  // Clear purpose
char password[15];  // Clear purpose
```

### 4. Add Null Termination for String Operations

```c
char string[10];
for (int i = 0; i < 5; i++) {
    scanf("%c", &string[i]);
}
string[5] = '\0';  // Add null terminator
```

## Key Takeaways

- Strings in C are character arrays
- Use `%c` format specifier for single characters
- Always use `&` with scanf for character input
- Loop boundaries must match array size
- Character arrays can be accessed using indices
- This pattern works for any string length

Understanding character arrays is fundamental to working with text data in C programming!
