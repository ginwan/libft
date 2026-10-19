

*This project has been created as part of the 42 curriculum by gelgasim.*

# Libft

## Description

Libft is a project from the 42 curriculum. The goal is to create a personal C library by reimplementing standard C library functions and developing additional utility functions.

The project includes functions for string manipulation, memory management, character checks, and linked list operations. It helps improve understanding of C programming, pointers, memory allocation, and data structures.

## Instructions

Run the following command to compile the library:

```bash
make
```

This creates the `libft.a` static library.

Other available commands:

- `make clean` — removes object files.
- `make fclean` — removes object files and the library.
- `make re` — rebuilds the library from scratch.

## Resources

- [W3Schools — C Tutorial](https://www.w3schools.com/c/): Used to review C programming basics and syntax.
- The 42 Libft project subject and instructions.
- Linux man pages and documentation for C programming functions.

### AI Usage

AI was used to explain C concepts, help identify bugs, and support debugging during development. It helped me understand memory management, pointers, linked lists, and Makefile rules.

## Library Contents

### Part 1 — Libc Functions

This part reimplements standard C library functions related to character checks, string manipulation, memory operations, and conversions.

- **Character checks:** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
- **String functions:** `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`
- **Memory functions:** `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`
- **Character conversion:** `ft_toupper`, `ft_tolower`
- **Conversion:** `ft_atoi`
- **Memory allocation:** `ft_calloc`, `ft_strdup`

The `ft_calloc` function allocates memory and initializes it to zero. The `ft_strdup` function allocates memory and creates a duplicate of a string.


### Part 2 — Additional Functions

This part contains additional string manipulation, conversion, and output functions that extend the standard C library.

- **`ft_substr`** — Creates a substring from a specified starting index and maximum length.
- **`ft_strjoin`** — Combines two strings into a newly allocated string.
- **`ft_strtrim`** — Removes specified characters from the beginning and end of a string.
- **`ft_split`** — Splits a string into an array of strings using a delimiter character. The array is NULL-terminated, and each string is allocated independently.
- **`ft_itoa`** — Converts an integer into a string representation.
- **`ft_strmapi`** — Applies a function to each character of a string, passing its index and character, and stores the results in a new string.
- **`ft_striteri`** — Applies a function to each character of a string, passing its index and the character's address so it can be modified.
- **`ft_putchar_fd`** — Outputs a character to a specified file descriptor.
- **`ft_putstr_fd`** — Outputs a string to a specified file descriptor.
- **`ft_putendl_fd`** — Outputs a string followed by a newline to a specified file descriptor.
- **`ft_putnbr_fd`** — Outputs an integer to a specified file descriptor.

Functions that create new strings use dynamic memory allocation and return `NULL` if allocation fails. The file descriptor output functions use `write()` to send data to the specified destination, such as standard output or a file.

### Part 3 — Linked Lists

This part introduces linked lists using the `t_list` structure. Each node contains a `content` pointer, which can store different types of data, and a `next` pointer, which points to the next node in the list.

The linked list functions allow nodes to be created, connected, accessed, processed, and deleted.

- **`ft_lstnew`** — Creates a new node with the given content.
- **`ft_lstadd_front`** — Adds a node to the beginning of the list.
- **`ft_lstsize`** — Counts the number of nodes in the list.
- **`ft_lstlast`** — Returns the last node in the list.
- **`ft_lstadd_back`** — Adds a node to the end of the list.
- **`ft_lstdelone`** — Deletes one node and frees its content using a specified deletion function.
- **`ft_lstclear`** — Deletes and frees a node and all following nodes, then sets the list pointer to `NULL`.
- **`ft_lstiter`** — Applies a function to the content of every node.
- **`ft_lstmap`** — Applies a function to each node's content and creates a new list containing the results.

These functions provide practice with pointers, dynamic memory allocation, structures, and memory management in C.