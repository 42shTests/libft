/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 15:47:51 by anouvel           #+#    #+#             */
/*   Updated: 2014/11/27 11:52:39 by anouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*found_str(const char *s, char c, int i)
{
	char	*str;
	int		j;
	int		leni;
	int		len;

	leni = i;
	len = 0;
	while (s[leni] != '\0' && s[leni] != c)
	{
		leni++;
		len++;
	}
	str = ft_memalloc(len + 1);
	j = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		str[j] = s[i];
		j++;
		i++;
	}
	str[i] = '\0';
	return (str);
}

static int		nb_underchain(char const *s, char c)
{
	int		nb;
	int		i;
	char	*str;

	str = (char *)s;
	nb = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			i++;
		else
		{
			nb++;
			while (str[i] != '\0' && str[i] != (char)c)
				i++;
		}
	}
	return (nb);
}

static char		**create_tab(const char *s, char c)
{
	char **tab;

	tab = (char **)malloc(sizeof(char **) * (nb_underchain(s, c) + 1));
	if (!tab)
		return (NULL);
	else
		tab[nb_underchain(s, c)] = 0;
	return (tab);
}

static void		put_tab(char **tab, int k, char *str, size_t len)
{
	tab[k] = ft_memalloc(len + 1);
	ft_strcpy(tab[k], str);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		k;
	char	**res;
	char	*str;

	res = create_tab(s, c);
	i = 0;
	k = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			str = found_str(s, c, i);
			while (s[i] != '\0' && s[i] != (char)c)
				i++;
			put_tab(res, k, str, ft_strlen(str) + 1);
			k++;
		}
	}
	return (res);
}
