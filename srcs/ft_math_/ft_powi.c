#include "libft.h"

int			ft_powi(int n, int exp)
{
	int		res;

	res = 1;
	while (exp-- > 0)
		res = res * n;
	return (res);
}
