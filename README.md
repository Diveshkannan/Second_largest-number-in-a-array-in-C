Second Largest Number Finder (CS50 Practice)

## Overview

This program finds the second largest number in an array without using any built-in sorting functions. The logic was developed as part of my problem-solving practice while revisiting core concepts from CS50 and strengthening my algorithmic thinking in C.

The program uses loops, conditional checks, array traversal, and a mathematical transformation approach to determine the second largest value efficiently.

---

## How It Works

1. The program initializes an integer array.

2. It first iterates through the array to:

   - Validate that all numbers are positive
   - Find the maximum value

3. A secondary array is created where:

   copy[j] = max - arr[j]

4. This transforms the problem into:

   - Finding the smallest non-zero difference from the maximum value

5. The index corresponding to that smallest non-zero difference is identified.

6. The original array value at that index is printed as the second largest number.

---

## Features

- Finds the second largest number without sorting
- Uses only loops and variables
- Includes input validation for positive integers
- Demonstrates alternative problem-solving logic
- Avoids modifying the original array

---

## Concepts Used

- Arrays
- Loops
- Conditional statements
- Mathematical transformation
- Index tracking
- Problem decomposition

---

## What I Learned

- Breaking problems into smaller logical steps
- Thinking beyond direct comparison methods
- Using transformation-based approaches for problem solving
- Tracking indices efficiently
- Improving logical structuring in C

---

## Limitations

- Currently designed only for positive integers
- Uses an additional array, which increases memory usage
- Does not handle duplicate maximum values in a fully generalized way

---

## Future Improvements

- Implement a more optimized one-pass solution
- Extend support for negative integers
- Improve handling for duplicate values
- Reduce memory usage by avoiding auxiliary arrays

---

## Conclusion

This project reflects my effort to strengthen logical thinking and problem-solving skills while revisiting foundational programming concepts. While the implementation is not the most optimized version possible, it represents an important step in developing structured algorithmic reasoning through practice and iteration.
