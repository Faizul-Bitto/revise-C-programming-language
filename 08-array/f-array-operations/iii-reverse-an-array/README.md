# In-Place Array Reversal in C

## Overview

This program demonstrates how to reverse an array **in-place** using a two-pointer technique. Unlike simply printing elements in reverse order, this program actually modifies the array in memory, swapping elements from both ends moving toward the center. This is a fundamental algorithm used in many programming problems and interviews.

## What You'll Learn

- How to reverse an array by swapping elements
- Two-pointer technique for array manipulation
- In-place algorithm design (no extra memory needed)
- Understanding array element swapping
- Working with indices from both ends
- Efficient array reversal algorithm

## Complete Code

```c
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int array[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        int tmp;

        tmp = array[i];
        array[i] = array[j];
        array[j] = tmp;

        i++;
        j--;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}
```

## Code Breakdown

### Step 1: Reading Array Size and Elements

```c
int n;
scanf("%d", &n);

int array[n];

for (int i = 0; i < n; i++)
{
    scanf("%d", &array[i]);
}
```

**What happens:**

- Reads the number of elements `n`
- Creates a Variable Length Array of size `n`
- Fills the array with user input

**Example with n=5:**

```
Input: 5
       1 2 3 4 5

Array after input:
Index:  0  1  2  3  4
Value:  1  2  3  4  5
```

### Step 2: Setting Up Two Pointers

```c
int i = 0;      // Left pointer (starts at beginning)
int j = n - 1;  // Right pointer (starts at end)
```

**Pointer positions:**

- `i` points to the first element (index 0)
- `j` points to the last element (index n-1)

**Visual representation:**

```
Array: [1] [2] [3] [4] [5]
Index:  0   1   2   3   4
        ↑               ↑
        i               j
```

### Step 3: Swapping Elements

```c
while (i < j)
{
    int tmp;

    tmp = array[i];        // Store left element
    array[i] = array[j];   // Move right element to left
    array[j] = tmp;        // Move left element to right

    i++;                   // Move left pointer right
    j--;                   // Move right pointer left
}
```

**How the swapping works:**

#### Iteration 1: Swap first and last elements

```
Before swap:
Array: [1] [2] [3] [4] [5]
Index:  0   1   2   3   4
        ↑               ↑
        i               j

After swap:
Array: [5] [2] [3] [4] [1]
Index:  0   1   2   3   4
        ↑               ↑
        i               j

Pointers move:
i = 1, j = 3
```

#### Iteration 2: Swap second and second-to-last elements

```
Before swap:
Array: [5] [2] [3] [4] [1]
Index:  0   1   2   3   4
           ↑       ↑
           i       j

After swap:
Array: [5] [4] [3] [2] [1]
Index:  0   1   2   3   4
           ↑       ↑
           i       j

Pointers move:
i = 2, j = 2
```

#### Iteration 3: Check condition

```
i = 2, j = 2
Condition: i < j → 2 < 2 → FALSE
Loop stops (middle element stays in place)
```

### Step 4: Displaying Reversed Array

```c
for (int i = 0; i < n; i++)
{
    printf("%d ", array[i]);
}
```

**Output:** `5 4 3 2 1`

## Visual Step-by-Step Example

### Complete Process with Array [1, 2, 3, 4, 5]

**Initial state:**

```
Array: [1] [2] [3] [4] [5]
Index:  0   1   2   3   4
        ↑               ↑
        i               j
```

**Iteration 1:**

```
Swap array[0] and array[4]:
- tmp = array[0] = 1
- array[0] = array[4] = 5
- array[4] = tmp = 1

Result: [5] [2] [3] [4] [1]
        ↑       ↑
        i       j
i = 1, j = 3
```

**Iteration 2:**

```
Swap array[1] and array[3]:
- tmp = array[1] = 2
- array[1] = array[3] = 4
- array[3] = tmp = 2

Result: [5] [4] [3] [2] [1]
            ↑
            i,j
i = 2, j = 2
```

**Final check:**

```
i = 2, j = 2
Condition: i < j → 2 < 2 → FALSE
Loop terminates
```

**Final result:** `[5, 4, 3, 2, 1]`

## Expected Output

### Example 1: Five Elements

**Input:**

```
5
1 2 3 4 5
```

**Output:**

```
5 4 3 2 1
```

### Example 2: Even Number of Elements

**Input:**

```
4
10 20 30 40
```

**Output:**

