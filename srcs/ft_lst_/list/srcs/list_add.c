# include "list.h"

void	t_list_add(t_list *new, t_list *prev, t_list *next)
{
	next->prev = new;
	new->next = next;
	new->prev = prev;
	prev->next = new;
}

void	list_add(t_list *new, t_list *head)
{
	t_list_add(new, head, head->next);
}

void	list_add_tail(t_list *new, t_list *head)
{
	t_list_add(new, head->prev, head);
}
