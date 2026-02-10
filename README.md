# Printf Function

## :open_book: Description

> [!NOTE]
**No artificial intelligence was used in the creation of this project.**

This project involves recreating the printf function and allowed me to greatly improve the following skills:
- Variadic functions
- Type Conversion & Representation
- String Parsing & Formatting

I dit not implement the buffer management of the original printf() function. This printf() function handles the following conversions: cspdiuxX%


## :key: Instructions

To use the ft_printf.a library, clone the directory with the command `git clone https://github.com/Belladone-Bzz/Printf.git` in the terminal then go in the directory with the command `cd Printf`.

The library is accompanied by a header file called ft_printf.h, which contains prototypes for all the functions used in the library. Every file is situated in the project's root, meaning no directory or hierarchy needs to be handled other than keeping the library together.

The project includes a Makefile with the following rules:

```
make        # Compiles the library and creates libft.a
make all    # Same as above
make clean  # Removes object files
make fclean # Removes all generated files including libft.a
make re     # Recompiles the entire project from scratch
```
All source files are compiled with `-Wall -Wextra -Werror` flags for strict error checking. To compile, use the command `make` to create the `ft_printf.a` library at the root.

#### Using the Library

To use ft_printf in other projects:

**1. If you're working in a github repository, you can clone the library with the following command to add it as a submodule :**
```bash
git submodule add https://github.com/Belladone-Bzz/Printf.git
```
**2. Include the header file in your project:**
 ```c
 #include "ft_printf.h"
 ```
**3. Execute the provided Makefile to create the ft_printf.a file and include it in your project compilation**


