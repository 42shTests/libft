#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int len;

	if (s)
	{
		len = (int)ft_strlen(s);
		while (len >= 0)
		{
			if (s[len] == c)
				return (&(((char *)s)[len]));
			len--;
		}
	}
	return (NULL);
}
