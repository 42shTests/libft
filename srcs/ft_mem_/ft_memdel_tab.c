/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabmemdel.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgigault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/21 14:39:10 by jgigault          #+#    #+#             */
/*   Updated: 2016/02/21 14:39:11 by jgigault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libftprintf.h"

void	ft_tabmemdel(void ***ap)
{
	size_ti;

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
