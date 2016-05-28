#include <errno.h>
#include "libftprintf.h"

void				*ft_printf_utils_eilseq(void)
{
	errno = EILSEQ;
	return (NULL);
}

int					ft_printf_return_free(t_printf_params *params,
						t_printf_args *args, int ret)
{
	t_printf_args	*el;

	ft_memdel((void **)&params);
	while (args)
	{
		el = args;
		args = args->next;
		if (el->export)
			ft_memdel((void **)&el->export);
		ft_memdel((void **)&el);
	}
	return (ret);
}

char				*ft_printf_utils_accuracy(t_printf_args *el, char *str,
						size_t *len_n, char c)
{
	size_t			temp;

	temp = el->acc;
	while (el->acc-- != *len_n)
		*str++ = c;
	el->acc = temp;
	return (str);
}

char				*ft_printf_utils_accuracy_bin(size_t step, size_t len,
						char *str, char c)
{
	size_t			i;

	i = 0;
	while (i < len)
	{
		if ((i + 1) % step == 0)
			*str++ = ' ';
		*str++ = c;
		i++;
	}
	return (str);
}
