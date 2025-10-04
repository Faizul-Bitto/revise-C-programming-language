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

### Extended Data Types for Larger Values

#### 5. Long Long Integer (`long long int`)

- **Purpose**: Stores very large whole numbers
- **Memory**: 8 bytes (double the size of regular int)
- **Range**: Approximately -9 × 10^18 to +9 × 10^18
- **When to use**: When regular int is too small for your numbers
- **Example**: For calculations involving billions or trillions

#### 6. Double (`double`)

- **Purpose**: Stores decimal numbers with higher precision than float
- **Memory**: 8 bytes (double the size of float)
- **Precision**: About 15-17 decimal digits
- **When to use**: When you need more accurate decimal calculations

### Understanding Data Type Limitations

**Why limitations matter**: Each data type has a maximum value it can store. Going beyond this limit causes **overflow**, which gives wrong results.

#### Integer Limitations:

- **`int`**: Safe up to about 2 billion (2 × 10^9)
- **`long long int`**: Safe up to about 9 × 10^18

**Real Example of Overflow:**

```c
int safe = 1000000000;        // 1 billion - works fine
int unsafe = 1000000000000;   // 1 trillion - causes overflow!
```

## Code Example

```c
#include <stdbool.h> // for working with boolean, we need to import this library
#include <stdio.h>

int main()
{
    /*
        Data Types :

        int ( integer ) -> limitation : 4 bytes
        long long int -> for more space = 'long long int' instead of 'int' -> long
       long int : 8 bytes

        float ( float ) -> limitation : 4 bytes
        double ( double ) -> for more space = 'double' instead of 'float' ->
       double : 8 bytes

        char ( character )
        bool ( boolean , only can store 'true' or 'false', in return shows only
       two integers : either 0 (false) or 1 (true) )
    */

    /*
        int ( integer ) -> limitation : 4 bytes -> 10^9
        long long int -> for more space = 'long long int' instead of 'int' -> long
       long int : 8 bytes -> 10^18

        float ( float ) -> limitation : 4 bytes
        double ( double ) -> for more space = 'double' instead of 'float' ->
       double : 8 bytes

        So, we also should keep these limitations in mind while choosing the right
       data type.
    */

    int num1;
    num1 = 0;

    int num2 = 10;

    float num3 = 20.5;
    float num4 = 20; // though it's looking int, 20, but it is assigned as float.
                     // So, it will be printed like : 20.000000

    char c = 'a'; // single quotes only for storing characters
    char d = '@';

    bool e = true;
    bool f = false;

    printf("%d \n", num1);
    printf("%f \n", num3);
    printf("%f \n", num4);
    printf("\n");

    printf("%.2f \n",
           num3); // instead of printing 6 digits after ( . ) ( six decimal places
                  // ), it will print 2 ( two decimal places )
    printf("%.3f \n",
           num4); // instead of printing 6 digits after ( . ) ( six decimal places
                  // ), it will print 3 ( three decimal places )
    printf("\n");

    printf("%c \n", c);
    printf("%c", d);

    printf("%c \n", c);
    printf("%d \n", e);
    printf("%d \n", f);

    /*
        Format specifiers :

        %d = int
        %f = float
        %c = char
        %lld = long long int
        %lf = double
     */

    //! Limitations :
    int h = 1000000000; // 10^9
    printf("%d \n", h); // right output : 1000000000
    // More than 10^9 :
    int i = 1000000000000; // 10^12
    printf("%d \n", i);    // getting wrong output : -727379968

    // To work with more memory storage :
    long long int j = 100000000000000000;   // 10^17
    printf("%lld \n", j);                   // right output : 100000000000000000
    long long int k = 10000000000000000000; // 10^19
    printf("%lld \n", k);                   // getting wrong output : -8446744073709551616

    float l = 2134.1234; // almost gives correct output for total 8 digits, with decimal point ( 2134.1234 ), more than that, gives error value
    printf("%f \n", l);  // output : 2134.123291

    double m = 2134.123456; // gives correct output for total 10 digits, with decimal point ( 2134.123456 ), more than that, gives no value than that
    printf("%lf \n", m);    // output : 2134.123456

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

- **`%lld`** - For long long integers

  ```c
  long long int bigNum = 100000000000000000;
  printf("Big number: %lld", bigNum);  // Output: Big number: 100000000000000000
  ```

- **`%f`** - For floating-point numbers (f = float)

  ```c
  float price = 19.99;
  printf("Price: %f", price);  // Output: Price: 19.990000
  ```

- **`%lf`** - For double precision numbers

  ```c
  double precise = 2134.123456;
  printf("Precise: %lf", precise);  // Output: Precise: 2134.123456
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

