#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	while (len-- > 0)
		((char *)b)[len] = (unsigned char)c;
	return (b);
}
