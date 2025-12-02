#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <string.h>

int		ft_printf(const char *input, ...);
void	ft_putchar(char c, int *count);
void	ft_putadress(void *adress, char type, int *count);
void	ft_puthexa(unsigned long int adress, char hcase, int *count);
void	ft_signed_int(int number, int *count);
void	ft_unsigned_int(unsigned int number, int *count);
void	ft_putstr(const char *str, int *count);

#endif