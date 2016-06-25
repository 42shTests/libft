#include "libft.h"

char		*ft_strtolower(char *s)
{
	int		i;

	i = 0;
	while (s[i])
	{
		s[i] = ft_tolower((int)s[i]);
		i++;
	}
	return (s);
}
