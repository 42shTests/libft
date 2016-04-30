/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 18:18:34 by anouvel           #+#    #+#             */
/*   Updated: 2014/11/10 13:52:05 by anouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	unsigned int i1;
	unsigned int i2;

	i1 = 0;
	i2 = 0;
	if (ft_strcmp(s2, "") == 0)
		return ((char *)s1);
	while (s1[i1] != '\0' && i1 < n)
	{
		if (s1[i1] == s2[i2])
		{
			i1++;
			i2++;
			if (i2 == ft_strlen(s2))
				return (&(((char *)s1)[i1 - i2]));
		}
		else
		{
			i2 = 0;
			i1++;
		}
	}
	return (NULL);
}
