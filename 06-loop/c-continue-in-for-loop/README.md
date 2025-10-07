# Continue Statement in For Loops

## Overview

The `continue` statement is a loop control statement that skips the remaining code in the current iteration and jumps directly to the next iteration of the loop. Unlike `break` which exits the entire loop, `continue` only skips the current iteration and allows the loop to continue with the next value. This is useful when you want to skip certain values or conditions but still process the remaining iterations.

## Basic Syntax

```c
for (initialization; condition; increment) {
    if (some_condition) {
        continue;  // Skip rest of current iteration, go to next
    }
    // This code will be skipped if continue executes
    // Other code
}
// Loop continues with next iteration after continue
```

## Code Example

```c
#include <stdio.h>

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            continue; // doesn't stop the loop, but just skip the rest execution for this step
        }

        printf("%d\n", i); // result : 1 2 3 4 6 7 8 9 10 -> 5 skipped
    }

    return 0;
}
```

## How Continue Works

### Step-by-Step Execution

```c
for (int i = 1; i <= 10; i++)
{
    if (i == 5)
    {
        continue; // doesn't stop the loop, but just skip the rest execution for this step
    }
    printf("%d\n", i);
}
```

**Execution Flow:**

1. **i = 1**: Check `i == 5`? No → Print "1" → i++ (i becomes 2)
2. **i = 2**: Check `i == 5`? No → Print "2" → i++ (i becomes 3)
3. **i = 3**: Check `i == 5`? No → Print "3" → i++ (i becomes 4)
4. **i = 4**: Check `i == 5`? No → Print "4" → i++ (i becomes 5)
5. **i = 5**: Check `i == 5`? **YES** → Execute `continue` → **SKIP printf** → i++ (i becomes 6)
6. **i = 6**: Check `i == 5`? No → Print "6" → i++ (i becomes 7)
7. **i = 7**: Check `i == 5`? No → Print "7" → i++ (i becomes 8)
8. **i = 8**: Check `i == 5`? No → Print "8" → i++ (i becomes 9)
9. **i = 9**: Check `i == 5`? No → Print "9" → i++ (i becomes 10)
10. **i = 10**: Check `i == 5`? No → Print "10" → i++ (i becomes 11)
11. **i = 11**: Check `i <= 10`? No → **EXIT LOOP**

### Key Points

- The `printf("%d\n", i)` statement comes **after** the continue condition
- When `i == 5`, continue executes and **skips** the printf
- The loop **continues** with the next iteration (i becomes 6)
- All other iterations execute normally
- The loop completes all 10 iterations, but skips printing for iteration 5

## Program Output

When you run the program, you'll see:

```
1
2
3
4
6
7
8
9
10
```

**What happened:**

- Numbers 1, 2, 3, 4 are printed normally
- When i becomes 5, continue executes and skips the printf
- The number 5 is never printed because continue skips the printf statement
- Numbers 6, 7, 8, 9, 10 are printed normally
- The loop completed all 10 iterations but skipped processing for iteration 5

## Continue vs Break Comparison

### Continue (Skip Current Iteration)

```c
for (int i = 1; i <= 10; i++) {
    if (i == 5) {
        continue;  // Skip only this iteration
    }
    printf("%d\n", i);
}
// Output: 1, 2, 3, 4, 6, 7, 8, 9, 10 (5 is skipped)
```

### Break (Exit Entire Loop)

```c
for (int i = 1; i <= 10; i++) {
    if (i == 5) {
        break;  // Exit the entire loop
    }
    printf("%d\n", i);
}
// Output: 1, 2, 3, 4 (loop stops completely)
```

### Side-by-Side Comparison

| Aspect             | Continue                    | Break                      |
| ------------------ | --------------------------- | -------------------------- |
| **Action**         | Skip current iteration      | Exit entire loop           |
| **Loop Status**    | Continues running           | Stops completely           |
| **Next Iteration** | Proceeds to next            | No more iterations         |
| **Remaining Code** | Skipped for this iteration  | Never executed             |
| **Use Case**       | Filter/skip specific values | Stop when condition is met |

## Practical Examples

### Example 1: Skip Even Numbers (Print Only Odd)

