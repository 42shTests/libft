#include "libftprintf.h"

static char			*ft_printf_fill_default_width(t_printf_args *el, char *str)
{
	char			*new;

	if (el->al == 0)
		new = ft_printf_strprefix(str, 1, (el->ze == 0 ? ' ' : '0'),\
			el->wi - 1);
	else
		new = ft_printf_strsuffix(str, 1, ' ', el->wi - 1);
	el->len = el->wi;
	return (new);
}

char				*ft_printf_fill_default(t_printf_args *el)
{
	char			*str;

	el->len = 1;
	if (el->wi != 0)
		str = ft_printf_fill_default_width(el, "%");
	else
		str = ft_strdup("%");
	if (!str)
		return (NULL);
	return (str);
}
