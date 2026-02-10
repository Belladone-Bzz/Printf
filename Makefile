#*		Source files
SRC = 	ft_printf.c ft_putadress.c ft_putchar.c ft_puthexa.c		\
		ft_putnbr.c ft_putstr.c

#*		Directories
OBJDIR =			obj/

#*		Code and object files
OBJ = $(SRC:.c=.o)

#*		Flags and name
CFLAGS = -Wall -Wextra -Werror
NAME = ft_printf.a

#	// MAKEFILE RULES //
#*		Mandatories
all: $(NAME)

clean:
	rm -f $(addprefix $(OBJDIR),$(OBJ))
	rm -fd $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

#*		Compilation
$(NAME): $(OBJDIR) $(OBJ)
	ar rc $(NAME) $(addprefix $(OBJDIR),$(OBJ))

%.o: %.c
	cc -c $(CFLAGS) $< -o $(addprefix $(OBJDIR),$@)

#*		Directories
$(OBJDIR):
	mkdir -p $(OBJDIR)

.PHONY:			all, clean, fclean, re