```c
printf("Odd numbers from 1 to 10:\n");
for (int i = 1; i <= 10; i++) {
    if (i % 2 == 0) {
        continue;  // Skip even numbers
    }
    printf("%d\n", i);
}
```

**Output:**

```
Odd numbers from 1 to 10:
1
3
5
7
9
```

### Example 2: Skip Negative Numbers

```c
int numbers[] = {-2, 3, -1, 5, -4, 7, 8};
int size = 7;

printf("Positive numbers only:\n");
for (int i = 0; i < size; i++) {
    if (numbers[i] < 0) {
        continue;  // Skip negative numbers
    }
    printf("%d\n", numbers[i]);
}
```

**Output:**

```
Positive numbers only:
3
5
7
8
```

### Example 3: Skip Invalid Input

```c
printf("Enter 5 positive numbers (enter 0 to skip):\n");
int count = 0;
int validNumbers[5];

for (int i = 0; i < 5; i++) {
    int input;
    printf("Number %d: ", i + 1);
    scanf("%d", &input);

    if (input <= 0) {
        printf("Invalid! Skipping...\n");
        continue;  // Skip invalid input, don't increment count
    }

    validNumbers[count] = input;
    count++;
    printf("Valid number %d stored: %d\n", count, input);
}

printf("\nValid numbers entered: %d\n", count);
```

### Example 4: Process Only Specific Conditions

```c
printf("Processing numbers 1-20, skipping multiples of 3:\n");
for (int i = 1; i <= 20; i++) {
    if (i % 3 == 0) {
        continue;  // Skip multiples of 3
    }

    printf("Processing: %d\n", i);
    // Additional processing code would go here
}
```

**Output:**

```
Processing numbers 1-20, skipping multiples of 3:
Processing: 1
Processing: 2
Processing: 4
Processing: 5
Processing: 7
Processing: 8
Processing: 10
Processing: 11
Processing: 13
Processing: 14
Processing: 16
Processing: 17
Processing: 19
Processing: 20
```

### Example 5: Menu System with Invalid Options

```c
for (int attempt = 1; attempt <= 5; attempt++) {
    int choice;
    printf("Menu:\n1. Option A\n2. Option B\n3. Exit\nChoice: ");
    scanf("%d", &choice);

    if (choice < 1 || choice > 3) {
        printf("Invalid choice! Try again.\n");
        continue;  // Skip processing, ask again
    }

    if (choice == 3) {
        printf("Goodbye!\n");
        break;  // Exit menu
    }

    printf("You selected option %d\n", choice);
    // Process the valid choice
}
```

## Program Flow Visualization

```
Start Program
     ↓
Initialize Loop (i = 1)
     ↓
Check: i <= 10? ←────────────────┐
     ↓ YES                       │
Check: i == 5?                  │
     ↓ NO                        │
Print current i                 │
     ↓                          │
Increment i (i++)               │
     ↓───────────────────────────┘
     ↓ YES (when i == 5)
Execute continue
     ↓
Skip printf (go directly to increment)
     ↓
Increment i (i++)
     ↓───────────────────────────┐
     ↓                          │
Continue with next iteration     │
     ↓───────────────────────────┘
     ↓ NO (when i > 10)
End Program
```

## How to Compile and Run

1. **Compile the program:**

   ```bash
   gcc continue-in-for-loop.c -o continue-in-for-loop
   ```

2. **Run the executable:**

   ```bash
   ./continue-in-for-loop
   ```

3. **See the output:**
   ```
   1
   2
   3
   4
   6
   7
   8
   9
   10
   ```

## When to Use Continue

**Perfect for:**

- Filtering data (skip unwanted values)
- Input validation (skip invalid entries)
- Conditional processing (process only certain items)
- Error handling (skip problematic data)
- Data cleaning (ignore corrupted entries)
- Menu systems (handle invalid choices)

**Common Use Cases:**

- Skip even/odd numbers
- Skip negative values
- Skip empty or null entries
- Skip out-of-range values
- Skip duplicate entries
- Skip failed validations

## Important Notes

### Continue Only Affects Current Iteration

```c
for (int i = 1; i <= 5; i++) {
    printf("Start of iteration %d\n", i);

    if (i == 3) {
        printf("Skipping rest of iteration %d\n", i);
        continue;
    }

    printf("End of iteration %d\n", i);
}
```

**Output:**

