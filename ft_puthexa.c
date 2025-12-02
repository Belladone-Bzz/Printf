#include "ft_printf.h"

void	ft_puthexa(unsigned long int adress, char hcase, int *count)
{
	char	*digit;

	if (hcase == 'X')
		digit = "0123456789ABCDEF";
	else
		digit = "0123456789abcdef";
	if (adress >= 16)
		ft_puthexa(adress / 16, hcase, count);
	*count += write(1, &digit[adress % 16], 1);
}
