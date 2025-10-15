# Reversing Array Elements in C

## Overview

This program demonstrates how to display array elements in reverse order using a loop that iterates backwards. Reversing arrays is a common operation in programming, useful for many applications from data processing to implementing algorithms like palindrome checking or stack operations.

## What You'll Learn

- How to traverse an array in reverse order
- Using decrementing loops to access elements from end to start
- Understanding backward iteration patterns
- Dynamic array sizing based on user input
- Practical applications of reverse traversal
- Variable-length arrays in C

## Complete Code

```c
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int array[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", array[i]);
    }

    return 0;
}
```

## Code Breakdown

### Step 1: Reading Array Size

```c
int n;
scanf("%d", &n);
```

**What happens:**
- Declares variable `n` to store the array size
- Reads the size from user input
- This makes the program flexible - works with any array size

**Example:** If user enters `5`, the array will have 5 elements.

### Step 2: Creating Dynamic Array

```c
int array[n];
```

**What happens:**
- Creates an array of size `n` (determined at runtime)
- This is a **Variable Length Array (VLA)** - a C99 feature
- Memory is allocated based on user's input

**Example:** If `n = 5`, creates: `int array[5];`

### Step 3: Reading Array Elements

```c
for (int i = 0; i < n; i++)
{
    scanf("%d", &array[i]);
}
```

**How it works:**

**Loop iterations:**
- `i = 0`: Read into `array[0]`
- `i = 1`: Read into `array[1]`
- `i = 2`: Read into `array[2]`
- Continue until `i = n-1`: Read into `array[n-1]`

**Example with n=5:**
```
Input: 10 20 30 40 50

After loop:
Index:  0   1   2   3   4
Value: 10  20  30  40  50
```

### Step 4: Printing in Reverse Order

```c
for (int i = n - 1; i >= 0; i--)
{
    printf("%d ", array[i]);
}
```

**How it works:**

**Key Points:**
- **Starting point**: `i = n - 1` (last index)
- **Condition**: `i >= 0` (continue until reaching first element)
- **Update**: `i--` (decrease by 1 each iteration)

**Loop iterations with n=5:**
```
i = 4: Print array[4] → Outputs: 50
i = 3: Print array[3] → Outputs: 40
i = 2: Print array[2] → Outputs: 30
i = 1: Print array[1] → Outputs: 20
i = 0: Print array[0] → Outputs: 10
```

**Result:** `50 40 30 20 10 `

## Visual Step-by-Step Example

### Complete Execution with n=5

**Step 1: Input size**
```
Input: 5
Variable n = 5
```

**Step 2: Create array**
```
int array[5];
Index:  0   1   2   3   4
Value:  ?   ?   ?   ?   ?  (uninitialized)
```

**Step 3: Fill array (forward)**
```
Input: 10 20 30 40 50

Index:  0   1   2   3   4
Value: 10  20  30  40  50
```

**Step 4: Print array (backward)**
```
Start from index 4 (n-1):
i=4: array[4] = 50 → Print "50 "
i=3: array[3] = 40 → Print "40 "
i=2: array[2] = 30 → Print "30 "
i=1: array[1] = 20 → Print "20 "
i=0: array[0] = 10 → Print "10 "

Output: 50 40 30 20 10
```

## Sample Input/Output

### Example 1: Five Elements

**Input:**
```
5
10 20 30 40 50
```

**Output:**
```
50 40 30 20 10 
```

### Example 2: Three Elements

**Input:**
```
3
100 200 300
```

**Output:**
```
300 200 100 
```

### Example 3: Single Element

**Input:**
```
1
42
```

**Output:**
```
42 
```

### Example 4: Seven Elements

**Input:**
```
7
1 2 3 4 5 6 7
```

**Output:**
```
7 6 5 4 3 2 1 
```

## Understanding Reverse Iteration

### Forward vs Backward Loop

#### Forward Loop (Normal Order)
```c
for (int i = 0; i < n; i++) {
    printf("%d ", array[i]);
}
// Prints: array[0], array[1], array[2], ..., array[n-1]
```

