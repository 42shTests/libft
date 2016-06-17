#include "libft.h"

/*
** This function duplicates the value `*value` and push it at the end
** of the array pointed by `***array` by re-allocating a new array.
** If the array is NULL, a new one is created.
** On failure, the function returns -1 and the array is not modified.
** On success, the function returns the new size of the array.
*/

int			ft_array_push_back(char ***array, char const *value)
{
	char	**new_array;
	size_t	total;

	if (!value || !array)
		return (-1);
	total = 0;
	if (*array)
		while ((*array)[total])
			total++;
	if ((new_array = (char **)malloc(sizeof(char *) * (total + 2))) == NULL)
		return (-1);
	total = 0;
	if (*array)
		while ((*array)[total])
		{
			if ((new_array[total] = ft_strdup((*array)[total])) == NULL)
				return (-1);
			total++;
		}
	if ((new_array[total] = ft_strdup(value)) == NULL)
		return (-1);
	new_array[total + 1] = NULL;
	ft_memdel_tab((void ***)&(*array));
	*array = new_array;
	return (total);
}
