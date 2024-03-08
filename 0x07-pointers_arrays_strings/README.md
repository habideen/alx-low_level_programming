# More pointers, arrays and strings

This project describes more pointers, arrays and strings implementation

## General

- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/alx-tools/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/alx-tools/Betty/blob/master/betty-doc.pl)
- You are not allowed to use global variables
- No more than 5 functions per file
- You are not allowed to use the standard library. Any use of functions like `printf`, `puts`, etc… is forbidden
- You are allowed to use [\_putchar](https://github.com/alx-tools/_putchar.c/blob/master/_putchar.c)
- You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`
- Don’t forget to push your header file

---

### Task 0. memset

Write a function that fills memory with a constant byte.

- Prototype: `char *_memset(char *s, char b, unsigned int n);`
- The `_memset()` function fills the first n bytes of the memory area pointed to by `s` with the constant byte `b`
- Returns a pointer to the memory area `s`

FYI: The standard library provides a similar function: `memset`. Run `man memset` to learn more.

**Repo:**

- GitHub repository: [alx-low_level_programming](../)
- Directory: [0x07-pointers_arrays_strings](./)
- File: [0-memset.c](0-memset.c)

---

### Task 0. memset
