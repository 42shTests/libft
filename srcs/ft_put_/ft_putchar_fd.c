#include "libft.h"

/*
** Display a character in a file descriptor.
** @param	c		the character to print
** @param	fd		the file descriptor
*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
