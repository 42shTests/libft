#include "libft.h"

void	ft_strclr(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i])
	{
		s[i] = '\0';
		i++;
	}
}