```
40 30 20 10
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

### Example 4: Two Elements

**Input:**

```
2
100 200
```

**Output:**

```
200 100
```

## Understanding the Two-Pointer Technique

### What is Two-Pointer Technique?

The **two-pointer technique** uses two variables to track positions in an array, typically starting from opposite ends and moving toward each other.

### Key Components

1. **Left Pointer (`i`)**: Starts at index 0, moves right (`i++`)
2. **Right Pointer (`j`)**: Starts at index n-1, moves left (`j--`)
3. **Condition**: Continue while `i < j`
4. **Action**: Swap elements at positions `i` and `j`

### Why `i < j` and not `i <= j`?

```c
// For even-length arrays, pointers meet and cross
// For odd-length arrays, pointers meet at middle

Array length 4: [1] [2] [3] [4]
                 ↑       ↑
                 i       j
                 (i=1, j=2) → i < j → continue

                 ↑   ↑
                 i   j
                 (i=2, j=1) → i > j → stop

Array length 5: [1] [2] [3] [4] [5]
                 ↑       ↑
                 i       j
                 (i=2, j=2) → i == j → stop (middle element unchanged)
```

**Using `i <= j` would:**

- Swap middle element with itself (unnecessary)
- Continue past the middle (redundant operations)

## Alternative Approaches

### Method 1: Using For Loop

```c
for (int i = 0; i < n / 2; i++) {
    int j = n - 1 - i;

    int tmp = array[i];
    array[i] = array[j];
    array[j] = tmp;
}
```

**Pros:** More compact, uses single loop variable
**Cons:** Less clear about the two-pointer concept

### Method 2: Using Function

```c
void reverseArray(int arr[], int size) {
    int i = 0;
    int j = size - 1;

    while (i < j) {
        int tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
        i++;
        j--;
    }
}

int main() {
    // ... read array ...
    reverseArray(array, n);
    // ... print array ...
}
```

**Pros:** Reusable, modular design
**Cons:** More code for simple operation

### Method 3: Using XOR Swap (Advanced)

```c
while (i < j) {
    array[i] = array[i] ^ array[j];
    array[j] = array[i] ^ array[j];
    array[i] = array[i] ^ array[j];
    i++;
    j--;
}
```

**Pros:** No temporary variable needed
**Cons:** Less readable, can be confusing

## Understanding Element Swapping

### The Three-Step Swap Process

```c
int tmp = array[i];        // Step 1: Store first element
array[i] = array[j];       // Step 2: Overwrite first with second
array[j] = tmp;            // Step 3: Put stored value in second position
```

### Why We Need a Temporary Variable

**Without temporary variable (WRONG):**

```c
array[i] = array[j];       // array[i] now has array[j]'s value
array[j] = array[i];       // array[j] gets array[j]'s value (no change!)
```

**Result:** No swap occurs!

**With temporary variable (CORRECT):**

```c
int tmp = array[i];        // Save original array[i]
array[i] = array[j];       // array[i] gets array[j]'s value
array[j] = tmp;            // array[j] gets original array[i]'s value
```

**Result:** Elements are successfully swapped!

### Visual Swapping Example

**Before swap:**

```
array[i] = 10, array[j] = 50
```

**Step 1: `tmp = array[i]`**

```
tmp = 10
array[i] = 10, array[j] = 50
```

**Step 2: `array[i] = array[j]`**

```
tmp = 10
array[i] = 50, array[j] = 50
```

**Step 3: `array[j] = tmp`**

```
tmp = 10
array[i] = 50, array[j] = 10
```

**After swap:**

```
array[i] = 50, array[j] = 10
```

## Practical Applications

### Application 1: Palindrome Checking

```c
int isPalindrome(int arr[], int n) {
    int i = 0, j = n - 1;

    while (i < j) {
        if (arr[i] != arr[j]) {
            return 0;  // Not a palindrome
        }
        i++;
        j--;
    }
    return 1;  // Is a palindrome
}
```

### Application 2: Rotating Array

```c
void rotateArray(int arr[], int n, int k) {
    // Reverse entire array
    reverseArray(arr, n);

    // Reverse first k elements
    reverseArray(arr, k);

    // Reverse remaining elements
    reverseArray(arr + k, n - k);
}
```

### Application 3: Finding Two Sum

```c
int findTwoSum(int arr[], int n, int target) {
    int i = 0, j = n - 1;

    while (i < j) {
        int sum = arr[i] + arr[j];
        if (sum == target) {
            printf("Found: %d + %d = %d\n", arr[i], arr[j], target);
            return 1;
        } else if (sum < target) {
            i++;
        } else {
            j--;
        }
    }
    return 0;  // Not found
}
```

### Application 4: Removing Duplicates from Sorted Array

```c
int removeDuplicates(int arr[], int n) {
    if (n <= 1) return n;

    int i = 0, j = 1;

    while (j < n) {
        if (arr[i] != arr[j]) {
            i++;
            arr[i] = arr[j];
        }
        j++;
    }

    return i + 1;  // New length
}
```

## How to Compile and Run

### Compilation

```bash
gcc reverse-an-array.c -o reverse-array -std=c99
```

### Execution

```bash
./reverse-array
```

### Interactive Session

```
$ ./reverse-array
5                    ← User enters size
1 2 3 4 5          ← User enters elements
5 4 3 2 1          ← Program outputs reversed array
```

### Using Input File

**Create `input.txt`:**

```
5
1 2 3 4 5
```

**Run:**

```bash
./reverse-array < input.txt
```

**Output:**

```
5 4 3 2 1
```

## Common Beginner Mistakes

### 1. Wrong Loop Condition

```c
// ❌ Wrong - continues too long
while (i <= j) {
    // This swaps middle element with itself
    // and continues past the middle
}

