#include "libft.h"

int	ft_strisalnum(char const *str)
{
	while(*str)
	{
		if (ft_isalnum(*str) == 0)
			return (0);
		str++;
	}
	return (1);
}
