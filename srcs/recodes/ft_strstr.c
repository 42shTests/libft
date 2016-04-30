/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 17:19:40 by anouvel           #+#    #+#             */
/*   Updated: 2014/11/10 18:26:41 by anouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strstr(const char *s1, const char *s2)
{
	int i;
	int j;
	int len1;
	int len2;

	i = 0;
	len1 = ft_strlen((char *)s1);
	len2 = ft_strlen((char *)s2);
	if (len2 > len1)
		return (NULL);
	else if (!s2 || ft_strlen(s2) == 0)
		return ((char *)s1);
	while (s1[i] != '\0')
	{
		while (s1[i] == s2[j] && s2[j] != '\0')
		{
			i++;
			j++;
		}
		if (s2[j] == '\0')
			return ((char *)s1 + i - ft_strlen((char *)s2));
		i++;
		j = 0;
	}
	return (0);
}
