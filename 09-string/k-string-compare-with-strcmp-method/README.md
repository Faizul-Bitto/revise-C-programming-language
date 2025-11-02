# String Comparison Using strcmp() Function

## Overview

This program demonstrates how to compare two strings using the built-in `strcmp()` function from the C standard library. This is the standard and recommended method for string comparison.

## What You'll Learn

- Using the `strcmp()` function from `<string.h>`
- Understanding return values (negative, zero, positive)
- Interpreting comparison results
- Benefits of using library functions

## Complete Code

```c
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char a[1001], b[1001];
    scanf("%s %s", &a, &b);

    int comparisonValue = strcmp(b, a);

    printf("%d\n", comparisonValue);

    if (comparisonValue < 0)
    {
        printf("First is smaller\n");
        printf("Second is bigger\n");
    }
    else if (comparisonValue > 0)
    {
        printf("First is bigger\n");
        printf("Second is smaller\n");
    }
    else
    {
        printf("Equal\n");
    }

    return 0;
}
```

## Code Breakdown

### Step 1: Read Strings

```c
char a[1001], b[1001];
scanf("%s %s", &a, &b);
```

**What happens:**
- Declares and reads two strings

**Example Input:**
```
hello apple
```

**After input:**
```
a = "hello\0"
b = "apple\0"
```

### Step 2: Compare Using strcmp()

```c
int comparisonValue = strcmp(b, a);
```

**What happens:**
- `strcmp(str1, str2)` compares two strings
- Returns an integer value based on comparison
- Store the result for interpretation

**Return Values:**
- **Negative** (< 0): First string is lexicographically smaller
- **Zero** (= 0): Strings are equal
- **Positive** (> 0): First string is lexicographically larger

**Example:**
```
strcmp("apple", "hello") → negative (apple < hello)
strcmp("hello", "hello") → 0 (equal)
strcmp("zebra", "apple") → positive (zebra > apple)
```

### Step 3: Display Raw Comparison Value

```c
printf("%d\n", comparisonValue);
```

**Output:** Prints the numeric comparison result

### Step 4: Interpret and Display Result

```c
if (comparisonValue < 0)
{
    printf("First is smaller\n");
    printf("Second is bigger\n");
}
else if (comparisonValue > 0)
{
    printf("First is bigger\n");
    printf("Second is smaller\n");
}
else
{
    printf("Equal\n");
}
```

## How strcmp() Works

The `strcmp()` function compares strings character by character:

```c
int strcmp(const char* str1, const char* str2)
{
    int i = 0;
    
    while (str1[i] == str2[i])
    {
        if (str1[i] == '\0')
            return 0;  // Both strings ended together
        i++;
    }
    
    // Return the difference
    return str1[i] - str2[i];
}
```

**Return Value Logic:**
- If strings differ at position `i`: return `str1[i] - str2[i]`
- If `str1` ends first: return negative (str1 is smaller)
- If `str2` ends first: return positive (str1 is larger)
- If identical: return 0

## Understanding Return Values

### Example 1: Equal Strings

```c
int result = strcmp("hello", "hello");
printf("%d\n", result);  // Output: 0
```

**Meaning:** Strings are identical

### Example 2: First String Smaller

```c
int result = strcmp("apple", "banana");
printf("%d\n", result);  // Output: negative (typically -1)
```

**Meaning:** "apple" comes before "banana" in dictionary order

**Why:** 'a' < 'b' in ASCII (97 < 98)

### Example 3: First String Larger

```c
int result = strcmp("zebra", "apple");
printf("%d\n", result);  // Output: positive (typically 1)
```

**Meaning:** "zebra" comes after "apple" in dictionary order

**Why:** 'z' > 'a' in ASCII (122 > 97)

## Sample Input/Output

### Example 1: Equal Strings

**Input:**
```
hello hello
```

**Output:**
```
0
Equal
```

### Example 2: Different Strings

**Input:**
```
apple banana
```

**Output:**
```
-1
First is smaller
Second is bigger
```

**Note:** The program uses `strcmp(b, a)`, so:
- First = `b` = "apple"
- Second = `a` = "banana"

### Example 3: Case Sensitivity

**Input:**
```
Apple apple
```

**Output:**
```
-32
First is smaller
Second is bigger
```

**Why:** 'A' (65) < 'a' (97) in ASCII

## Key Concepts

### Lexicographic Order

Strings are compared like dictionary entries:
1. Compare characters from left to right
2. First differing character determines order
3. Shorter string comes first if all characters match
4. ASCII values determine character order

### Return Value Interpretation

| Return Value | Meaning                    | Condition         |
|--------------|----------------------------|-------------------|
| < 0          | First string is smaller    | str1 < str2       |
| = 0          | Strings are equal          | str1 == str2      |
| > 0          | First string is larger     | str1 > str2       |

### ASCII Ordering

Common ASCII ranges:
- **'A'-'Z'**: 65-90 (uppercase)
- **'a'-'z'**: 97-122 (lowercase)
- **'0'-'9'**: 48-57 (digits)

**Important:** Uppercase letters come before lowercase!

