#include "libft.h"

/*
** Display an int in file descriptor.
** @param	n		the int to print
** @param	fd		the file descriptor
*/

void		ft_putnbr_fd(int n, int fd)
{
	char c;

	c = '0';
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		c -= (n % 10);
		if (n < -9)
			ft_putnbr_fd(-(n / 10), fd);
		ft_putchar_fd(c, fd);
	}
	if (n > 0)
	{
		c += n % 10;
		if (n > 9)
			ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(c, fd);
	}
	else if (n == 0)
		ft_putchar_fd(c, fd);
}
