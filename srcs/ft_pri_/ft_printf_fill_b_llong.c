#include <limits.h>
#include <string.h>
#include "libftprintf.h"

static void				get_n_length(long long n, size_t *len)
{
	if (n == 0)
		*len = 1;
	else
	{
		*len = 0;
		while (n != 0)
		{
			(*len)++;
			n = n / 2;
		}
	}
}

static char				*compute_int_fill_n(t_printf_args *el, char *str,
							long long *n)
{
	size_t				i;
	size_t				j;

	i = 1;
	j = 0;
	str += el->acc - 1;
	while (j++ < el->acc)
	{
		if (el->pl == 0)
			*str-- = (*n % 2 == 1 ? '0' : '1');
		else
			*str-- = (*n % 2) + 48;
		if (j < el->acc && i != 0 && i % CHAR_BIT == 0)
		{
			*str-- = ' ';
			j++;
		}
		*n /= 2;
		i++;
	}
	str += el->acc + 1;
	return (str);
}

static char				*compute_int_right(t_printf_args *el, char *str,
							long long *n)
{
	char				*str2;

	str2 = str;
	if (el->wi != 0 && el->acc + 1 < el->wi)
	{
		while (el->wi-- != el->acc + 1)
			*str++ = ' ';
		*str++ = (el->pl == 0 ? '1' : '0');
		str = compute_int_fill_n(el, str, n);
	}
	else
	{
		*str++ = (el->pl == 0 ? '1' : '0');
		str = compute_int_fill_n(el, str, n);
	}
	*str = '\0';
	return (str2);
}

static char				*compute_int(t_printf_args *el, char *str,
							long long *n)
{
	char				*str2;

	*str = '\0';
	if (el->al == 1)
	{
		str2 = str;
		*str++ = (el->pl == 0 ? '1' : '0');
		str = compute_int_fill_n(el, str, n);
		if (el->wi != 0 && el->acc + 1 < el->wi)
			while (el->wi-- != el->acc + 1)
				*str++ = ' ';
		*str = '\0';
		return (str2);
	}
	return (compute_int_right(el, str, n));
}

char					*ft_printf_fill_b_llong(t_printf_args *el, long long n)
{
	char				*str;

	el->pl = (n < 0 ? 0 : 1);
	n = (n < 0 ? -(n + 1) : n);
	get_n_length(n, &el->len);
	el->acc_d = 1;
	el->acc = sizeof(long long) * CHAR_BIT - 1 + sizeof(long long) - 1;
	el->len = el->acc + 1;
	if (el->wi != 0 && el->acc + 1 < el->wi)
		el->len = el->wi;
	else
		el->ze = 0;
	if (!(str = ft_strnew(el->len)))
		return (NULL);
	return (compute_int(el, str, &n));
}
