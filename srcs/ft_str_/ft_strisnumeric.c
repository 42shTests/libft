#include "libft.h"

int	ft_strisnumeric(char const *str)
{
	char const	*ptr;

	ptr = str;
	while(*ptr)
	{
		if (str == ptr)
		{
			if (ft_isdigit(*ptr) == 0 && *ptr != '-' && *ptr != '+')
				return (0);
		}
		else if (ft_isdigit(*ptr) == 0)
			return (0);
		ptr++;
	}
	return (1);
}
