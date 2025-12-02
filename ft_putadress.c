#include "ft_printf.h"

void	ft_putadress(void *adress, char type, int *count)
{
	if (!adress)
	{
		*count += write(1, "(nil)", 5);
		return ;
	}
	else
	{
		*count += write(1, "0x", 2);
		ft_puthexa((unsigned long int)adress, type, count);
	}
}
