# Dynamic Libraries in C
 Basically libraries are collections of precompiled code that can be reused across multiple programs. They provide a way to encapsulate common functionality, making it easier for developers to share and manage code.
And this document summarizes the process of creating and using dynamic libraries in C, alongside important considerations regarding library management and file formatting.

## Dynamic vs Static Libraries

- **Static Libraries** (`.a`): 
  - Contain all necessary code at compile time, resulting in larger executable files.
  
- **Dynamic Libraries** (`.so`): 
  - Shared between programs, leading to smaller executables. They allow for easier updates and conserve memory.

## Why Use Dynamic Libraries?

- **Memory Efficiency**: Multiple programs can use the same library in memory.
- **Performance**: Loading times can be reduced if the library is pre-loaded.
- **Interoperability**: Can be accessed from languages like Python.

## Steps to Create a Dynamic Library

1. Compile source files to object files with the `-fPIC` (Position Independent Code) option:
    ```bash
    gcc -c -fPIC fct.c
    ```

2. Link object files to create a shared library:
    ```bash
    gcc -shared -o libFct.so fct.o
    ```


## Using the Library

- Compile the calling program and link it with the dynamic library:
    ```bash
    gcc -o call_dynamic call_fct.o -L./ -lFct
    ```

## Runtime Considerations

- Set `LD_LIBRARY_PATH` to ensure the system can find the shared library:
    ```bash
    export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
    ```
## Key Compiler Options

### -fPIC
- **Purpose**: Generates Position Independent Code, allowing shared libraries to be loaded at any memory address.

### -shared
- **Purpose**: Instructs the compiler to create a shared library (`.so` file) for dynamic linking.

## Basic Usage of Tools

### nm
- **Purpose**: Displays symbols from object files.
- **Usage**:
    ```bash
    nm libFct.so
    ```

### ldd
- **Purpose**: Lists shared libraries required by a program.
- **Usage**:
    ```bash
    ldd call_dynamic
    ```

### ldconfig
- **Purpose**: Updates the shared library cache and configures dynamic linker bindings.
- **Usage**:
    ```bash
    sudo ldconfig
    ```
## Importance of New Lines in Files

- **File Formatting**: 
  - Text files should end with a newline character. This is crucial for many Unix utilities that process text files.
  
- **Behavior in Commands**: 
  - Commands like `cat` or `diff` can behave unpredictably if files do not end with a newline, potentially treating the last line incorrectly.
