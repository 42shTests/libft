#include "libft.h"

/*
** Display an int in the standard out file descriptor.
** @param	n		the int to print
*/

void		ft_putnbr(int n)
{
	char c;

	c = '0';
	if (n < 0)
	{
		ft_putchar('-');
		c -= (n % 10);
		if (n < -9)
			ft_putnbr(-(n / 10));
		ft_putchar(c);
	}
	if (n > 0)
	{
		c += n % 10;
		if (n > 9)
			ft_putnbr(n / 10);
		ft_putchar(c);
	}
	else if (n == 0)
		ft_putchar(c);
}
