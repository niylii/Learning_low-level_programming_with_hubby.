# Even More Pointers, Arrays, and Strings

This repository builds upon the concepts introduced in the previous one (00x05 & 00x06), focusing more on double pointers and multidimensional arrays to enhance understanding and application of these key programming principles.

## Pointer to a Pointer

A pointer to a pointer is a variable that stores the address of another pointer, allowing for multiple levels of indirection.

### Use Cases
- Dynamic arrays of pointers
- Modifying pointers within functions

## Multidimensional Arrays

A multidimensional array is an array of arrays, commonly used to represent matrices.

### Use Cases
- Mathematical matrices
- Image pixel data

## Common C Standard Library Functions for Strings
- **`strlen`**: Returns the length of a string.
- **`strcpy`**: Copies one string to another.
- **`strcat`**: Concatenates two strings.
- **`strcmp`**: Compares two strings.

## File Descriptions

| File                        | Description                                                               |
|-----------------------------|---------------------------------------------------------------------------|
| `0-memset.c`               | Fills memory with a constant byte.                                       |
| `1-memcpy.c`               | Copies a memory area.                                                   |
| `2-strchr.c`               | Locates a character in a string.                                        |
| `3-strspn.c`               | Gets the length of a prefix substring.                                  |
| `4-strpbrk.c`              | Searches a string for any of a set of bytes.                           |
| `5-strstr.c`               | Locates a substring.                                                    |
| `7-print_chessboard.c`     | Prints the chessboard.                                                  |
| `8-print_diagsums.c`       | Prints the sum of the two diagonals of a square matrix of integers.    |
| `100-set_string.c`         | Sets the value of a pointer to a char.                                  |
| `main.h`                   | The header file.                                                        |
