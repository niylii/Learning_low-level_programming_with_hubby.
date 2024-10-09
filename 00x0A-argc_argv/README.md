# Arguments to `main`

In C, passing arguments to your program via the command line when you run it is common. The `main` function can accept two **parameters**:

* **`int argc`**: The number of arguments (including the program name).
* **`char *argv[]`**: An array of argument strings.

## Prototypes of `main`

1. **No Arguments** (standard prototype):
 ``` int main(void)```
- Used when no command-line arguments are needed.

2. **With Arguments** (common prototype):
``` int main(int argc, char *argv[])```
- Used when processing command-line arguments, allowing you to access the arguments passed when the program is executed.

## Unused Variables

To suppress the warnings that the compiler gives regarding unused variables or parameters in a function, you can use either of these two methods:

* **`__attribute__((unused))`**: used in a declaration of a function.
   + `void _function(int unused_param attribute((unused)))`
* **`(void)`**: `(void)unused_param;`; 

## Files and Their Descriptions

| File             | Description                                           |
|------------------|-------------------------------------------------------|
| `0-whatsmyname.c`| Program that prints its name                          |
| `1-args.c`      | Program that prints the number of arguments passed into it. |
| `2-args.c`      | Program that prints all arguments it receives.       |
| `3-mul.c`       | Program that multiplies two numbers.                  |
| `4-add.c`       | Program that adds positive numbers.                   |
| `100-change.c`  | Program that prints the minimum number of coins to make change for an amount of money. |
