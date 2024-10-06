# Static libraries
 A static library is a collection of precompiled object files (.o) bundled together into a single file (typically .a). It is linked into an executable at compile time, making the library's code part of the executable.
 Static libraries enable code reuse and modularity, allowing you to link precompiled code into your programs efficiently.

## How to creat a static library:
1. write your code (creat a source file .c and header file .h)
2. compile the source file.
3. create a library and an index.

## How to use a static library :
1. include the header file in your source file.
2. compile and link. 

## Command to use:
* **`ar`**:
  - `ar rcs`: Creates a library.
  - `ar t`: Lists the contents of the library.
  
* **`ranlib`**: Generates an index.

* **`nm`**: Lists symbols.
  - `nm -g`: Shows only global symbols.

## Files description:

| File                    | Description                                                               |
|-------------------------|---------------------------------------------------------------------------|
| `create_static_lib.sh`  | Creates a static library called `liball.a` from all the `.c` files in the current directory. |
| `libmy.a`               | A static library containing all the functions.                           |
| `main.h`                | The header file.                                                         |
