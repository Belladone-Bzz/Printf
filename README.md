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

To use the libftprintf.a library, clone the directory with the command `git clone https://github.com/Belladone-Bzz/Printf.git` in the terminal then go in the directory with the command `cd Printf`.

The library is accompanied by a header file called ft_printf.h, which contains prototypes for all the functions used in the library. Every file is situated in the project's root, meaning no directory or hierarchy needs to be handled other than keeping the library together.

#### Compilation

The project includes a **Makefile** with the following rules:

```
make       # Compiles the library and creates libft.a
make all   # Same as above
make clean # Removes object files
make fclean # Removes all generated files including libft.a
make re    # Recompiles the entire project from scratch
```

#### Compilation Flags

All source files are compiled with:
- `-Wall -Wextra -Werror` flags for strict error checking
- `cc` compiler
- No relinking on subsequent builds

#### Library Creation

The library is created using the `ar` command (not libtool) and is output as `libft.a` at the repository root.
