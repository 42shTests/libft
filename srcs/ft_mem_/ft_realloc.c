#include <string.h>
#include <stdlib.h>
#include "libft.h"

void				*ft_realloc(void *src, size_t size)
{
	void			*dest;

	dest = ft_memalloc(size);
	if (src)
	{
		if (dest)
			dest = ft_memcpy(dest, src, size);
		ft_memdel(&src);
	}
	return (dest);
}
