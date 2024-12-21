#File I/O:

##File I/O (Input/Output):
refers to the process of reading from and writing to files on a storage device and enables the manipulation of data stored in files.

## File Descriptors:
A file descriptor is a non-negative integer that uniquely identifies an open file within a process. It serves as an index for accessing files and I/O resources. File descriptors are used by system calls to perform operations on files.
### Standard File Descriptors:
1. **Standard Input (stdin)**: 
   - **POSIX Name**: `STDIN_FILENO`
   - **Purpose**: Used for input (typically keyboard input).

2. **Standard Output (stdout)**: 
   - **POSIX Name**: `STDOUT_FILENO`
   - **Purpose**: Used for output (typically the terminal or console).

3. **Standard Error (stderr)**: 
   - **POSIX Name**: `STDERR_FILENO`
   - **Purpose**: Used for error messages and diagnostics.

## System Calls
A system call is a request to the operating system's kernel for services like file management or process control, bridging user-space applications and the kernel.

### Functions vs. System Calls
- **Functions**: Library routines that operate in user space without kernel switching.
- **System Calls**: Requests to the kernel for low-level operations, requiring a context switch from user space.
### I/O System Calls
The primary system calls for file operations in C are `open`, `close`, `read`, and `write`. 

##### How to Use:
- **open**: Opens a file and returns its file descriptor.
  `int fd = open("filename.txt", O_RDONLY);`
- **close**: Closes a file descriptor.
  `close(fd);`
- **read**: Reads data from a file into a buffer.
  `ssize_t bytes_read = read(fd, buffer, sizeof(buffer));`
- **write**: Writes data from a buffer to a file.
  `ssize_t bytes_written = write(fd, buffer, bytes_to_write);`

### File Status Flags:
The flags used with the `open` system call determine how a file can be accessed:

- `O_RDONLY`: Open for reading only.
- `O_WRONLY`: Open for writing only.
- `O_RDWR`: Open for both reading and writing.

### File Permissions:
File permissions specify who can read, write, or execute a file. When creating a file with the open system call, you can set permissions using:

`S_IRUSR`: Owner can read. 4
`S_IWUSR`: Owner can write. 2
`S_IRGRP`: Group can read. 4
`S_IWGRP`: Group can write. 2
`S_IROTH`: Others can read. 2

| File                      | Description                                                |
|---------------------------|------------------------------------------------------------|
| 0-read_textfile.c        | Reads a text file and prints it to the POSIX standard output. |
| 1-create_file.c          | Creates a file.                                           |
| 2-append_text_to_file.c  | Appends text at the end of a file.                       |
| 3-cp.c                   | Copies the content of a file to another file.            |
| main.h                   | The header file.                                         |
