#include "libft.h"

/*
** Display a char * in the standard out file descriptor.
** @param	s		the char * to print
*/

void	ft_putstr(const char *s)
{
	write(1, s, ft_strlen(s));
}
