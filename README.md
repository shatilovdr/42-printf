# ft_printf

**ft_printf** is a custom implementation of the standard `printf` function in C.This function replicates the behavior of `printf` and handles a subset of its features.

## Features

- Handles format specifiers:
  - `%c` for characters.
  - `%s` for strings.
  - `%p` for pointers.
  - `%d` and `%i` for integers.
  - `%u` for unsigned integers.
  - `%x` and `%X` for hexadecimal numbers (lowercase and uppercase).
  - `%%` for the literal `%` character.
- Supports variable arguments using `stdarg.h`.
- Adheres to 42 coding standards.

## Installation

To include **ft_printf** in your project, clone the repository and compile the library:

```bash
git clone git@github.com:shatilovdr/42-printf.git
cd ft_printf
make
```

## Usage

1. Include the library header in your source code:
```C
#include "ft_printf.h"
```

2. Use ft_printf just like the standard printf function:
```C
ft_printf("Hello, %s!.\n", "World");
```
3. Compile your program and link it with libftprintf.a:
```bash
gcc -Wall -Wextra -Werror my_program.c -L. -lftprintf -o my_program
```
