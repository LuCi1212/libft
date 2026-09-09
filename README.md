*This project has been created as part of the 42 curriculum by <winhein>.*

# Libft

## Description

Libft is a custom C library created as part of the 42 curriculum.

The goal of this project is to recreate a collection of commonly used functions from the C standard library and to implement additional utility functions that can be reused in future 42 projects.

Through this project, I learned and practiced:

- C programming fundamentals
- Pointers and memory addresses
- Dynamic memory allocation
- String manipulation
- Character manipulation
- Memory manipulation
- File descriptors
- Function pointers
- Linked lists
- Defensive programming and memory management

The library is divided into two main parts.

### Part 1 - Libc Functions

Part 1 consists of recreating functions from the C standard library, including functions for:

- Character checking and conversion
- String manipulation
- Memory manipulation
- String searching and comparison
- Memory allocation

Examples include:

- `ft_strlen`
- `ft_memset`
- `ft_memcpy`
- `ft_memmove`
- `ft_strlcpy`
- `ft_strlcat`
- `ft_strchr`
- `ft_strrchr`
- `ft_strncmp`
- `ft_memchr`
- `ft_memcmp`
- `ft_strnstr`
- `ft_atoi`
- `ft_calloc`
- `ft_strdup`

### Part 2 - Additional Functions

Part 2 contains additional utility functions that extend the library.

These include:

- `ft_substr` - Creates a substring from a given string.
- `ft_strjoin` - Concatenates two strings into a newly allocated string.
- `ft_strtrim` - Removes specified characters from the beginning and end of a string.
- `ft_split` - Splits a string into an array of strings using a delimiter.
- `ft_itoa` - Converts an integer into a string.
- `ft_strmapi` - Creates a new string by applying a function to every character.
- `ft_striteri` - Applies a function directly to every character of an existing string.
- `ft_putchar_fd` - Writes a character to a specified file descriptor.
- `ft_putstr_fd` - Writes a string to a specified file descriptor.
- `ft_putendl_fd` - Writes a string followed by a newline to a specified file descriptor.
- `ft_putnbr_fd` - Writes an integer to a specified file descriptor.

### Part 3 - Linked Lists
The project also includes functions for creating and manipulating
linked lists.

- `ft_lstnew` - Creates a new list node.
- `ft_lstadd_front` - Adds a node to the beginning of a list.
- `ft_lstsize` - Counts the number of nodes in a list.
- `ft_lstlast` - Returns the last node of a list.
- `ft_lstadd_back` - Adds a node to the end of a list.
- `ft_lstdelone` - Deletes one node.
- `ft_lstclear` - Deletes and frees an entire list.
- `ft_lstiter` - Applies a function to every node.
- `ft_lstmap` - Creates a new list by applying a function to each node.

These linked-list functions provide basic operations for creating,
accessing, modifying, and deleting linked-list data structures.

## Library Details

The library is provided as a static library named:

`libft.a`

The functions implemented in this project are designed to be reusable in other C projects.

For example:

```c
#include "libft.h"

int main(void)
{
    char *str;

    str = ft_strdup("Hello, 42!");
    ft_putstr_fd(str, 1);
    free(str);
    return (0);
}