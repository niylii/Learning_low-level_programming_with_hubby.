# The Very Beginning

This repository serves as an introduction to the C programming language. You will learn about its fundamental concepts and get to know the key figures behind this language, such as Dennis Ritchie and Brian Kernighan. Additionally, you'll explore the compiling process, printing, and program management. This journey leads to a point where you discover the awesomeness of this language.

## Crucial Command

`gcc main.c`: This command compiles the code in `main.c` and creates an executable named `a.out` (by default), then reports any errors or warnings.

## Main

`main` is the entry point of the C program, the function where execution starts. This `main` has a return value that indicates whether the program completed successfully (`0`) or encountered an error (non-zero).

## Functions for Printing
* **`printf`**: Can print multiple types (integers, floats, strings, etc.).
* **`puts`**: Simpler; prints a string and adds a newline automatically.
* **`putchar`**: For printing a single character at a time.

| File              | Description                                                            |
|-------------------|------------------------------------------------------------------------|
| 0-preprocessor     | Runs a C file through the preprocessor and saves the result into another file. |
| 1-compiler         | Writes a script that compiles a C file but does not link.             |
| 100-intel          | Generates the assembly code (Intel syntax) of a C code and saves it.  |
| 101-quote.c       | C program that prints to the standard error.                           |
| 2-assembler        | Generates the assembly code of a C code and saves it in an output file. |
| 3-name             | Compiles a C file and creates an executable named `cisfun`.           |
| 4-puts.c          | C program that prints a string.                                        |
| 5-printf.c        | C program that prints formatted output.                                |
| 6-size.c          | C program that prints the size of various types.                       |
|
