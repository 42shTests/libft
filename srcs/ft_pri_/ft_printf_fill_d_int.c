#include <string.h>
#include "libftprintf.h"

static void				get_n_length(int n, size_t *len)
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
							int *n, size_t *len_n)
{
	unsigned int		n2;

	if (*n < 0 && el->ze != 2)
		*str++ = '-';
	else if (el->pl != 0 && el->ze == 0)
		*str++ = (el->pl == 1 ? '+' : ' ');
	if (el->acc_d != 0 && *len_n < el->acc)
		str = ft_printf_utils_accuracy(el, str, len_n, '0');
	if (*n == 0)
		*str++ = (el->acc_d == 2 ? ' ' : '0');
	else
	{
		n2 = (*n < 0 ? -*n : *n);
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
							int *n, size_t *len_n)
{
	char				*str2;

	str2 = str;
	if (el->wi != 0
		&& (*len_n > el->acc ? *len_n : el->acc)\
		+ (*n < 0 || el->pl != 0 ? 1 : 0) < el->wi)\
	{
		if (el->ze == 1 && el->acc == 0)
		{
			if (*n < 0)
				*str++ = '-';
			else if (el->pl != 0)
				*str++ = (el->pl == 1 ? '+' : ' ');
			el->ze = 2;
		}
		while (el->wi-- != (*len_n > el->acc ? *len_n : el->acc)\
			+ (*n < 0 || el->pl != 0 ? 1 : 0))
			*str++ = (el->ze != 0 && el->acc == 0 ? '0' : ' ');
		str = compute_int_fill_n(el, str, n, len_n);
	}
	else
		str = compute_int_fill_n(el, str, n, len_n);
	*str = '\0';
	return (str2);
}

static char				*compute_int(t_printf_args *el, char *str,
							int *n, size_t *len_n)
{
	char *str2;

	*str = '\0';
	if (el->al == 1)
	{
		str2 = str;
		el->ze = 0;
		str = compute_int_fill_n(el, str, n, len_n);
		if (el->wi != 0
			&& (*len_n > el->acc ? *len_n : el->acc)
			+ (*n < 0 || el->pl != 0 ? 1 : 0) < el->wi)
			while (el->wi-- != (*len_n > el->acc ?
				*len_n : el->acc) + (*n < 0 || el->pl != 0 ? 1 : 0))
				*str++ = ' ';
		*str = '\0';
		return (str2);
	}
	return (compute_int_right(el, str, n, len_n));
}

char					*ft_printf_fill_d_int(t_printf_args *el, int n)
{
	char				*str;
	size_t				len_n;

	get_n_length(n, &el->len);
	len_n = el->len;
	if (n < 0)
		el->pl = 0;
	if (el->acc_d == 1 && n == 0 && el->acc == 0)
	{
		el->acc_d = 2;
		el->len = 0;
	}
	else if (el->acc_d == 1 && el->len < el->acc)
		el->len = el->acc;
	if (n < 0 || el->pl != 0)
		(el->len)++;
	if (el->wi != 0
		&& (len_n > el->acc ? len_n : el->acc)
		+ (n < 0 || el->pl != 0 ? 1 : 0) < el->wi)
		el->len = el->wi;
	else
		el->ze = 0;
	if (!(str = ft_strnew(el->len)))
		return (NULL);
	return (compute_int(el, str, &n, &len_n));
}
