#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	unsigned int i;

	i = 0;
	while (i < ft_strlen(src))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