#### Backward Loop (Reverse Order)
```c
for (int i = n - 1; i >= 0; i--) {
    printf("%d ", array[i]);
}
// Prints: array[n-1], array[n-2], ..., array[1], array[0]
```

### Loop Component Comparison

| Component       | Forward Loop | Backward Loop | Purpose                    |
| --------------- | ------------ | ------------- | -------------------------- |
| Initialization  | `i = 0`      | `i = n - 1`   | Starting position          |
| Condition       | `i < n`      | `i >= 0`      | When to stop               |
| Update          | `i++`        | `i--`         | How to move to next index  |
| First accessed  | `array[0]`   | `array[n-1]`  | First element printed      |
| Last accessed   | `array[n-1]` | `array[0]`    | Last element printed       |

## Why Use `i >= 0` Instead of `i > 0`?

### Wrong Approach (Misses First Element)

```c
// ❌ Wrong - stops at i=1, never prints array[0]!
for (int i = n - 1; i > 0; i--) {
    printf("%d ", array[i]);
}
// Prints n-1 elements instead of n elements
```

**What happens with n=5:**
```
i=4: Print array[4] ✓
i=3: Print array[3] ✓
i=2: Print array[2] ✓
i=1: Print array[1] ✓
i=0: Condition (0 > 0) is FALSE → Loop stops!
     array[0] never printed ✗
```

### Correct Approach (Includes First Element)

```c
// ✅ Correct - continues until i=0, prints all elements
for (int i = n - 1; i >= 0; i--) {
    printf("%d ", array[i]);
}
// Prints all n elements
```

**What happens with n=5:**
```
i=4: Condition (4 >= 0) TRUE → Print array[4] ✓
i=3: Condition (3 >= 0) TRUE → Print array[3] ✓
i=2: Condition (2 >= 0) TRUE → Print array[2] ✓
i=1: Condition (1 >= 0) TRUE → Print array[1] ✓
i=0: Condition (0 >= 0) TRUE → Print array[0] ✓
i=-1: Condition (-1 >= 0) FALSE → Loop stops
```

## Different Ways to Reverse Array Output

### Method 1: Reverse Loop (Used in Program)

```c
// Print in reverse without modifying array
for (int i = n - 1; i >= 0; i--) {
    printf("%d ", array[i]);
}
```

**Pros:** Simple, doesn't modify original array
**Cons:** Doesn't actually reverse the array in memory

### Method 2: Actually Reversing the Array

```c
// Swap elements to reverse array in-place
for (int i = 0; i < n / 2; i++) {
    int temp = array[i];
    array[i] = array[n - 1 - i];
    array[n - 1 - i] = temp;
}

// Then print normally
for (int i = 0; i < n; i++) {
    printf("%d ", array[i]);
}
```

**Pros:** Array is actually reversed, can use later
**Cons:** More complex, modifies original data

### Method 3: Using Two Index Variables

```c
int start = 0;
int end = n - 1;

while (end >= start) {
    printf("%d ", array[end]);
    end--;
}
```

**Pros:** Clear intention with variable names
**Cons:** More variables to track

## Practical Applications of Reverse Traversal

### Application 1: Displaying Stack Contents

```c
// Stack follows LIFO (Last In, First Out)
int stack[5] = {10, 20, 30, 40, 50};
int top = 4;  // Last filled position

printf("Popping from stack:\n");
for (int i = top; i >= 0; i--) {
    printf("Popped: %d\n", stack[i]);
}
```

**Output:**
```
Popping from stack:
Popped: 50
Popped: 40
Popped: 30
Popped: 20
Popped: 10
```

### Application 2: Palindrome Checking

```c
int arr[5] = {1, 2, 3, 2, 1};
int n = 5;
int isPalindrome = 1;  // Assume true

for (int i = 0; i < n / 2; i++) {
    if (arr[i] != arr[n - 1 - i]) {
        isPalindrome = 0;
        break;
    }
}

if (isPalindrome) {
    printf("Array is a palindrome\n");
} else {
    printf("Array is not a palindrome\n");
}
```

### Application 3: Processing Events in Reverse Chronological Order

