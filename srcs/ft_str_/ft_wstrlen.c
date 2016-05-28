#include <wchar.h>
#include <string.h>
#include "libft.h"

size_t				ft_wstrlen(const wchar_t *str)
{
	size_t			len;

	len = 0;
	while (str[len] != 0)
		len++;
	return (len);
}
