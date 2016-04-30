/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 18:11:51 by anouvel           #+#    #+#             */
/*   Updated: 2014/11/10 11:49:44 by anouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int len;

	if (s)
	{
		len = (int)ft_strlen(s);
		while (len >= 0)
		{
			if (s[len] == c)
				return (&(((char *)s)[len]));
			len--;
		}
	}
	return (NULL);
}