```
Start of iteration 1
End of iteration 1
Start of iteration 2
End of iteration 2
Start of iteration 3
Skipping rest of iteration 3
Start of iteration 4
End of iteration 4
Start of iteration 5
End of iteration 5
```

### Continue with Nested Loops

```c
for (int i = 1; i <= 3; i++) {
    printf("Outer loop: %d\n", i);

    for (int j = 1; j <= 3; j++) {
        if (j == 2) {
            continue;  // Only skips inner loop iteration
        }
        printf("  Inner loop: %d\n", j);
    }
}
```

**Output:**

```
Outer loop: 1
  Inner loop: 1
  Inner loop: 3
Outer loop: 2
  Inner loop: 1
  Inner loop: 3
Outer loop: 3
  Inner loop: 1
  Inner loop: 3
```

### Code After Continue is Unreachable

```c
for (int i = 1; i <= 10; i++) {
    if (i == 5) {
        continue;
        printf("This will never execute\n");  // Unreachable code
    }
    printf("%d\n", i);
}
```

## Best Practices

1. **Use meaningful condition checks**

   ```c
   // Good: Clear filtering condition
   if (score < 0 || score > 100) {
       continue;  // Skip invalid scores
   }
   ```

2. **Place continue early in the loop body**

   ```c
   // Good: Early filtering
   for (int i = 0; i < size; i++) {
       if (data[i] == NULL) {
           continue;  // Skip null entries early
       }

       // Process valid data
       processData(data[i]);
   }
   ```

3. **Comment continue statements when logic isn't obvious**

   ```c
   if (isWeekend(day)) {
       continue;  // Skip weekend processing
   }
   ```

4. **Consider alternatives for complex continue logic**
   ```c
   // Instead of multiple continues, use positive conditions
   for (int i = 0; i < size; i++) {
       if (isValid(data[i]) && isRelevant(data[i])) {
           processData(data[i]);
       }
   }
   ```

## Common Mistakes

### 1. Using Continue When Break is Needed

```c
// Wrong: using continue to stop loop
for (int i = 1; i <= 10; i++) {
    if (errorOccurred) {
        continue;  // This skips iteration, doesn't stop loop
    }
    processData(i);
}

// Right: using break to stop loop
for (int i = 1; i <= 10; i++) {
    if (errorOccurred) {
        break;  // This stops the entire loop
    }
    processData(i);
}
```

### 2. Forgetting Continue Only Affects One Loop Level

```c
// Continue only affects the immediate loop
for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
        if (condition) {
            continue;  // Only skips inner loop iteration
        }
    }
}
```

### 3. Placing Code After Continue

```c
// Wrong: code after continue never executes
if (condition) {
    continue;
    printf("This never runs");  // Unreachable
}
```

### 4. Infinite Loops with Misplaced Continue

```c
// Wrong: infinite loop if continue prevents increment
int i = 0;
for (;;) {  // Infinite loop structure
    if (i == 5) {
        continue;  // This skips the increment below!
    }
    printf("%d\n", i);
    i++;  // This gets skipped when i == 5
}

// Right: ensure increment always happens
for (int i = 0; i < 10; i++) {  // Increment in for statement
    if (i == 5) {
        continue;
    }
    printf("%d\n", i);
}
```

## Learning Points

1. **Selective Processing**: Continue allows you to selectively process loop iterations
2. **Flow Control**: Understanding how continue affects program execution flow
3. **Filtering Technique**: Essential for data filtering and validation
4. **Loop Efficiency**: Skip unnecessary processing for certain conditions
5. **Error Handling**: Gracefully handle problematic data without stopping the loop
6. **Code Clarity**: Makes filtering logic clear and readable

## Related Concepts

**Continue vs Break:**

- `continue`: Skip current iteration, continue loop
- `break`: Exit entire loop immediately

**Continue vs If-Else:**

- `continue`: Skip remaining code in iteration
- `if-else`: Execute alternative code path

**Continue vs Return:**

- `continue`: Skip to next iteration
- `return`: Exit entire function

## Performance Considerations

1. **Efficient Filtering**: Continue is more efficient than processing unwanted data
2. **Early Skipping**: Place continue conditions early to avoid unnecessary work
3. **Reduced Complexity**: Simplifies code by avoiding deep nesting