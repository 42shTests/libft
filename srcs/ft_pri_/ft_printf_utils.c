#include <string.h>
#include "libftprintf.h"

char			*ft_printf_strprefixfree(char *str, size_t strlen, char c,
					size_t len)
{
	char		*new;

	if (!(new = ft_strnew(strlen + len)))
		return (NULL);
	ft_memset(new, c, len);
	ft_memmove(new + len, str, strlen);
	ft_memdel((void **)&str);
	return (new);
}

char			*ft_printf_strsuffixfree(char *str, size_t strlen, char c,
					size_t len)
{
	char		*new;

	if (!(new = ft_strnew(strlen + len)))
		return (NULL);
	ft_memmove(new, str, strlen);
	ft_memset(new + strlen, c, len);
	ft_memdel((void **)&str);
	return (new);
}

char			*ft_printf_strprefix(char *str, size_t strlen, char c,
					size_t len)
{
	char		*new;

	if (!(new = ft_strnew(strlen + len)))
		return (NULL);
	ft_memset(new, c, len);
	ft_memmove(new + len, str, strlen);
	return (new);
}

char			*ft_printf_strsuffix(char *str, size_t strlen, char c,
					size_t len)
{
	char		*new;

	if (!(new = ft_strnew(strlen + len)))
		return (NULL);
	ft_memmove(new, str, strlen);
	ft_memset(new + strlen, c, len);
	return (new);
}

char			*ft_printf_empty_string(void)
{
	char		*str;

	if (!(str = ft_strnew(0)))
		return (NULL);
	str[0] = '\0';
	return (str);
}
