/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouvel <anouvel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/25 16:26:55 by anouvel           #+#    #+#             */
/*   Updated: 2016/02/25 16:29:18 by anouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Display a char * in the standard out file descriptor following by a newline.
** @param	s		the char * to print
*/

void	ft_putendl(const char *s)
{
	ft_putstr(s);
	ft_putchar('\n');
}