// ✅ Correct - stops at middle
while (i < j) {
    // Stops when pointers meet or cross
}
```

### 2. Forgetting to Move Pointers

```c
while (i < j) {
    int tmp = array[i];
    array[i] = array[j];
    array[j] = tmp;
    // ❌ Missing: i++; j--;
    // This creates infinite loop!
}
```

### 3. Wrong Pointer Initialization

```c
// ❌ Wrong - both start at 0
int i = 0, j = 0;

// ✅ Correct - start from opposite ends
int i = 0, j = n - 1;
```

### 4. Swapping Without Temporary Variable

```c
// ❌ Wrong - doesn't actually swap
array[i] = array[j];
array[j] = array[i];

// ✅ Correct - use temporary variable
int tmp = array[i];
array[i] = array[j];
array[j] = tmp;
```

### 5. Using Same Variable Name in Loop

```c
for (int i = 0; i < n; i++) {  // ❌ Conflicts with outer i
    printf("%d ", array[i]);
}

// ✅ Correct - use different variable name
for (int k = 0; k < n; k++) {
    printf("%d ", array[k]);
}
```

## Algorithm Analysis

### Time Complexity

**O(n/2) = O(n)** - Linear time

- We perform n/2 swaps
- Each swap takes constant time
- Overall: O(n)

### Space Complexity

**O(1)** - Constant space

- Only uses a few variables (i, j, tmp)
- No additional arrays or data structures
- In-place algorithm

### Comparison with Other Methods

| Method             | Time | Space | Pros                | Cons                |
| ------------------ | ---- | ----- | ------------------- | ------------------- |
| Two-pointer (this) | O(n) | O(1)  | In-place, efficient | Modifies original   |
| New array          | O(n) | O(n)  | Preserves original  | Uses extra memory   |
| Recursive          | O(n) | O(n)  | Elegant code        | Stack overflow risk |
| Built-in reverse   | O(n) | O(1)  | One line of code    | Language dependent  |

## Memory Visualization

**Before reversal:**

```
Memory: [1] [2] [3] [4] [5]
Index:   0   1   2   3   4
         ↑               ↑
         i               j
```

**After first swap:**

```
Memory: [5] [2] [3] [4] [1]
Index:   0   1   2   3   4
            ↑       ↑
            i       j
```

**After second swap:**

```
Memory: [5] [4] [3] [2] [1]
Index:   0   1   2   3   4
               ↑
               i,j
```

## Best Practices

1. **Use meaningful variable names**

   ```c
   int left = 0, right = n - 1;  // Clear intent
   ```

2. **Add bounds checking**

   ```c
   if (n <= 0) {
       printf("Invalid array size\n");
       return 1;
   }
   ```

3. **Consider edge cases**

   ```c
   if (n <= 1) {
       // Array of 0 or 1 element is already "reversed"
       return;
   }
   ```

4. **Use const when appropriate**

   ```c
   void reverseArray(int arr[], const int size) {
       // size cannot be modified
   }
   ```

5. **Add comments for clarity**
   ```c
   while (i < j) {
       // Swap elements at positions i and j
       int tmp = array[i];
       array[i] = array[j];
       array[j] = tmp;

       // Move pointers toward center
       i++;
       j--;
   }
   ```

## Key Takeaways

- **Two-pointer technique** is efficient for array manipulation
- **In-place algorithms** don't require extra memory
- **Element swapping** requires a temporary variable
- **Loop condition** `i < j` stops at the middle
- **Pointers move** toward each other from opposite ends
- **Time complexity** is O(n), space complexity is O(1)
- **Works for any array size** (including 0 and 1 elements)
