#include "libft.h"

/*
** This functions may pop `len` arguments from `argv` starting
** at element number `start`. It returns the number of argument
** it has succeeded to pop.
*/

size_t	ft_array_pop(char ***argv, size_t start, size_t len)
{
	size_t	i;
	size_t	k;

	i = 0;
	while (i < len && (*argv)[start])
	{
		ft_memdel((void **)&(*argv)[start]);
		k = 0;
		while ((*argv)[start + k + 1])
		{
			(*argv)[start + k] = (*argv)[start + k + 1];
			k++;
		}
		(*argv)[start + k] = NULL;
		i++;
	}
	return (i);
}
