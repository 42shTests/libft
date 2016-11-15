#include <string.h>
#include "libftprintf.h"

long long			ft_atoll(char const *str)
{
	short			neg;
	long long		res;

	neg = 0;
	res = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			neg = 1;
		str++;
	}
	while (*str && ft_isdigit(*str))
	{
		res = res * 10;
		res += (*str - 48);
		str++;
	}
	return ((neg == 1 ? -res : res));
}
