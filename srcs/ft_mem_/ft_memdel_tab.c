#include "libft.h"

void	ft_memdel_tab(void ***ap)
{
	size_t	i;

	if (*ap != NULL)
	{
		i = 0;
		while ((*ap)[i])
		{
			ft_memdel((void **)&(*ap)[i]);
			i++;
		}
		ft_memdel((void **)&(*ap));
		*ap = NULL;
	 }
}