```c
int timestamps[5] = {100, 200, 300, 400, 500};
int n = 5;

printf("Events from newest to oldest:\n");
for (int i = n - 1; i >= 0; i--) {
    printf("Event at time %d\n", timestamps[i]);
}
```

**Output:**
```
Events from newest to oldest:
Event at time 500
Event at time 400
Event at time 300
Event at time 200
Event at time 100
```

### Application 4: Countdown Timer

```c
int countdown[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
int n = 10;

printf("Countdown:\n");
for (int i = 0; i < n; i++) {
    printf("%d... ", countdown[i]);
}
printf("Liftoff!\n");
```

### Application 5: Undo History

```c
char actions[5][20] = {"Open file", "Edit text", "Save", "Close", "Exit"};
int actionCount = 5;

printf("Undo history (most recent first):\n");
for (int i = actionCount - 1; i >= 0; i--) {
    printf("Undo: %s\n", actions[i]);
}
```

## Variable Length Arrays (VLA)

### What is a VLA?

A Variable Length Array is an array whose size is determined at runtime, not compile time.

```c
int n;
scanf("%d", &n);
int array[n];  // VLA - size determined by user input
```

### Regular Array vs VLA

#### Regular Array (Compile-time Size)
```c
int array[10];  // Size must be known at compile time
// Always has 10 elements, cannot change
```

#### Variable Length Array (Runtime Size)
```c
int n;
scanf("%d", &n);
int array[n];   // Size determined when program runs
// Size depends on user input
```

### VLA Limitations

1. **Cannot be global**: VLAs must be declared inside functions
2. **C99 feature**: Requires C99 standard or later
3. **Stack allocation**: Limited by stack size (typically a few MB)
4. **No initialization**: Cannot initialize VLA at declaration

```c
// ❌ Wrong - cannot initialize VLA
int n = 5;
int array[n] = {1, 2, 3, 4, 5};  // Compilation error!

// ✅ Correct - initialize after declaration
int n = 5;
int array[n];
array[0] = 1;
array[1] = 2;
// ... or use a loop
```

## How to Compile and Run

### Compilation

```bash
gcc reverse-array.c -o reverse-array -std=c99
```

**Note:** `-std=c99` ensures VLA support if your compiler defaults to an older standard.

### Execution

```bash
./reverse-array
```

### Interactive Session

```
$ ./reverse-array
5                    ← User enters size
10 20 30 40 50      ← User enters elements
50 40 30 20 10      ← Program output
```

### Using Input File

**Create `input.txt`:**
```
5
10 20 30 40 50
```

**Run:**
```bash
./reverse-array < input.txt
```

**Output:**
```
50 40 30 20 10 
```

## Common Beginner Mistakes

### 1. Wrong Loop Condition

```c
// ❌ Wrong - stops too early, misses array[0]
for (int i = n - 1; i > 0; i--) {
    printf("%d ", array[i]);
}

// ✅ Correct - includes array[0]
for (int i = n - 1; i >= 0; i--) {
    printf("%d ", array[i]);
}
```

### 2. Starting from Wrong Index

```c
// ❌ Wrong - starts from beyond array bounds
for (int i = n; i >= 0; i--) {
    printf("%d ", array[i]);  // array[n] doesn't exist!
}

// ✅ Correct - starts from last valid index
for (int i = n - 1; i >= 0; i--) {
    printf("%d ", array[i]);
}
```

### 3. Forgetting to Decrement

```c
// ❌ Wrong - infinite loop! i never decreases
for (int i = n - 1; i >= 0; /* missing i-- */) {
    printf("%d ", array[i]);
}

// ✅ Correct - i decrements each iteration
for (int i = n - 1; i >= 0; i--) {
    printf("%d ", array[i]);
}
```

### 4. Using Wrong Increment Operator

```c
// ❌ Wrong - i increases instead of decreases!
for (int i = n - 1; i >= 0; i++) {
    printf("%d ", array[i]);  // Goes out of bounds!
}

// ✅ Correct - i decreases
for (int i = n - 1; i >= 0; i--) {
    printf("%d ", array[i]);
}
```

### 5. Off-by-One in VLA Declaration

