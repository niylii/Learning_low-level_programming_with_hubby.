# RECURSION

This repository takes recursion a bit more seriously. which is basically a programming technique where a function calls itself to solve a problem, breaking it down into smaller subproblems.

### Key Components
* **Base Case**: Condition to stop recursion.
* **Recursive Case**: Function calls itself to solve a subproblem.

To implement recursion, you need to define a function that includes these two components.

## When to Implement Recursion
* **Natural Recursive Problems**: Problems that can be naturally divided into smaller subproblems, such as:
  + Factorials
  + Fibonacci series
* **Simpler Code**: When recursion leads to simpler and more readable code compared to iterative solutions.

## When Not to Implement Recursion
* **Performance Concerns**: Recursion can lead to high memory usage due to maintaining call stacks. This is especially problematic for deep recursions that could cause stack overflow.
* **Iterative Alternatives**: When an iterative solution is more efficient and easier to understand. Examples include:
  + Simple loops for tasks like summing numbers or searching in arrays.
  + Problems where state needs to be maintained across iterations.
* **Limited Stack Size**: In environments with constrained resources.

## Files Description

| File                        | Description                                                 |
|-----------------------------|-------------------------------------------------------------|
| `0-puts_recursion.c`       | Prints a string.                                           |
| `1-print_rev_recursion.c`  | Prints a string in reverse.                               |
| `2-strlen_recursion.c`     | Returns the length of a string.                           |
| `3-factorial.c`            | Returns the factorial of a given number.                 |
| `4-pow_recursion.c`        | Returns the value of x raised to the power of y.         |
| `5-sqrt_recursion.c`       | Returns the natural square root of a number.             |
| `6-is_prime_number.c`      | Returns 1 if the input integer is a prime number; otherwise, returns 0. |
| `main.h`                   | The header file.                                          |
