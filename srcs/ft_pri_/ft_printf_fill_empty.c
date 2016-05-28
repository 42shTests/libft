#include "libftprintf.h"

static char			*ft_printf_fill_empty_width(t_printf_args *el, char *str)
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

char				*ft_printf_fill_empty(t_printf_args *el, char c)
{
	char			*str;

	el->len = 1;
	if (!(str = ft_strnew(1)))
		return (NULL);
	str[0] = c;
	str[1] = '\0';
	if (el->wi != 0)
		str = ft_printf_fill_empty_width(el, str);
	if (!str)
		return (NULL);
	return (str);
}
