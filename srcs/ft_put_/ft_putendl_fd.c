#include "libft.h"

/*
** Display a char * in a file descriptor following by a new line.
** @param	s		the char * to print
** @param	fd		the file descriptor
*/

void	ft_putendl_fd(const char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
