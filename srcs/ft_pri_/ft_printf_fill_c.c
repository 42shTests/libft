#include <limits.h>
#include <wchar.h>
#include <stdarg.h>
#include "libftprintf.h"

static char			*ft_printf_fill_c_width(t_printf_args *el, char *new,
						size_t *len)
{
	if (el->al == 0)
		new = ft_printf_strprefixfree(new, *len, (el->ze == 0 ? ' ' : '0'),\
			el->wi - *len);
	else
		new = ft_printf_strsuffixfree(new, *len, ' ', el->wi - *len);
	el->len = el->wi;
	return (new);
}

static char			*ft_printf_fill_c_default(t_printf_args *el, int c)
{
	char			*new;
	size_t			len;

	if (!(new = ft_strnew(1)))
		return (NULL);
	new[0] = (char)c;
	new[1] = '\0';
	len = 1;
	el->len = 1;
	if (el->wi != 0 && len < el->wi)
		if (!(new = ft_printf_fill_c_width(el, new, &len)))
			return (NULL);
	return (new);
}

static char			*ft_printf_fill_c_string(t_printf_args *el, char *str)
{
	char			*new;
	size_t			len;

	new = NULL;
	len = ft_strlen(str);
	el->len = len;
	if (el->acc != 0 && len > el->acc)
	{
		if (!(new = ft_strsub(str, 0, el->acc)))
			return (NULL);
		len = el->acc;
		el->len = len;
		ft_memdel((void **)&str);
	}
	else
		new = str;
	if (el->wi != 0 && len < el->wi)
		if (!(new = ft_printf_fill_c_width(el, new, &len)))
			return (NULL);
	return (new);
}

static char			*ft_printf_fill_c_long(t_printf_args *el, wchar_t c)
{
	short			ret;
	char			tmp[MB_LEN_MAX];
	char			*new;

	if (c == 0)
		return (ft_printf_fill_c_default(el, 0));
	ret = ft_wctomb(tmp, c);
	if (ret == -1)
		return ((char *)ft_printf_utils_eilseq());
	if (ret > 0)
	{
		if (!(new = ft_strnew(ret)))
			return (NULL);
		ret = 0;
		while (tmp[ret])
		{
			new[ret] = tmp[ret];
			ret++;
		}
		new[ret] = '\0';
		if (el->acc < (size_t)ret)
			el->acc = ret;
		return (ft_printf_fill_c_string(el, new));
	}
	return (ft_printf_fill_c_default(el, 0));
}

char				*ft_printf_fill_c(t_printf_args *el, va_list ap)
{
	char			*str;

	str = NULL;
	if (el->type == 'C' || el->si == 'l')
		str = ft_printf_fill_c_long(el, (wchar_t)va_arg(ap, wint_t));
	else if (el->si == 'H')
		str = ft_printf_fill_c_default(el, (char)va_arg(ap, int));
	else if (el->si == 'h')
		str = ft_printf_fill_c_default(el, (short)va_arg(ap, int));
	else
		str = ft_printf_fill_c_default(el, va_arg(ap, int));
	return (str);
}

char				*ft_printf_array_fill_c(t_printf_args *el, void *ap,
						int *index)
{
	char			*str;

	(*index)++;
	str = NULL;
	if (el->type == 'C' || el->si == 'l')
		str = ft_printf_fill_c_long(el, (wchar_t)(*((wint_t *)ap)));
	else if (el->si == 'H')
		str = ft_printf_fill_c_default(el, (char)(*((int *)ap)));
	else if (el->si == 'h')
		str = ft_printf_fill_c_default(el, (short)(*((int *)ap)));
	else
		str = ft_printf_fill_c_default(el, *((int *)ap));
	return (str);
}
