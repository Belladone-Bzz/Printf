#include "ft_printf.h"

static void	ft_type_identification(char type, va_list arguments, int *count)
{
	if (type == 'c')
		ft_putchar(va_arg(arguments, int), count);
	else if (type == 's')
		ft_putstr(va_arg(arguments, char *), count);
	else if (type == 'p')
		ft_putadress(va_arg(arguments, void *), type, count);
	else if (type == 'd' || type == 'i')
		ft_signed_int(va_arg(arguments, int), count);
	else if (type == 'u')
		ft_unsigned_int(va_arg(arguments, unsigned int), count);
	else if (type == 'x')
		ft_puthexa(va_arg(arguments, unsigned int), type, count);
	else if (type == 'X')
		ft_puthexa(va_arg(arguments, unsigned int), type, count);
}

int	ft_printf(const char *input, ...)
{
	int		count;
	va_list	arguments;

	count = 0;
	va_start(arguments, input);
	if (!input)
		return (0);
	while (*input)
	{
		if (*input == '%')
		{
			input++;
			if (strchr("cspdiuxX", *input))
				ft_type_identification(*input, arguments, &count);
			if (*input == '%')
				count += write(1, "%%", 1);
		}
		else
			count += write(1, *(&input), 1);
		input++;
	}
	return (count);
}
