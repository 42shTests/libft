#include <wchar.h>
#include "libft.h"

static char				*ft_wcstombs_fill(char *dest, char *tmp, size_t *len2)
{
	short				i;

	i = 0;
	while (tmp[i])
	{
		dest[(*len2)++] = tmp[i];
		i++;
	}
	return (dest);
}

char					*ft_wcstombs(const wchar_t *src, size_t n)
{
	size_t				len;
	size_t				len2;
	short				ret;
	char				tmp[4];
	char				*new;

	if (!(new = ft_strnew(0)))
		return (NULL);
	len = 0;
	len2 = 0;
	while (src[len] != 0 && len2 < n)
	{
		ret = ft_wctomb(tmp, src[len]);
		if (ret > 0 && len2 + ret < n)
		{
			if (!(new = ft_realloc(new, len2 + ret + 1)))
				return (NULL);
			new = ft_wcstombs_fill(new, tmp, &len2);
		}
		len++;
	}
	new[len2] = '\0';
	return (new);
}
