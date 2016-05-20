#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (s)
	{
		while (*s != c)
		{
			if (!*s++)
				return (NULL);
		}
	}
	return ((char *)s);
}
