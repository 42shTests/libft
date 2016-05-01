/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 14:02:59 by anouvel           #+#    #+#             */
/*   Updated: 2014/11/08 17:20:15 by anouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	int				res;

	res = 0;
	if (s1 && s2)
	{
		i = 0;
		while (i < n && res == 0)
		{
			res = ((unsigned char *)s1)[i] - ((unsigned char *)s2)[i];
			i++;
		}
	}
	return (res);
}
