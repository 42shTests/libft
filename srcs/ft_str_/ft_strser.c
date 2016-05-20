#include "libft.h"

char	*ft_strser(const char *s)
{
	char	*ret;
	char	*str;
	size_t	i;
	size_t	j;

	if (!s || !(str = ft_strtrim(s)))
		return (NULL);
	if (!(ret = ft_strnew(ft_strlen(str))))
		return (NULL);
	i = -1;
	j = 0;
	while (str[++i])
	{
		if (str[i] != ' ' && str[i] != '\t')
			ret[j++] = str[i];
		else
		{
			if (i >= 1 && (str[i - 1] != ' ' && str[i - 1] != '\t'))
				ret[j++] = ' ';
		}
	}
	free(str);
	str = NULL;
	return (ret);
}
