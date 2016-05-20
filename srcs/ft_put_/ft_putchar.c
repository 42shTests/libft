#include "libft.h"

/*
** Display a character in the standard out file descriptor.
** @param	c		the character to print
*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
