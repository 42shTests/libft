#include <stdint.h>
#include <string.h>
#include <stdarg.h>
#include "libftprintf.h"

char				*compute_hexa_fill_n_common(t_printf_args *el, char *str,
						size_t *len_n, char is_null)
{
	if (el->sh == 1 && is_null != 0)
	{
		*str++ = '0';
		*str++ = (el->type == 'X' ? 'X' : 'x');
	}
	if (el->acc_d != 0 && *len_n < el->acc)
	{
		while (el->acc-- != *len_n)
			*str++ = '0';
	}
	return (str);
}

char				*ft_printf_fill_x(t_printf_args *el, va_list ap)
{
	char			*str;

	if (el->si == 'l' || el->type == ' ' || el->type == 'O')
		str = ft_printf_fill_x_long(el, va_arg(ap, unsigned long));
	else if (el->si == 'H')
		str = ft_printf_fill_x_short(el,\
			(unsigned char)va_arg(ap, unsigned int));
	else if (el->si == 'h')
		str = ft_printf_fill_x_short(el,\
			(unsigned short)va_arg(ap, unsigned int));
	else if (el->si == 'L')
		str = ft_printf_fill_x_llong(el, va_arg(ap, unsigned long long));
	else if (el->si == 'j')
		str = ft_printf_fill_x_intmax(el, va_arg(ap, uintmax_t));
	else if (el->si == 'z')
		str = ft_printf_fill_x_intmax(el, va_arg(ap, size_t));
	else
		str = ft_printf_fill_x_int(el, va_arg(ap, unsigned int));
	return (str);
}


char				*ft_printf_array_fill_x(t_printf_args *el, void *ap,
						int *index)
{
	char			*str;

	(*index)++;
	if (el->si == 'l' || el->type == ' ' || el->type == 'O')
		str = ft_printf_fill_x_long(el, *((unsigned long *)ap));
	else if (el->si == 'H')
		str = ft_printf_fill_x_short(el,\
			(unsigned char)(*((unsigned int *)ap)));
	else if (el->si == 'h')
		str = ft_printf_fill_x_short(el,\
			(unsigned short)(*((unsigned int *)ap)));
	else if (el->si == 'L')
		str = ft_printf_fill_x_llong(el, *((unsigned long long *)ap));
	else if (el->si == 'j')
		str = ft_printf_fill_x_intmax(el, *((uintmax_t *)ap));
	else if (el->si == 'z')
		str = ft_printf_fill_x_intmax(el, *((size_t *)ap));
	else
		str = ft_printf_fill_x_int(el, *((unsigned int *)ap));
	return (str);
}
