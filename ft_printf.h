#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <string.h>

/*
Can take a variable number of arguments. Check the flag 
used in argument to call the function that will write the 
corresponding variable. Return the number of character 
printed.
*/
int		ft_printf(const char *input, ...);
/*
Write the character c in the standard output. Increment 
the count pointer each time a character is written.
*/
void	ft_putchar(char c, int *count);
/*
Write the memory address given as an argument in the 
standard output. Write (nil) if no address is found. 
Increment the count pointer each time a character is 
written.
*/
void	ft_putadress(void *adress, char type, int *count);
/*
Write the lowercase or uppercase hexadecimal value of the 
unsigned long int given as an argument in the standard 
output.Increment the count pointer each time a character 
is written.
*/
void	ft_puthexa(unsigned long int adress, char hcase, int *count);
/*
Write the signed int value of the int given as an argument 
in the standard output.Increment the count pointer each 
time a character is written.
*/
void	ft_signed_int(int number, int *count);
/*
Write the unsigned int value of the int given as an argument 
in the standard output.Increment the count pointer each 
time a character is written.
*/
void	ft_unsigned_int(unsigned int number, int *count);
/*
Write the string of char given as an argument in the standard 
output.Increment the count pointer each time a character is 
written.
*/
void	ft_putstr(const char *str, int *count);

#endif