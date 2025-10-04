# Printing Variables in C

This program demonstrates how to print different data types in C using format specifiers.

## Understanding Data Types in C

### What are Data Types?

Data types tell the computer what kind of information you want to store and how much memory space it needs. Think of them as different containers for different kinds of data.

### Basic Data Types Explained

#### 1. Integer (`int`)

- **Purpose**: Stores whole numbers (no decimal points)
- **Examples**: 5, -10, 0, 1000
- **Memory**: Usually 4 bytes
- **Range**: Typically -2,147,483,648 to 2,147,483,647

#### 2. Float (`float`)

- **Purpose**: Stores decimal numbers (floating-point numbers)
- **Examples**: 3.14, -2.5, 0.001
- **Memory**: 4 bytes
- **Precision**: About 6-7 decimal digits
- **Important**: Even if you assign a whole number like `20` to a float, it becomes `20.000000`

#### 3. Character (`char`)

- **Purpose**: Stores a single character
- **Examples**: 'A', 'z', '@', '5'
- **Memory**: 1 byte
- **Rule**: Must use single quotes ('') not double quotes ("")

#### 4. Boolean (`bool`)

- **Purpose**: Stores true or false values
- **Values**: Only `true` or `false`
- **Display**: Shows as 1 (true) or 0 (false) when printed
- **Requirement**: Need `#include <stdbool.h>` at the top

## Code Example

```c
#include <stdio.h>
#include <stdbool.h> // for working with boolean, we need to import this library

int main()
{
    /*
        Data Types :

        int ( integer )
        float ( float )
        double ( double )
        char ( character )
        bool ( boolean , only can store 'true' or 'false', in return shows only two integers : either 0 (false) or 1 (true) )
    */

    int num1;
    num1 = 0;

    int num2 = 10;

    float num3 = 20.5;
    float num4 = 20; // though it's looking int, 20, but it is assigned as float. So, it will be printed like : 20.000000

    char c = 'a'; // single quotes only for storing characters
    char d = '@';

    bool e = true;
    bool f = false;

    printf("%d \n", num1);
    printf("%f \n", num3);
    printf("%f \n", num4);
    printf("\n");

    printf("%.2f \n", num3); // instead of printing 6 digits after ( . ) ( six decimal places ), it will print 2 ( two decimal places )
    printf("%.3f \n", num4); // instead of printing 6 digits after ( . ) ( six decimal places ), it will print 3 ( three decimal places )
    printf("\n");

    printf("%c \n", c);
    printf("%c", d);

    printf("%c \n", c);
    printf("%d \n", e);
    printf("%d", f);

    /*
        Format specifiers :

        %d = int
        %f = float
        %c = char
     */

    return 0;
}
```

## Key Programming Concepts Explained

### 1. Format Specifiers - How to Print Different Data Types

**What are format specifiers?**
Format specifiers are special codes that tell `printf()` what type of data you're printing and how to display it.

#### Common Format Specifiers:

- **`%d`** - For integers (d = decimal)

  ```c
  int age = 25;
  printf("Age: %d", age);  // Output: Age: 25
  ```

- **`%f`** - For floating-point numbers (f = float)

  ```c
  float price = 19.99;
  printf("Price: %f", price);  // Output: Price: 19.990000
  ```

- **`%c`** - For characters (c = character)
  ```c
  char grade = 'A';
  printf("Grade: %c", grade);  // Output: Grade: A
  ```

### 2. Controlling Float Precision

**Why control precision?**
By default, `%f` shows 6 decimal places, which can be too many for most purposes.

#### Precision Control Examples:

- **`%.2f`** - Shows exactly 2 decimal places

  ```c
  float num = 20.5;
  printf("%.2f", num);  // Output: 20.50
  ```

- **`%.3f`** - Shows exactly 3 decimal places
  ```c
  float num = 20;
  printf("%.3f", num);  // Output: 20.000
  ```

### 3. Variable Declaration Methods

#### Method 1: Declare First, Assign Later

```c
int num1;        // Declare the variable
num1 = 0;        // Assign a value later
```

**When to use**: When you don't know the initial value yet.

#### Method 2: Declare and Initialize Together

```c
int num2 = 10;   // Declare and assign in one step
```

**When to use**: When you know the initial value (recommended method).

### 4. Understanding Boolean in C

**Important Facts:**

- Boolean is not built into original C (added in C99)
- Need `#include <stdbool.h>` to use `true` and `false`
- Internally stored as integers: `true` = 1, `false` = 0
- When printed with `%d`, shows the numeric value

```c
bool isStudent = true;
printf("%d", isStudent);  // Output: 1
```

### 5. Character Storage Rules

**Critical Rules:**

- Single characters use single quotes: `'a'`
- Double quotes are for strings: `"hello"`
- Each character takes exactly 1 byte of memory
- Can store letters, numbers, symbols: `'A'`, `'5'`, `'@'`

## Expected Output

```
0
20.500000
20.000000

20.50
20.000

a
@a
1
0
```

## Compilation and Execution

```bash
gcc first-program.c -o first-program
./first-program
```

## What You'll Learn From This Program

### Concept 1: Data Type Conversion (Automatic)

**What happens**: When you assign an integer to a float variable, C automatically converts it.

```c
float num4 = 20;  // You write 20 (integer)
// C stores it as 20.000000 (float)
```

**Why this matters**: Understanding this prevents confusion when you see extra decimal places.

### Concept 2: Character vs String Difference

**Character** (single): Uses single quotes `'a'`
**String** (multiple): Uses double quotes `"hello"`

```c
char letter = 'A';     // Correct: single character
char word = "Hello";   // Wrong: this is a string, not a character
```

### Concept 3: Boolean Internal Representation

**Key insight**: Computers don't actually understand "true" and "false" - they use numbers.

- `true` = 1
- `false` = 0

This is why `printf("%d", true)` shows `1`.

### Concept 4: Precision Control Importance

**Problem**: Default float printing shows 6 decimal places: `20.500000`
**Solution**: Use precision control: `%.2f` shows `20.50`

**Real-world use**: Money calculations, measurements, percentages.

### Concept 5: Memory and Efficiency

- `int`: 4 bytes
- `float`: 4 bytes
- `char`: 1 byte
- `bool`: 1 byte

**Why this matters**: Choosing the right data type saves memory and improves performance.
