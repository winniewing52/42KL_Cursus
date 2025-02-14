# get_next_line

<p align="center">
  <img src="https://github.com/ayogun/42-project-badges/blob/main/badges/get_next_linem.png" />
</p>

The get_next_line project involves creating a function to read line by line from a file descriptor. The function, get_next_line reads from a file descriptor and returns the next line from the file each time it is called.

# Key Concept
### 1. File descriptor (Fd)
- A file descriptor is an integer that uniquely identifies an open file in a computer's operating system.

### 2. Static Variables
- The function uses a static variable to keep track of the remaining data from the previous read operation. This allows the function to remember the state between successive calls, ensuring that it can continue reading from where it left off.

### 3. Buffer Size
- The function uses a buffer to read data from the file descriptor. The buffer size is defined by the BUFFER_SIZE macro. This size can be set at compile time using the -D BUFFER_SIZE=n flag. The function must handle different buffer sizes efficiently.

### 4. Line Extraction
- The function reads until it encounters a newline character (\n) or it reaches the end of the file. It then returns the line, including the newline character (if present), and keeps track of any remaining data for the next call.

### 5. Memory Management
- The funcion dynamically allocates memory for the line being read and ensures that all allocated memory is properly free to avoid memory leaks.

### 6. Multiple File Descriptors (BONUS part)
- The bonus part extends the function to handle multiple file descriptors simultaneously. It uses a static array to keep track of the remaining data for each file descriptor, allowing the function to switch between different files without losing its place.
