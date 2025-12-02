#include "ft_printf.h"

void	ft_putstr(const char *str, int *count)
{
	if (!str)
	{
		*count += write(1, "(null)", 6);
		return ;
	}
	while (*str)
	{
		*count += write(1, *(&str), 1);
		str++;
	}
}
