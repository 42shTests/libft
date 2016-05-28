#include <limits.h>
#include <stdarg.h>
#include "libftprintf.h"

static void				get_str_length(char *str, size_t *len)
{
	if (str == NULL)
		*len = 6;
	else
	{
		*len = 0;
		while (*str != '\0')
		{
			(*len)++;
			str++;
		}
	}
}

static char				*compute_str_fill(char *str, char *src, size_t *len_str)
{
	if (src == NULL)
		str = ft_strncpy(str, "(null)", *len_str);
	else
		str = ft_strncpy(str, src, *len_str);
	str += *len_str;
	return (str);
}

static char				*compute_str(t_printf_args *el, char *str,
							char *src, size_t *len_str)
{
	char				*str2;

	str2 = str;
	if (el->al == 1)
	{
		str = compute_str_fill(str, src, len_str);
		if (el->wi != 0
			&& *len_str < el->wi)
			while (el->wi-- != *len_str)
				*str++ = ' ';
	}
	else
	{
		if (el->wi != 0
			&& *len_str < el->wi)
			while (el->wi-- != *len_str)
				*str++ = (el->ze == 1 ? '0' : ' ');
		str = compute_str_fill(str, src, len_str);
	}
	return (str2);
}

char					*ft_printf_fill_s_default(t_printf_args *el, char *src)
{
	size_t				len_str;
	char				*str;

	get_str_length(src, &el->len);
	len_str = el->len;
	if (el->acc_d == 1 && len_str > el->acc)
	{
		el->len = el->acc;
		len_str = el->acc;
	}
	if (el->wi != 0 && el->len < el->wi)
		el->len = el->wi;
	if (!(str = ft_strnew(el->len)))
		return (NULL);
	return (compute_str(el, str, src, &len_str));
}

char					*ft_printf_fill_s(t_printf_args *el, va_list ap)
{
	if (el->type == 'S' || el->si == 'l')
		return (ft_printf_fill_s_long(el, va_arg(ap, wchar_t *)));
	else
		return (ft_printf_fill_s_default(el, va_arg(ap, char *)));
	return (NULL);
}
