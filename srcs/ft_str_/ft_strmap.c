#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*str;

	i = 0;
	str = NULL;
	if (s && f)
	{
		str = ft_strnew(ft_strlen(s) + 1);
		while (s[i] != '\0')
		{
			str[i] = f((s[i]));
			i++;
		}
	}
	return (str);
}
