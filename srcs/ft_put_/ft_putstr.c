/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouvel <anouvel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/25 16:28:00 by anouvel           #+#    #+#             */
/*   Updated: 2016/02/25 16:32:58 by anouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Display a char * in the standard out file descriptor.
** @param	s		the char * to print
*/

void	ft_putstr(const char *s)
{
	write(1, s, ft_strlen(s));
}
