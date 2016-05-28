#include <stdint.h>
#include <stdarg.h>
#include "libftprintf.h"

char				*ft_printf_fill_u(t_printf_args *el, va_list ap)
{
	char			*str;

	if (el->type == 'U')
		el->si = 'l';
	if (el->si == ' ')
		str = ft_printf_fill_u_int(el, va_arg(ap, unsigned int));
	else if (el->si == 'H')
		str = ft_printf_fill_u_short(el,\
			(unsigned char)va_arg(ap, unsigned int));
	else if (el->si == 'h')
		str = ft_printf_fill_u_short(el,\
			(unsigned short)va_arg(ap, unsigned int));
	else if (el->si == 'l')
		str = ft_printf_fill_u_long(el, va_arg(ap, unsigned long));
	else if (el->si == 'L')
		str = ft_printf_fill_u_llong(el, va_arg(ap, unsigned long long));
	else if (el->si == 'j')
		str = ft_printf_fill_u_intmax(el, va_arg(ap, uintmax_t));
	else if (el->si == 'z')
		str = ft_printf_fill_u_intmax(el, va_arg(ap, size_t));
	else
		str = ft_printf_fill_u_int(el, va_arg(ap, unsigned int));
	return (str);
}
