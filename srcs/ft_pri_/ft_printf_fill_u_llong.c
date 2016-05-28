#include <string.h>
#include "libftprintf.h"

static void				get_n_length(unsigned long long n, size_t *len)
{
	if (n == 0)
		*len = 1;
	else
	{
		*len = 0;
		while (n != 0)
		{
			(*len)++;
			n = n / 10;
		}
	}
}

static char				*compute_int_fill_n(t_printf_args *el, char *str,
							unsigned long long *n, size_t *len_n)
{
	unsigned long long	n2;

	if (el->acc_d != 0 && *len_n < el->acc)
		while (el->acc-- != *len_n)
			*str++ = '0';
	if (*n == 0)
		*str++ = (el->acc_d == 2 ? ' ' : '0');
	else
	{
		n2 = *n;
		str += *len_n - 1;
		while (n2 != 0)
		{
			*str-- = (n2 % 10) + 48;
			n2 /= 10;
		}
		str += *len_n + 1;
	}
	return (str);
}

static char				*compute_int_right(t_printf_args *el, char *str,
							unsigned long long *n, size_t *len_n)
{
	char				*str2;

	str2 = str;
	if (el->wi != 0
		&& (*len_n > el->acc ? *len_n : el->acc)\
		+ (el->pl != 0 ? 1 : 0) < el->wi)\
	{
		if (el->ze == 1)
			el->ze = 2;
		while (el->wi-- != (*len_n > el->acc ? *len_n : el->acc)\
			+ (el->pl != 0 ? 1 : 0))
			*str++ = (el->ze != 0 && el->acc == 0 ? '0' : ' ');
		str = compute_int_fill_n(el, str, n, len_n);
	}
	else
		str = compute_int_fill_n(el, str, n, len_n);
	*str = '\0';
	return (str2);
}

static char				*compute_int(t_printf_args *el, char *str,
							unsigned long long *n, size_t *len_n)
{
	char *str2;

	*str = '\0';
	if (el->al == 1)
	{
		str2 = str;
		str = compute_int_fill_n(el, str, n, len_n);
		if (el->wi != 0
			&& *len_n + (el->pl != 0 ? 1 : 0) < el->wi)
			while (el->wi-- != *len_n + (el->pl != 0 ? 1 : 0))
				*str++ = ' ';
		*str = '\0';
		return (str2);
	}
	return (compute_int_right(el, str, n, len_n));
}

char					*ft_printf_fill_u_llong(t_printf_args *el,
							unsigned long long n)
{
	char				*str;
	size_t				len_n;

	get_n_length(n, &el->len);
	len_n = el->len;
	if (el->acc_d == 1)
	{
		if (n == 0 && el->acc == 0)
		{
			el->acc_d = 2;
			el->len = 0;
		}
		else if (el->len < el->acc)
			el->len = el->acc;
	}
	if (el->wi != 0
		&& (len_n > el->acc ? len_n : el->acc) < el->wi)
		el->len = el->wi;
	if (!(str = ft_strnew(el->len)))
		return (NULL);
	return (compute_int(el, str, &n, &len_n));
}
