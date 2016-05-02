/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouvel <adrien.nouvel@outlook.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/02 13:37:57 by anouvel           #+#    #+#             */
/*   Updated: 2016/05/02 13:40:06 by anouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *list;

	if (!(list = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (content)
	{
		list->content = ft_memalloc(sizeof(content) * content_size);
		list->content = ft_memcpy(list->content, content, content_size);
		list->content_size = content_size;
	}
	else
	{
		list->content = NULL;
		list->content_size = 0;
	}
	list->next = NULL;
	return (list);
}