### 6. Data Type Limitations and Overflow (NEW!)

**What is overflow?**
Overflow happens when you try to store a number that's too big for the data type. Instead of getting an error, you get a completely wrong result.

#### Example of Integer Overflow:

```c
// Regular int overflow
int safe = 1000000000;        // 1 billion (10^9) - works perfectly
printf("%d", safe);          // Output: 1000000000

int unsafe = 1000000000000;   // 1 trillion (10^12) - too big for int!
printf("%d", unsafe);        // Output: -727379968 (wrong!)

// Long long int - can handle bigger numbers
long long int large = 100000000000000000;   // 10^17 - works fine
printf("%lld", large);                     // Output: 100000000000000000

long long int tooLarge = 10000000000000000000; // 10^19 - even long long overflows!
printf("%lld", tooLarge);                     // Output: -8446744073709551616 (wrong!)
```

#### Float vs Double Precision Examples:

```c
// Float precision limitations
float floatNum = 2134.1234;    // Input: 2134.1234 (8 digits)
printf("%f", floatNum);        // Output: 2134.123291 (loses precision!)

// Double precision - more accurate
double doubleNum = 2134.123456; // Input: 2134.123456 (10 digits)
printf("%lf", doubleNum);       // Output: 2134.123456 (accurate!)
```

**Why this happens:**

- `int` can only store up to about 2 billion
- When you exceed this limit, the number "wraps around" and becomes negative
- This is like an odometer in a car rolling over from 999,999 back to 000,000

#### How to Handle Large Numbers:

```c
long long int large = 1000000000000;  // Use long long for big numbers
printf("%lld", large);               // Use %lld format specifier
```

#### Choosing the Right Data Type:

| Data Type       | Memory  | Safe Range           | Use When                               |
| --------------- | ------- | -------------------- | -------------------------------------- |
| `int`           | 4 bytes | Up to 2 billion      | Normal counting, small calculations    |
| `long long int` | 8 bytes | Up to 9 × 10^18      | Large numbers, scientific calculations |
| `float`         | 4 bytes | 6-7 decimal digits   | Basic decimal calculations             |
| `double`        | 8 bytes | 15-17 decimal digits | Precise decimal calculations           |

### 7. Character Storage Rules

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
1

1000000000
-727379968
100000000000000000
-8446744073709551616
2134.123291
2134.123456
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

**Memory Usage by Data Type:**

- `int`: 4 bytes
- `long long int`: 8 bytes
- `float`: 4 bytes
- `double`: 8 bytes
- `char`: 1 byte
- `bool`: 1 byte

**Why this matters**: Choosing the right data type saves memory and improves performance.

**Rule of thumb**: Use the smallest data type that can safely hold your values.

### Concept 6: Integer Overflow - A Critical Programming Concept

**What you learned**: Numbers have limits, and exceeding them gives wrong results.

**Real-world impact**:

- Banking software: Wrong calculations could lose money
- Game scores: High scores might become negative
- Scientific calculations: Results become meaningless

**Prevention**: Always consider the range of values your program will handle and choose appropriate data types.

### Concept 7: Float vs Double Precision - Understanding Decimal Accuracy

**What you learned**: Different decimal data types have different levels of precision.

#### Float Limitations:

- **Input**: `2134.1234` (what you type)
- **Output**: `2134.123291` (what gets stored and printed)
- **Problem**: Loses precision after about 6-7 significant digits

#### Double Advantages:

- **Input**: `2134.123456` (what you type)
- **Output**: `2134.123456` (exactly what gets stored and printed)
- **Benefit**: Maintains precision up to about 15-17 significant digits

**When to use each:**

- **Float**: Simple calculations where small errors don't matter
- **Double**: Scientific calculations, financial software, when precision is critical
