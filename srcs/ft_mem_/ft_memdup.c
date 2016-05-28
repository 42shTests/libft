#include <string.h>
#include "libft.h"

void			*ft_memdup(void const *src, size_t size)
{
	void		*dest;

	dest = (void *)ft_memalloc(size);
	if (dest)
	{
		dest = ft_memcpy(dest, src, size);
		return (dest);
	}
	return (NULL);
}
