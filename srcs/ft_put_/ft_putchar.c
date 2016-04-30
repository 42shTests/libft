/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouvel <anouvel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/25 16:23:58 by anouvel           #+#    #+#             */
/*   Updated: 2016/02/25 16:26:18 by anouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Display a character in the standard out file descriptor.
** @param	c		the character to print
*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
