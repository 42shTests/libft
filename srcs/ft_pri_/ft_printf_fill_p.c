#include <string.h>
#include <stdarg.h>
#include "libftprintf.h"

static size_t			get_n_length(unsigned long long n, size_t *len)
{
	if (n == 0)
		*len = 1;
	else
	{
		*len = 0;
		while (n != 0)
		{
			(*len)++;
			n = n / 16;
		}
	}
	return (*len);
}

static char				*compute_hexa_fill_n(t_printf_args *el, char *str,
							unsigned long long *n, size_t *len_n)
{
	short				mod;

	*str++ = '0';
	*str++ = 'x';
	if (el->acc_d == 2)
		return (str);
	if (el->acc_d != 0 && *len_n < el->acc)
		while (el->acc-- != *len_n)
			*str++ = '0';
	if (*n == 0)
		*str++ = (el->acc_d == 2 ? ' ' : '0');
	else
	{
		str += *len_n - 1;
		while (*n != 0)
		{
			mod = (*n % 16);
			*str = ft_tolower((mod < 10 ? mod + '0' : mod + '7'));
			str--;
			*n /= 16;
		}
		str += *len_n + 1;
	}
	return (str);
}

static char				*compute_hexa_right(t_printf_args *el, char *str,
							unsigned long long *n, size_t *len_n)
{
	char				*str2;

	str2 = str;
	if (el->wi != 0
		&& (*len_n > el->acc ? *len_n : el->acc)
		+ 2 < el->wi)
	{
		while (el->wi-- != (*len_n > el->acc ? *len_n : el->acc)
			+ 2)
			*str++ = (el->ze == 1 ? '0' : ' ');
		str = compute_hexa_fill_n(el, str, n, len_n);
	}
	else
		str = compute_hexa_fill_n(el, str, n, len_n);
	*str = '\0';
	return (str2);
}

static char				*compute_hexa(t_printf_args *el, char *str,
							unsigned long long *n, size_t *len_n)
{
	char *str2;

	*str = '\0';
	if (el->al == 1)
	{
		str2 = str;
		str = compute_hexa_fill_n(el, str, n, len_n);
		if (el->wi != 0 && (*len_n > el->acc ? *len_n : el->acc)
			+ 2 < el->wi)
			while (el->wi-- != (*len_n > el->acc
				? *len_n : el->acc) + 2)
				*str++ = ' ';
		*str = '\0';
		return (str2);
	}
	return (compute_hexa_right(el, str, n, len_n));
}

char					*ft_printf_fill_p(t_printf_args *el,
							unsigned long long n)
{
	char				*str;
	size_t				len_n;

	len_n = get_n_length(n, &el->len);
	if (el->wi != 0 && el->ze == 1 && el->wi > el->acc && el->al == 0)
	{
		el->acc = el->wi - 2;
		el->acc_d = 1;
		el->wi = 0;
	}
	el->len += 2;
	if (n == 0 && el->acc_d == 1 && el->acc == 0)
	{
		el->acc_d = 2;
		len_n--;
		el->len--;
	}
	if (el->acc_d == 1 && el->acc > 0 && len_n < el->acc)
		el->len = el->acc + 2;
	if (el->wi != 0 && (len_n > el->acc ? len_n : el->acc)
		+ 2 < el->wi)
		el->len = el->wi;
	if (!(str = ft_strnew(el->len)))
		return (NULL);
	return (compute_hexa(el, str, &n, &len_n));
}
