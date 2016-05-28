#include <string.h>
#include <stdarg.h>
#include "libftprintf.h"

static size_t			get_n_length(unsigned short n, size_t *len)
{
	if (n == 0)
		*len = 1;
	else
	{
		*len = 0;
		while (n != 0)
		{
			(*len)++;
			n = n / 8;
		}
	}
	return (*len);
}

static char				*compute_octal_fill_n(t_printf_args *el, char *str,
							unsigned short *n, size_t *len_n)
{
	unsigned short		n2;

	if (el->sh == 1 && *n != 0)
		*str++ = '0';
	if (el->acc_d != 0 && *len_n < el->acc)
	{
		el->temp = el->acc;
		while (el->acc-- != *len_n)
			*str++ = '0';
		el->acc = el->temp;
	}
	if (*n == 0)
		*str++ = (el->acc_d == 2 ? ' ' : '0');
	else
	{
		n2 = *n;
		str += *len_n - 1;
		while (n2 != 0)
		{
			*str-- = (n2 % 8) + 48;
			n2 /= 8;
		}
		str += *len_n + 1;
	}
	return (str);
}

static char				*compute_octal_right(t_printf_args *el, char *str,
							unsigned short *n, size_t *len_n)
{
	char				*str2;

	str2 = str;
	if (el->wi != 0
		&& (*len_n > el->acc ? *len_n : el->acc) + el->sh < el->wi)
	{
		while (el->wi-- != (*len_n > el->acc ? *len_n : el->acc) + el->sh)
			*str++ = (el->ze == 1 ? '0' : ' ');
		str = compute_octal_fill_n(el, str, n, len_n);
	}
	else
		str = compute_octal_fill_n(el, str, n, len_n);
	*str = '\0';
	return (str2);
}

static char				*compute_octal(t_printf_args *el, char *str,
							unsigned short *n, size_t *len_n)
{
	char *str2;

	*str = '\0';
	if (el->al == 1)
	{
		str2 = str;
		str = compute_octal_fill_n(el, str, n, len_n);
		if (el->wi != 0
			&& (*len_n > el->acc ? *len_n : el->acc) + el->sh < el->wi)
			while (el->wi-- != (*len_n > el->acc ? *len_n : el->acc) + el->sh)
				*str++ = ' ';
		*str = '\0';
		return (str2);
	}
	return (compute_octal_right(el, str, n, len_n));
}

char					*ft_printf_fill_o_short(t_printf_args *el,
							unsigned short n)
{
	char				*str;
	size_t				len_n;

	len_n = get_n_length(n, &el->len);
	if (el->sh == 1 && (!(n == 0 && el->acc == 0)))
		el->len += 1;
	else if (el->sh == 1)
		el->sh = 0;
	else if (n == 0 && el->acc_d == 1 && el->acc == 0)
	{
		el->acc_d = 2;
		el->len = 0;
	}
	if (el->acc_d == 1 && el->acc > 0 && len_n < el->acc)
	{
		el->len += el->acc - len_n - el->sh;
		el->sh = 0;
	}
	if (el->wi != 0 && (len_n > el->acc ? len_n : el->acc)
		+ el->sh < el->wi)
		el->len = el->wi;
	if (!(str = ft_strnew(el->len + 10)))
		return (NULL);
	return (compute_octal(el, str, &n, &len_n));
}
