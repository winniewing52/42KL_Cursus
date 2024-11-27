# libft

<p align="center">
  <img src="https://github.com/mcombeau/mcombeau/blob/main/42_badges/libfte.png" />
</p>

This is my first project at 42 Kuala Lumpur. Libft is an individual project that involves learning how to re-create some standard C library functions that can be used later to build a library of useful functions for the rest of the program.

## List of Functions
### Functions from `<ctype.h>` library
* [`ft_isascii`](https://github.com/winniewing52/42KL_Cursus/blob/main/libft/ft_isascii.c) - Test a character to see if it's a 7-bit ASCII character.
* [`ft_isalpha`](https://github.com/winniewing52/42KL_Cursus/blob/main/libft/ft_isalpha.c) - Test a character to see if it's alphabetic.
* [`ft_isdigit`](https://github.com/winniewing52/42KL_Cursus/blob/main/libft/ft_isdigit.c) - Test a character to see if it's a decimal digit.
* [`ft_isalnum`](https://github.com/winniewing52/42KL_Cursus/blob/main/libft/ft_isalnum.c) - Test a character to see if it's alphanumeric.
* [`ft_isprint`](https://github.com/winniewing52/42KL_Cursus/blob/main/libft/ft_isprint.c) - Test a character to see if it's any printable character, including a space.
* [`ft_tolower`](https://github.com/winniewing52/42KL_Cursus/blob/main/libft/ft_tolower.c) - Convert a character to lowercase.
* [`ft_toupper`](https://github.com/winniewing52/42KL_Cursus/blob/main/libft/ft_toupper.c) - Convert a character to uppercase.

### Functions from `<stdlib.h>` library
* [`ft_atoi`](https://github.com/winniewing52/42KL_Cursus/blob/main/libft/ft_atoi.c) - Convert ASCII string to integer.
* [`ft_calloc`](https://github.com/winniewing52/42KL_Cursus/blob/main/libft/ft_calloc.c) - Allocate space for an array and initializes it to 0. This function and `malloc` return a void pointer, that had no associated data type with it. A void pointer can hold address of any type and can be typecasted to any type.

### Functions from `<strings.h>` library
* [`ft_bzero`](https://github.com/winniewing52/42KL_Cursus/blob/main/libft/ft_bzero.c) - Set the first part of an object to null bytes (filling it with zeroes).
* [`ft_memset`](https://github.com/winniewing52/42KL_Cursus/blob/main/libft/ft_memset.c) - Set memory to a given value.
* [`ft_memchr`](https://github.com/winniewing52/42KL_Cursus/blob/main/libft/ft_memchr.c) - Find the first occurrence of a character in a buffer (locate byte in byte string).
* [`ft_memcmp`](https://github.com/winniewing52/42KL_Cursus/blob/main/libft/ft_memcmp.c) - Compare the bytes in two buffers.
* [`ft_memmove`](https://github.com/winniewing52/42KL_Cursus/blob/main/libft/ft_memmove.c) - Copy bytes from one buffer to another, handling overlapping memory correctly.
* [`ft_memcpy`](https://github.com/winniewing52/42KL_Cursus/blob/main/libft/ft_memcpy.c) - Copy bytes from one buffer to another.

### Functions from `<string.h>` library
* [`ft_strlen`](https://github.com/winniewing52/42KL_Cursus/blob/main/libft/ft_strlen.c) - Get the length of a string.
* [`ft_strchr`](https://github.com/winniewing52/42KL_Cursus/blob/main/libft/ft_strchr.c) - Find the first occurrence of a character in a string.
* [`ft_strrchr`](https://github.com/winniewing52/42KL_Cursus/blob/main/libft/ft_strrchr.c) - Find the last occurrence of a character in a string.
* [`ft_strnstr`](https://github.com/winniewing52/42KL_Cursus/blob/main/libft/ft_strnstr.c) - Locate a substring in a string.
* [`ft_strncmp`](https://github.com/winniewing52/42KL_Cursus/blob/main/libft/ft_strncmp.c) - Compare two strings, up to a given length.
* [`ft_strdup`](https://github.com/winniewing52/42KL_Cursus/blob/main/libft/ft_strdup.c) - Create a duplicate of a string, using `malloc`.
* [`ft_strlcpy`](https://github.com/winniewing52/42KL_Cursus/blob/main/libft/ft_strlcpy.c) - Size-bounded string copy.
* [`ft_strlcat`](https://github.com/winniewing52/42KL_Cursus/blob/main/libft/ft_strlcat.c) - Size-bounded string concatenation.

### Non-standard functions
* [`ft_itoa`](https://github.com/winniewing52/42KL_Cursus/blob/main/libft/ft_itoa.c) - Convert integer to ASCII string.
* [`ft_substr`](https://github.com/winniewing52/42KL_Cursus/blob/main/libft/ft_substr.c) - Get a substring from string.
* [`ft_strtrim`](https://github.com/winniewing52/42KL_Cursus/blob/main/libft/ft_strtrim.c) - Trim beginning and end of string with the specified substring.
* [`ft_strjoin`](https://github.com/winniewing52/42KL_Cursus/blob/main/libft/ft_strjoin.c) - Concatenate two strings into a new string, using `calloc`.
* [`ft_split`](https://github.com/winniewing52/42KL_Cursus/blob/main/libft/ft_split.c) - Split string, with specified character as delimiter, into an array of strings.
* [`ft_strmapi`](https://github.com/winniewing52/42KL_Cursus/blob/main/libft/ft_strmapi.c) - Create new string from a string modified with a specified function.
* [`ft_striteri`](https://github.com/winniewing52/42KL_Cursus/blob/main/libft/ft_striteri.c) - Modify a string with a given function.
* [`ft_putchar_fd`](https://github.com/winniewing52/42KL_Cursus/blob/main/libft/ft_putchar_fd.c) - Output a character to given file.
* [`ft_putstr_fd`](https://github.com/winniewing52/42KL_Cursus/blob/main/libft/ft_putstr_fd.c) - Output string to given file.
* [`ft_putendl_fd`](https://github.com/winniewing52/42KL_Cursus/blob/main/libft/ft_putendl_fd.c) - Output string to given file with newline.
* [`ft_putnbr_fd`](https://github.com/winniewing52/42KL_Cursus/blob/main/libft/ft_putnbr_fd.c) - Output integer to given file.
