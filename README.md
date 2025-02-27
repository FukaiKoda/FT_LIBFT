# Libft - Your Personal C Toolbox

## 📌 Overview

Libft is a custom static library written in C, designed to provide a set of essential low-level functions. These functions serve as fundamental tools for larger projects, compensating for the absence of built-in utilities in standard C environments.

This library was my first step into understanding and implementing core functionalities from scratch, reinforcing my grasp of memory management, string manipulation, file handling, and data structures.

## 📂 Project Structure

Libft is organized into four main sections:

### 📝 1. String Manipulation

A collection of functions to process and manipulate strings efficiently. These include:

- `ft_strlen` - Calculates the length of a string.
- `ft_strcpy` - Copies a string from source to destination.
- `ft_strcat` - Concatenates two strings.
- `ft_strdup` - Duplicates a string, allocating necessary memory.
- `ft_strchr` - Finds the first occurrence of a character in a string.
- `ft_strncmp` - Compares two strings up to a given length.

### 🛠️ 2. Memory Functions

Memory-related functions that help in managing dynamic memory allocation and manipulation:

- `ft_memset` - Fills a block of memory with a specific value.
- `ft_memcpy` - Copies memory from one location to another.
- `ft_memmove` - Handles overlapping memory copies safely.
- `ft_memcmp` - Compares two blocks of memory.
- `ft_bzero` - Sets a block of memory to zero.
- `ft_calloc` - Allocates and initializes memory for an array.

### 📜 3. File Descriptors

Functions designed to handle input and output operations using file descriptors:

- `ft_putchar_fd` - Outputs a character to a given file descriptor.
- `ft_putstr_fd` - Outputs a string to a given file descriptor.
- `ft_putendl_fd` - Outputs a string followed by a newline.
- `ft_putnbr_fd` - Outputs an integer as a string to a given file descriptor.

### 🔗 4. Linked List Data Structure

A set of functions to work with singly linked lists, providing dynamic data management capabilities:

- `ft_lstnew` - Creates a new linked list node.
- `ft_lstadd_front` - Adds a node to the beginning of a list.
- `ft_lstadd_back` - Adds a node to the end of a list.
- `ft_lstdelone` - Deletes a single node from a list.
- `ft_lstclear` - Clears an entire list and frees memory.
- `ft_lstiter` - Iterates over a list and applies a function to each node.
- `ft_lstmap` - Creates a new list by applying a function to each node.

## 🚀 Usage

To integrate Libft into your projects, compile it into a static library and link it:

```sh
make
ar rcs libft.a *.o
```

Then, include it in your project:

```c
#include "libft.h"
```

And link it during compilation:

```sh
gcc -Wall -Wextra -Werror your_code.c -L. -lft -o your_program
```

## 🎯 Key Takeaways

- Reinforced my understanding of C memory management.
- Built a reusable toolbox to simplify future projects.
- Gained experience in working with static libraries.

## 📜 License

This project is open-source and available under the MIT License.




