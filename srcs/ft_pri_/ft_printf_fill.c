#include <stdarg.h>
#include "libftprintf.h"

static int			ft_printf_set_r(t_printf_params **params, int n)
{
	if (n == -1)
		return (-1);
	(*params)->fd = n;
	(*params)->fd_dynamic = 1;
	return (0);
}

static void			ft_printf_set_a(t_printf_params **params,
						t_printf_args *el, char **ptr)
{
	if ((*params)->fd_dynamic == 0)
		(*params)->fd_dynamic = -1;
	el->export_dynamic = ptr;
	(*params)->export_dynamic = 1;
}

static void			ft_printf_wildcard(t_printf_args *el, va_list ap)
{
	int				value;

	if (el->wi_wc > 0)
	{
		value = va_arg(ap, int);
		if (el->wi_wc == 1)
		{
			if (value < 0)
			{
				el->al = 1;
				value = -value;
			}
			el->wi = (size_t)value;
		}
	}
	if (el->acc_wc > 0)
	{
		value = va_arg(ap, int);
		if (el->acc_wc == 1 && value >= 0)
			el->acc = (size_t)value;
		else
			el->acc_d = 0;
	}
}

static int			ft_printf_fill2(t_printf_params **params,
						t_printf_args *el, va_list ap)
{
	if (el->type == 'p')
		el->export = ft_printf_fill_p(el, va_arg(ap, unsigned long long));
	else if (el->type == 'n')
		el->n = va_arg(ap, int *);
	else if (el->type == 'a')
		ft_printf_set_a(params, el, va_arg(ap, char **));
	else if (el->type == 'r')
	{
		if (ft_printf_set_r(params, va_arg(ap, int)) == -1)
			return (-1);
	}
	else if (el->type != ' ')
		el->export = ft_printf_fill_empty(el, el->type);
	if (el->export == NULL && el->type != 'n' && el->type != 'r'
		&& el->type != 'a')
		return (-1);
	return (0);
}

int					ft_printf_fill(t_printf_params **params,
						t_printf_args *el, va_list ap)
{
	if (el->wi_wc > 0 || el->acc_wc > 0)
		ft_printf_wildcard(el, ap);
	if (el->type == '%')
		el->export = ft_printf_fill_default(el);
	else if (el->type == 's' || el->type == 'S')
		el->export = ft_printf_fill_s(el, ap);
	else if (el->type == 'c' || el->type == 'C')
		el->export = ft_printf_fill_c(el, ap);
	else if (el->type == 'u' || el->type == 'U')
		el->export = ft_printf_fill_u(el, ap);
	else if (el->type == 'd' || el->type == 'i' || el->type == 'D')
		el->export = ft_printf_fill_d(el, ap);
	else if (el->type == 'b' || el->type == 'B')
		el->export = ft_printf_fill_b(el, ap);
	else if (el->type == 'x' || el->type == 'X')
		el->export = ft_printf_fill_x(el, ap);
	else if (el->type == 'o' || el->type == 'O')
		el->export = ft_printf_fill_o(el, ap);
	else
		return (ft_printf_fill2(params, el, ap));
	if (el->export == NULL && el->type != 'n' && el->type != 'r'
		&& el->type != 'a')
		return (-1);
	return (0);
}
