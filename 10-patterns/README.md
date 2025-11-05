# Patterns in C

## Overview

This section covers pattern printing in C programming. Creating patterns using loops (especially nested loops) is an excellent way to practice loop control, understanding iteration, and developing problem-solving skills. Patterns help visualize how nested loops work and are commonly used in programming interviews and practice.

## Topics Covered

- **Star Pattern 1**: Basic rectangular star patterns
- **Star Pattern 2**: Modified star arrangements
- **Pyramid Pattern**: Triangle and pyramid shapes
- **Pattern 4**: Advanced pattern variations
- **Pattern 5**: Complex pattern designs

## What You'll Learn

- Using nested loops effectively
- Understanding the relationship between row and column indices
- Creating various geometric patterns with characters
- Controlling spacing and alignment in output
- Building complex patterns from simple logic
- Visualizing loop execution flow

## Key Concepts

### Basic Pattern Structure

```c
for (int i = 0; i < rows; i++) {        // Outer loop for rows
    for (int j = 0; j < cols; j++) {    // Inner loop for columns
        printf("*");                     // Print pattern element
    }
    printf("\n");                        // New line after each row
}
```

### Pattern Logic

- **Outer loop**: Controls the number of rows
- **Inner loop**: Controls what to print in each row
- **Conditions**: Determine when to print characters vs spaces
- **Index relationships**: Using row/column indices to create patterns

## Modules in This Section

1. **Star Pattern 1**: Basic star pattern
2. **Star Pattern 2**: Modified star pattern
3. **Pyramid Pattern**: Triangle and pyramid shapes
4. **Pattern 4**: Advanced pattern variation
5. **Pattern 5**: Complex pattern design
