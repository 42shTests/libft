#include <stdarg.h>
#include "libftprintf.h"

static int			ft_printf_set_r(t_printf_params **params, int n, int *index)
{
	(*index)++;
	if (n == -1)
		return (-1);
	(*params)->fd = n;
	(*params)->fd_dynamic = 1;
	return (0);
}

static void			ft_printf_set_a(t_printf_params **params,
						t_printf_args *el, char **ptr, int *index)
{
	(*index)++;
	if ((*params)->fd_dynamic == 0)
		(*params)->fd_dynamic = -1;
	el->export_dynamic = ptr;
	(*params)->export_dynamic = 1;
}

static void			ft_printf_wildcard(t_printf_args *el, void *ap, int *index)
{
	int				value;

	(*index)++;
	if (el->wi_wc > 0)
	{
		value = (int)ap;
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
		value = (int)ap;
		if (el->acc_wc == 1 && value >= 0)
			el->acc = (size_t)value;
		else
			el->acc_d = 0;
	}
}

static int			ft_printf_fill2(t_printf_params **params,
						t_printf_args *el, void *ap, int *index)
{
	if (el->type == 'p')
	{
		(*index)++;
		el->export = ft_printf_fill_p(el, *((unsigned long long *)ap));
	}
	else if (el->type == 'n')
		el->n = (int *)ap;
	else if (el->type == 'a')
		ft_printf_set_a(params, el, (char **)ap, index);
	else if (el->type == 'r')
	{
		if (ft_printf_set_r(params, (int)ap, index) == -1)
			return (-1);
	}
	else if (el->type != ' ')
		el->export = ft_printf_fill_empty(el, el->type);
	if (el->export == NULL && el->type != 'n' && el->type != 'r'
		&& el->type != 'a')
		return (-1);
	return (0);
}

int					ft_printf_array_fill(t_printf_params **params,
						t_printf_args *el, void *ap, int *index)
{
	if (el->wi_wc > 0 || el->acc_wc > 0)
		ft_printf_wildcard(el, ap, index);
	if (el->type == '%')
		el->export = ft_printf_fill_default(el);
	else if (el->type == 's' || el->type == 'S')
		el->export = ft_printf_array_fill_s(el, ap, index);
	else if (el->type == 'c' || el->type == 'C')
		el->export = ft_printf_array_fill_c(el, ap, index);
	else if (el->type == 'u' || el->type == 'U')
		el->export = ft_printf_array_fill_u(el, ap, index);
	else if (el->type == 'd' || el->type == 'i' || el->type == 'D')
		el->export = ft_printf_array_fill_d(el, ap, index);
	else if (el->type == 'b' || el->type == 'B')
		el->export = ft_printf_array_fill_b(el, ap, index);
	else if (el->type == 'x' || el->type == 'X')
		el->export = ft_printf_array_fill_x(el, ap, index);
	else if (el->type == 'o' || el->type == 'O')
		el->export = ft_printf_array_fill_o(el, ap, index);
	else
		return (ft_printf_fill2(params, el, ap, index));
	if (el->export == NULL && el->type != 'n' && el->type != 'r'
		&& el->type != 'a')
		return (-1);
	return (0);
}
