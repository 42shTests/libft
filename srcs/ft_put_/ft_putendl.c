#include "libft.h"

/*
** Display a char * in the standard out file descriptor following by a newline.
** @param	s		the char * to print
*/

void	ft_putendl(const char *s)
{
	ft_putstr(s);
	ft_putchar('\n');
}
