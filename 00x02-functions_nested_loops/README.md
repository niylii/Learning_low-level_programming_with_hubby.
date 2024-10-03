# Exploring Nested Loops and Functions in C Programming

To write efficient C code, we probably need nested loops, which allow us to run one loop inside another to handle complex data like arrays. We also need functions, which are blocks of code that perform specific tasks, to achieve good code quality.

## Functions:
- The definition alone is not enough to use a function; you first need to declare the function, define it, and then call it.

#### Difference Between a Declaration and a Definition of a Function:
- **Declaration**: Informs the compiler of a function's name, return type, and parameters without the body.
- **Definition**: Provides the actual code and body of the function.

#### Prototype:
A prototype declares a function's name, return type, and parameters without the body, allowing the compiler to verify correct usage before its definition.

#### Scope of Variables:
The scope of a variable determines where it can be accessed within the code. There are two main types:
- **Local Scope**: Variables declared inside a function are only accessible within that function.
- **Global Scope**: Variables declared outside of all functions are accessible from any function in the file.

#### Header Files:
Header files contain declarations for functions, allowing for code organization and modularity. You include a header file in your source file using the `#include` directive.

## GCC Flags: `-Wall -Werror -pedantic -Wextra -std=gnu89`
These flags are options for the GCC compiler that help enforce good coding practices:
- `-Wall`: Enables all warnings.
- `-Werror`: Treats warnings as errors, preventing compilation if there are warnings.
- `-pedantic`: Enforces strict ISO C compliance.
- `-Wextra`: Enables additional warnings not covered by `-Wall`.
- `-std=gnu89`: Specifies the C standard to use, in this case, the GNU C89 standard.

| File Name              | Description                                                        |
|------------------------|--------------------------------------------------------------------|
| 0-putchar.c            | This program prints `_putchar` using `_putchar`.                  |
| 1-alphabet.c           | This function prints the alphabet in lowercase.                   |
| 2-print_alphabet_x10.c | This function prints the alphabet in lowercase 10 times.          |
| 3-islower.c            | This function checks for lowercase characters.                     |
| 4-isalpha.c            | This function checks for alphabetic characters.                   |
| 5-sign.c               | This function prints the sign of a given number.                  |
| 6-abs.c                | This function computes the absolute value of an integer.          |
| 7-print_last_digit.c   | This function prints the last digit of a number.                  |
| 8-24_hours.c           | This function prints every minute of Jack Bauer's day from 00:00 to 23:59. |
| 9-times_table.c        | This function prints the 9 times table, starting with 0.         |
| 10-add.c               | This function adds two integers and returns the result.           |
| 11-print_to_98.c       | This function prints all natural numbers from n to 98.            |
| 100-times_table.c      | This function prints the n times table, starting with 0.         |
| 101-natural.c          | This program computes the sum of all multiples of 3 and 5 below 1024 and prints the result. |