## Common Use Cases

### Use Case 1: Sorting

```c
char names[3][20] = {"zebra", "apple", "banana"};

// Sort by comparison
for (int i = 0; i < 3; i++)
{
    for (int j = i+1; j < 3; j++)
    {
        if (strcmp(names[i], names[j]) > 0)
        {
            // Swap strings
        }
    }
}
```

### Use Case 2: Password Check

```c
char password[50], correctPassword[50] = "secret123";

scanf("%s", password);

if (strcmp(password, correctPassword) == 0)
{
    printf("Access granted!\n");
}
else
{
    printf("Wrong password!\n");
}
```

### Use Case 3: Conditional Logic

```c
char userChoice[10];
scanf("%s", userChoice);

if (strcmp(userChoice, "yes") == 0)
{
    printf("You selected yes\n");
}
else if (strcmp(userChoice, "no") == 0)
{
    printf("You selected no\n");
}
else
{
    printf("Invalid choice\n");
}
```

## Common Mistakes

### 1. Missing Header File

```c
// ❌ Wrong - strcmp not declared
int main() {
    char a[100], b[100];
    strcmp(a, b);  // Compilation error!
    return 0;
}

// ✅ Correct
#include <string.h>
int main() {
    char a[100], b[100];
    strcmp(a, b);
    return 0;
}
```

### 2. Comparing Strings with ==

```c
// ❌ Wrong - compares addresses, not content
if (str1 == str2)
{
    printf("Equal");
}

// ✅ Correct - use strcmp
if (strcmp(str1, str2) == 0)
{
    printf("Equal");
}
```

### 3. Wrong Interpreterion of Return Value

```c
// ❌ Wrong - treats non-zero as true
if (strcmp(str1, str2))
{
    printf("Equal");  // Would print for ANY non-zero value!
}

// ✅ Correct - check for zero specifically
if (strcmp(str1, str2) == 0)
{
    printf("Equal");
}
```

### 4. Not Handling All Cases

```c
// ❌ Wrong - missing equal case
if (strcmp(a, b) < 0)
{
    printf("A is smaller");
}
else if (strcmp(a, b) > 0)
{
    printf("A is larger");
}
// What if they're equal?

// ✅ Correct - handle all three cases
if (strcmp(a, b) < 0)
{
    printf("A is smaller");
}
else if (strcmp(a, b) > 0)
{
    printf("A is larger");
}
else
{
    printf("Equal");
}
```

## Alternative Simplifications

### Method 1: Store Result Once

```c
char a[1001], b[1001];
scanf("%s %s", &a, &b);

int result = strcmp(b, a);

printf("%d\n", result);

if (result < 0)
    printf("First is smaller\nSecond is bigger\n");
else if (result > 0)
    printf("First is bigger\nSecond is smaller\n");
else
    printf("Equal\n");
```

### Method 2: Direct Comparison

```c
char a[1001], b[1001];
scanf("%s %s", &a, &b);

printf("%d\n", strcmp(b, a));

if (strcmp(b, a) < 0)
    printf("First is smaller\nSecond is bigger\n");
else if (strcmp(b, a) > 0)
    printf("First is bigger\nSecond is smaller\n");
else
    printf("Equal\n");
```

## ASCII Reference

| Character | ASCII Value |
|-----------|-------------|
| 'A'       | 65          |
| 'Z'       | 90          |
| 'a'       | 97          |
| 'z'       | 122         |
| '0'       | 48          |
| '9'       | 57          |

## How to Compile and Run

### Compilation

```bash
gcc string-compare-with-strcmp-method.c -o string-compare
```

### Execution

```bash
./string-compare
```

### Sample Run

```bash
$ ./string-compare
apple banana
-1
First is smaller
Second is bigger

$ ./string-compare
hello hello
0
Equal
```

## Comparison: Manual vs strcmp()

### Manual Comparison

```c
int i = 0;
while (true)
{
    if (a[i] == '\0' && b[i] == '\0')
    {
        printf("Equal");
        break;
    }
    // ... many more conditions
}
```

### Using strcmp()

```c
if (strcmp(a, b) == 0)
    printf("Equal");
else if (strcmp(a, b) < 0)
    printf("A is smaller");
else
    printf("A is larger");
```

## Related Functions

| Function | Purpose                          | Example                  |
|----------|----------------------------------|--------------------------|
| `strcmp()` | Compare strings              | `strcmp(str1, str2)`     |
| `strncmp()`| Compare n characters         | `strncmp(str1, str2, n)` |
| `strcpy()` | Copy string                  | `strcpy(dest, src)`      |
| `strlen()` | Get string length            | `strlen(str)`            |

## Key Takeaways

- `strcmp()` returns negative, zero, or positive based on comparison
- Negative: first string is smaller
- Zero: strings are equal
- Positive: first string is larger
- Always use `== 0` to check equality, not just `if (strcmp(...))`
- Never compare strings with `==` operator
- Case-sensitive comparison (A ≠ a)
- One line replaces complex manual comparison logic

The `strcmp()` function is the professional, standard way to compare strings in C programming!
