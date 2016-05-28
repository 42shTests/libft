#include "libftprintf.h"

static char			*ft_printf_export_fill_str(t_printf_args *el, char *str)
{
	size_t			i;

	i = 0;
	while (el)
	{
		if (el->export && el->type != 'a')
		{
			ft_memcpy(str + i, el->export, el->len);
			i += el->len;
		}
		el = el->next;
	}
	str[i] = '\0';
	return (str);
}

static int			ft_printf_export(t_printf_params *params,
						t_printf_args *args, int len)
{
	char			*str;

	if (params->export_dynamic == 1)
	{
		if (!(str = ft_strnew(len)))
			return (-1);
		str = ft_printf_export_fill_str(args, str);
		while (args)
		{
			if (args->type == 'a')
			{
				if (!(*args->export_dynamic = ft_memdup(str, len)))
					return (-1);
			}
			args = args->next;
		}
		ft_memdel((void **)&str);
	}
	return (len);
}

int					ft_printf_display(t_printf_params *params,
						t_printf_args *args)
{
	int				len;
	t_printf_args	*el;

	len = 0;
	el = args;
	while (el)
	{
		if (el->export)
			len += el->len;
		el = el->next;
	}
	len = ft_printf_export(params, args, len);
	el = args;
	if (len != -1 && params->fd_dynamic != -1)
		while (el)
		{
			if (el->export && el->type != 'a')
				ft_putmem_fd(el->export, el->len, params->fd);
			else if (el->type == 'n')
				*el->n = len;
			el = el->next;
		}
	return (ft_printf_return_free(params, args, len));
}
