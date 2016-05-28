#include <stdarg.h>
#include "libftprintf.h"

int					ft_printf(char const *format, ...)
{
	va_list			ap;
	t_printf_params	*params;
	t_printf_args	*args;
	t_printf_args	*el;
	int				ret;

	args = NULL;
	if (ft_printf_init(format, &args) == -1 || ft_printf_params(&params) == -1)
		return (-1);
	el = args;
	va_start(ap, format);
	while (el)
	{
		if ((ret = ft_printf_fill(&params, el, ap)) != 0)
			return (ft_printf_return_free(params, args, -1));
		el = el->next;
	}
	va_end(ap);
	return (ft_printf_display(params, args));
}
