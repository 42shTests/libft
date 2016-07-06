#include "libftprintf.h"

int					ft_printf_array(char const *format, void **array)
{
	t_printf_params	*params;
	t_printf_args	*args;
	t_printf_args	*el;
	int				i;

	args = NULL;
	if (!array)
		return (-1);
	if (ft_printf_init(format, &args) == -1 || ft_printf_params(&params) == -1)
		return (-1);
	el = args;
	i = 0;
	while (el)
	{
		if (ft_printf_array_fill(&params, el, array[i], &i) != 0)
			return (ft_printf_return_free(params, args, -1));
		el = el->next;
	}
	return (ft_printf_display(params, args));
}
