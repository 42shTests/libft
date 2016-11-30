#include "libft.h"

int			ft_isspace(int c)
{
	if (c == '\t' || c == '\n' || c == '\v' ||
		c == '\f' || c == '\n' || c == ' ')
	{
		return (1);
	}
	return (0);
}
