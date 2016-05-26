#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	str_size;
	char	*str;

	if (s1 == NULL)
		return (NULL);
	str_size = ft_strlen(s1);
	str = (char *)malloc((str_size + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ft_memcpy(str, s1, str_size);
	str[str_size] = 0;
	return (str);
}
