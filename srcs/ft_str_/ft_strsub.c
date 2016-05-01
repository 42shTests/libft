/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 14:35:20 by anouvel           #+#    #+#             */
/*   Updated: 2016/02/25 16:21:19 by anouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;

	i = 0;
	if (!(str = ft_strnew(len)))
		return (NULL);
	else
	{
		while (i < len)
		{
			str[i] = s[start];
			i++;
			start++;
		}
		return (str);
	}
}
