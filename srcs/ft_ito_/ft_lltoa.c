#include <string.h>
#include "libftprintf.h"

static void			ft_lltoa_getlength(size_t *len, long long *n)
{
	long long		n2;

	*len = 0;
	n2 = *n;
	while (n2 != 0)
	{
		(*len)++;
		n2 = n2 / 10;
	}
}

char				*ft_lltoa(long long n)
{
	char				*str;
	size_t				len;
	unsigned long long	n2;

	ft_lltoa_getlength(&len, &n);
	n2 = (n < 0 ? -n : n);
	str = ft_strnew(len + 1);
	if (!str)
		return (NULL);
	while (len > 0)
	{
		str[len - (n < 0 ? 0 : 1)] = (n2 % 10) + 48;
		n2 = n2 / 10;
		len--;
	}
	if (n < 0)
		str[0] = '-';
	else if (n == 0)
		str[0] = '0';
	return (str);
}
