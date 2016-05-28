#include <errno.h>
#include <limits.h>
#include <wchar.h>
#include <stdarg.h>
#include "libftprintf.h"

static char			*compute_fill_s_width(t_printf_args *el, char *new,
						size_t *len)
{
	if (el->al == 0)
		new = ft_printf_strprefixfree(new, *len,\
			(el->ze == 0 ? ' ' : '0'), el->wi - *len);
	else
		new = ft_printf_strsuffixfree(new, *len, ' ', el->wi - *len);
	el->len = el->wi;
	return (new);
}

static size_t		get_wstr_size(wchar_t *str, size_t len)
{
	size_t			i;
	size_t			len2;
	short			ret;
	char			tmp[MB_LEN_MAX];

	len2 = 0;
	i = 0;
	while (len2 <= len && str[i] != 0)
	{
		ret = ft_wctomb(tmp, str[i]);
		if (ret == -1)
			return ((size_t)-1);
		if (ret >= 0 && len2 + ret <= len)
			len2 += ret;
		i++;
	}
	return (len2);
}

static char			*set_error_invalid(void)
{
	errno = EILSEQ;
	return (NULL);
}

static int			set_accuracy(t_printf_args *el, wchar_t *src,
						size_t *len, char *str)
{
	size_t			wlen;

	if (el->acc_d == 1 && *len > el->acc)
	{
		wlen = get_wstr_size(src, el->acc);
		if (wlen == (size_t)-1)
			return (-1);
		if (!(str = ft_strsub(str, 0, wlen)))
			return (-2);
		*len = wlen;
		el->len = wlen;
	}
	return (0);
}

char				*ft_printf_fill_s_long(t_printf_args *el, wchar_t *src)
{
	char			*str;
	size_t			len;
	int				ret;

	if (src == 0)
		return (ft_printf_fill_s_default(el, NULL));
	if (!(str = ft_wcstombs(src, ft_wstrlen(src) * 4)))
		return (NULL);
	len = ft_strlen(str);
	el->len = len;
	ret = set_accuracy(el, src, &len, str);
	if (ret == -1)
		return (set_error_invalid());
	else if (ret == -2)
		return (NULL);
	if (el->wi != 0 && len < el->wi)
		if (!(str = compute_fill_s_width(el, str, &len)))
			return (NULL);
	if (!str)
		return (NULL);
	return (str);
}