```c
int n = 5;

// ❌ Wrong - creates array of size 6
int array[n + 1];

// ✅ Correct - creates array of size 5
int array[n];
```

## Detailed Loop Analysis

### Iteration Table for n=5

| Iteration | i value | Condition (i >= 0) | Action          | Output so far |
| --------- | ------- | ------------------ | --------------- | ------------- |
| Start     | 4       | TRUE               | Print array[4]  | 50            |
| 1         | 3       | TRUE               | Print array[3]  | 50 40         |
| 2         | 2       | TRUE               | Print array[2]  | 50 40 30      |
| 3         | 1       | TRUE               | Print array[1]  | 50 40 30 20   |
| 4         | 0       | TRUE               | Print array[0]  | 50 40 30 20 10|
| 5         | -1      | FALSE              | Stop loop       | (final output)|

## Memory Layout During Execution

**After reading input (n=5, elements: 10 20 30 40 50):**

```
Memory Layout:
Address:    1000  1004  1008  1012  1016
Index:         0     1     2     3     4
Value:        10    20    30    40    50
              ↑                        ↑
          First                      Last
          (printed last)         (printed first)
```

**Reverse printing accesses memory in this order:**
```
Step 1: Access 1016 (index 4) → Print 50
Step 2: Access 1012 (index 3) → Print 40
Step 3: Access 1008 (index 2) → Print 30
Step 4: Access 1004 (index 1) → Print 20
Step 5: Access 1000 (index 0) → Print 10
```

## Best Practices

1. **Always use `i >= 0` for reverse loops**

   ```c
   for (int i = n - 1; i >= 0; i--) { }  // ✓
   ```

2. **Validate input size**

   ```c
   int n;
   scanf("%d", &n);
   
   if (n <= 0 || n > 1000) {
       printf("Invalid size!\n");
       return 1;
   }
   
   int array[n];
   ```

3. **Use meaningful variable names**

   ```c
   int size;
   scanf("%d", &size);
   int numbers[size];
   
   for (int index = size - 1; index >= 0; index--) {
       printf("%d ", numbers[index]);
   }
   ```

4. **Add user prompts for clarity**

   ```c
   printf("Enter array size: ");
   scanf("%d", &n);
   
   printf("Enter %d elements: ", n);
   for (int i = 0; i < n; i++) {
       scanf("%d", &array[i]);
   }
   
   printf("Reversed array: ");
   for (int i = n - 1; i >= 0; i--) {
       printf("%d ", array[i]);
   }
   printf("\n");
   ```

5. **Consider maximum array size limits**

   ```c
   #define MAX_SIZE 10000
   
   int n;
   scanf("%d", &n);
   
   if (n > MAX_SIZE) {
       printf("Array too large!\n");
       return 1;
   }
   ```

## Key Takeaways

- Reverse iteration uses `i--` instead of `i++`
- Start from `n - 1` (last index), not `n`
- Use `i >= 0` condition to include index 0
- Reverse printing doesn't modify the array
- VLAs allow dynamic array sizing based on input
- Understanding backward loops is essential for many algorithms
- Same loop structure works for any array size

## Next Steps

After mastering reverse array traversal, you'll learn:

1. **In-place Array Reversal** - Actually reversing array elements in memory
2. **Array Sorting** - Bubble sort, selection sort, insertion sort
3. **Array Searching** - Linear search, binary search
4. **Two-dimensional Arrays** - Working with matrices
5. **Array Manipulation** - Rotating, shifting, and rearranging elements

## Troubleshooting

**Problem:** Output missing first element

- **Solution:** Change condition from `i > 0` to `i >= 0`

**Problem:** Program crashes or shows garbage values

- **Solution:** Ensure you're starting from `n - 1`, not `n`

**Problem:** Infinite loop

- **Solution:** Verify you're using `i--` not `i++` in the loop

**Problem:** VLA not working

- **Solution:** Compile with `-std=c99` flag or use a fixed-size array

**Problem:** Wrong number of elements printed

- **Solution:** Check that input loop and output loop both run `n` times

Understanding reverse iteration is a fundamental skill that applies to many programming problems, from basic data display to complex algorithm implementations!

