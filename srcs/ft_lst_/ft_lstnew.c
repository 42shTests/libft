/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 14:21:10 by anouvel           #+#    #+#             */
/*   Updated: 2016/02/25 16:23:07 by anouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *data, size_t size)
{
	t_list *list;

	list = (t_list *)malloc(sizeof(t_list));
	if (!list)
		return (NULL);
	if (data)
	{
		list->data = malloc(sizeof(data) * size);
		ft_bzero(list->data, size);
		list->data = ft_memcpy(list->data, data, size);
		list->size = size;
	}
	else
	{
		list->data = NULL;
		list->size = 0;
	}
	list->next = NULL;
	return (list);
}
