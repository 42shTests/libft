#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	int				res;

	res = 0;
	if (s1 && s2)
	{
		i = 0;
		while (i < n && res == 0)
		{
			res = ((unsigned char *)s1)[i] - ((unsigned char *)s2)[i];
			i++;
		}
	}
	return (res);
}
