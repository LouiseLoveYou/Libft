*This project has been created as part of the 42 curriculum by Kisella.*

# 📚 Libft

## 📝 Description

Libft is an individual project from the 42 school curriculum. The goal is to create a custom C library by reimplementing standard C library functions and developing additional utility functions.

This project provides a foundation for future C projects at 42 by developing a better understanding of memory management, strings, pointers, conversions and linked lists.

## 🛠️ Functions

### 🔹 Part 1 — Libc functions

**🔠 Character checks and conversions**
- `ft_isalpha`
- `ft_isdigit`
- `ft_isalnum`
- `ft_isascii`
- `ft_isprint`
- `ft_toupper`
- `ft_tolower`

**🔤 String manipulation**
- `ft_strlen`
- `ft_strchr`
- `ft_strrchr`
- `ft_strncmp`
- `ft_strlcpy`
- `ft_strlcat`
- `ft_strnstr`
- `ft_strdup`

**🧠 Memory manipulation**
- `ft_memset`
- `ft_bzero`
- `ft_memcpy`
- `ft_memmove`
- `ft_memchr`
- `ft_memcmp`
- `ft_calloc`

**🔄 Conversions**
- `ft_atoi`

### 🔹 Part 2 — Additional functions

**✂️ String manipulation**
- `ft_substr`
- `ft_strjoin`
- `ft_strtrim`
- `ft_split`
- `ft_strmapi`
- `ft_striteri`

**🔢 Number conversion**
- `ft_itoa`

**📤 Output functions**
- `ft_putchar_fd`
- `ft_putstr_fd`
- `ft_putendl_fd`
- `ft_putnbr_fd`

### 🔹 Part 3 — Linked lists

**🔗 List manipulation**
- `ft_lstnew`
- `ft_lstadd_front`
- `ft_lstsize`
- `ft_lstlast`
- `ft_lstadd_back`

**🗑️ Memory management**
- `ft_lstdelone`
- `ft_lstclear`

**🔁 List iteration and transformation**
- `ft_lstiter`
- `ft_lstmap`

## ⚙️ Instructions

### 🏗️ Compilation

Compile the library:

```bash
make
```

Remove object files:

```bash
make clean
```

Remove object files and the compiled library:

```bash
make fclean
```

Recompile the entire project:

```bash
make re
```

Compile the bonus functions, if implemented:

```bash
make bonus
```

### 🚀 Usage

Include the library header in your C project:

```c
#include "libft.h"
```

Compile your program with the library:

```bash
cc main.c -L. -lft -o program
```

## 📐 Technical considerations

- 💻 Written in C.
- 📏 Follows the 42 Norm.
- 🧪 Compiled with `-Wall -Wextra -Werror`.
- ⚙️ Uses a Makefile to automate compilation.
- 📦 Generates the static library `libft.a`.
- 🧹 Handles dynamic memory allocation and deallocation.

## 📚 Resources

- 📖 [C Library Reference](https://en.cppreference.com/w/c/header)
- 🐧 [Linux man-pages](https://man7.org/linux/man-pages/)
- 📘 [GNU C Library Documentation](https://www.gnu.org/software/libc/manual/)

### 🤖 AI usage

AI tools may be used as learning support to clarify concepts, understand documentation and help structure the README. All code must be understood, tested and verified by the author in accordance with the 42 curriculum guidelines.

## 👩‍💻 Author

**Louise** 💜

🎓 42 Student  
🔑 Login: `Kisella`

---

*Made with ☕ and C.*
