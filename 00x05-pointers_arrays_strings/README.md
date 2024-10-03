# Pointers, Arrays, and Strings in C Programming

## Pointers
**Pointers** are variables that store the memory address of another variable. They are commonly used in programming to manage memory dynamically and facilitate efficient data manipulation.

## Arrays
**Arrays** are collections of elements of the same type stored in contiguous memory locations, allowing multiple values to be stored in a single variable.

### Differences Between Pointers and Arrays
- **Memory Storage**: Pointers hold the address of a variable, while arrays hold a collection of elements.
- **Size**: A pointer's size is typically fixed, whereas an array's size depends on the number of elements.
- **Reassignment**: Pointers can be reassigned to point to different addresses, while the name of an array is a constant pointing to the first element.

## Strings
**Strings** are arrays of characters terminated by a null character (`\0`). They are handled using arrays of `char` in C.

## Scope of Variables
The **scope** of a variable defines where it is accessible:
- **Local Scope**: Variables declared within a function or block, accessible only within that scope.
- **Global Scope**: Variables declared outside any function, accessible from any function within the same file.
- **Block Scope**: Variables declared within a block (enclosed by `{}`), accessible only within that block.

| File                  | Description                                                                                                 |
|-----------------------|-------------------------------------------------------------------------------------------------------------|
| 0-reset_to_98.c      | Takes a pointer to an int as a parameter and updates the value it points to to 98.                        |
| 1-swap.c              | Swaps the values of two integers.                                                                          |
| 2-strlen.c            | Returns the length of a string.                                                                            |
| 3-puts.c              | Prints a string, followed by a new line, to stdout.                                                       |
| 4-print_rev.c         | Prints a string in reverse, followed by a new line.                                                       |
| 5-rev_string.c        | Reverses a string.                                                                                         |
| 6-puts2.c             | Prints every other character of a string, starting with the first character, followed by a new line.      |
| 7-puts_half.c         | Prints half of a string, followed by a new line.                                                          |
| 8-print_array.c       | Prints n elements of an array of integers, followed by a new line.                                        |
| 9-strcpy.c            | Copies the string pointed to by src, including the terminating null byte (`\0`), to the buffer pointed to by dest. |
| 100-atoi.c            | Converts a string to an integer.                                                                           |
| main.h                | The header file.                                                                                           |
