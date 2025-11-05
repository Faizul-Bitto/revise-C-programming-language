# Loops in C

## Overview

This section covers loop constructs in C programming. Loops allow you to execute a block of code repeatedly, which is essential for processing collections of data, repeating operations, and creating iterative algorithms. Mastering loops is fundamental to efficient programming.

## Topics Covered

- **for Loop**: Count-controlled iteration with initialization, condition, and increment
- **break in for Loop**: Exiting a loop prematurely when a condition is met
- **continue in for Loop**: Skipping the rest of the current iteration and continuing to the next
- **while Loop**: Condition-controlled iteration that repeats while a condition is true
- **do-while Loop**: Condition-controlled iteration that executes at least once before checking the condition

## What You'll Learn

- Repeating code execution efficiently
- Controlling loop execution with break and continue
- Understanding the differences between for, while, and do-while loops
- Choosing the right loop type for different scenarios
- Avoiding infinite loops
- Loop initialization and termination conditions

## Key Concepts

### for Loop

```c
for (initialization; condition; increment) {
    // Code to repeat
}
```

### while Loop

```c
while (condition) {
    // Code to repeat
}
```

### do-while Loop

```c
do {
    // Code to repeat
} while (condition);
```

### break Statement

```c
for (int i = 0; i < 10; i++) {
    if (condition) {
        break;  // Exit the loop immediately
    }
}
```

### continue Statement

```c
for (int i = 0; i < 10; i++) {
    if (condition) {
        continue;  // Skip to next iteration
    }
    // This code is skipped when continue executes
}
```

## Modules in This Section

1. **for Loop**: Count-controlled iteration
2. **break in for Loop**: Premature loop termination
3. **continue in for Loop**: Skipping iterations
4. **while Loop**: Condition-controlled iteration
5. **do-while Loop**: Condition-controlled iteration with guaranteed first execution
