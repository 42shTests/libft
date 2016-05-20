#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	dstl;
	unsigned int	srcl;

	i = 0;
	dstl = ft_strlen(dst);
	srcl = ft_strlen(src);
	if (size < dstl)
		return (size + srcl);
	while (src[i] != '\0' && (dstl + i + 1) < size)
	{
		dst[dstl + i] = src[i];
		i++;
	}
	dst[dstl + i] = '\0';
	return (dstl + srcl);
}
