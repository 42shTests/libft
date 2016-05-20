#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;

	if (dst && src)
	{
		i = 0;
		while (i < n)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			if (((unsigned char *)dst)[i] == (unsigned char)c)
				return ((void *)(((char *)dst) + i + 1));
			i++;
		}
	}
	return (NULL);
}
