#include "ft_printf.h"

void	ft_signed_int(int number, int *count)
{
	if (number >= 10 || number <= -10)
		ft_signed_int(number / 10, count);
	else if (number < 0)
		*count += write(1, "-", 1);
	if (number < 0)
		number = (number % 10) * -1;
	*count += write(1, &"0123456789"[number % 10], 1);
}

void	ft_unsigned_int(unsigned int number, int *count)
{
	if (number >= 10)
		ft_unsigned_int(number / 10, count);
	*count += write(1, &"0123456789"[number % 10], 1);
}
