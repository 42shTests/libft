# include "list.h"

void	t__list_add(t_list *new,
							t_list *prev,
							t_list *next)
{
	next->prev = new;
	new->next = next;
	new->prev = prev;
	prev->next = new;
}

void	list_add(t_list *new, t_list *head)
{
	t__list_add(new, head, head->next);
}

void	list_add_tail(t_list *new, t_list *head)
{
	t__list_add(new, head->prev, head);
}
