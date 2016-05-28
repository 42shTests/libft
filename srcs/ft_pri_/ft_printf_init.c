#include "libftprintf.h"

int						ft_printf_params(t_printf_params **params)
{
	*params = (t_printf_params *)ft_memalloc(sizeof(t_printf_params));
	if (*params == NULL)
		return (-1);
	(*params)->fd = STDOUT;
	(*params)->fd_dynamic = 0;
	(*params)->export_dynamic = 0;
	return (0);
}

static int				ft_printf_init_j(char const *fmt,
							t_printf_args **args,
							size_t *i,
							size_t *j)
{
	if (*i != *j)
		if (!(ft_printf_add_arg(fmt, *j, *i, args)))
			return (-1);
	*j = *i + 1;
	while (*(fmt + *j) != '\0')
	{
		if (ft_printf_is_conv_char(*(fmt + *j)) == 1)
		{
			if (!(ft_printf_add_arg(fmt, *i, *j, args)))
				return (-1);
			(*j)++;
			*i = *j;
			return (0);
		}
		else if (ft_printf_is_mod_char(*(fmt + *j)) == 0)
		{
			if (!(ft_printf_add_arg(fmt, *i, *j, args)))
				return (-1);
			(*j)++;
			*i = *j - 1;
			return (0);
		}
		(*j)++;
	}
	return (0);
}

int						ft_printf_init(char const *fmt, t_printf_args **args)
{
	size_t				i;
	size_t				j;

	i = 0;
	j = 0;
	while (*(fmt + i) != '\0')
	{
		if (*(fmt + i) == '%')
		{
			if (ft_printf_init_j(fmt, args, &i, &j) == -1)
				return (-1);
			i = j;
		}
		else
			i++;
		if (*(fmt + i) == '\0')
			if (!(ft_printf_add_arg(fmt, j, i, args)))
				return (-1);
	}
	return (0);
}
