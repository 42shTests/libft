#include <stdint.h>
#include <string.h>
#include <stdarg.h>
#include "libftprintf.h"

char				*ft_printf_fill_o(t_printf_args *el, va_list ap)
{
	char			*str;

	if (el->si == 'l' || el->type == ' ' || el->type == 'O')
		str = ft_printf_fill_o_long(el, va_arg(ap, unsigned long));
	else if (el->si == 'H')
		str = ft_printf_fill_o_short(el,\
			(unsigned char)va_arg(ap, unsigned int));
	else if (el->si == 'h')
		str = ft_printf_fill_o_short(el,\
			(unsigned short)va_arg(ap, unsigned int));
	else if (el->si == 'L')
		str = ft_printf_fill_o_llong(el, va_arg(ap, unsigned long long));
	else if (el->si == 'j')
		str = ft_printf_fill_o_intmax(el, va_arg(ap, uintmax_t));
	else if (el->si == 'z')
		str = ft_printf_fill_o_intmax(el, va_arg(ap, size_t));
	else
		str = ft_printf_fill_o_int(el, va_arg(ap, unsigned int));
	return (str);
}

char				*ft_printf_array_fill_o(t_printf_args *el, void *ap,
						int *index)
{
	char			*str;

	(*index)++;
	if (el->si == 'l' || el->type == ' ' || el->type == 'O')
		str = ft_printf_fill_o_long(el, *((unsigned long *)ap));
	else if (el->si == 'H')
		str = ft_printf_fill_o_short(el,\
			(unsigned char)(*((unsigned int *)ap)));
	else if (el->si == 'h')
		str = ft_printf_fill_o_short(el,\
			(unsigned short)(*((unsigned int *)ap)));
	else if (el->si == 'L')
		str = ft_printf_fill_o_llong(el, *((unsigned long long *)ap));
	else if (el->si == 'j')
		str = ft_printf_fill_o_intmax(el, *((uintmax_t *)ap));
	else if (el->si == 'z')
		str = ft_printf_fill_o_intmax(el, *((size_t *)ap));
	else
		str = ft_printf_fill_o_int(el, *((unsigned int *)ap));
	return (str);
}
