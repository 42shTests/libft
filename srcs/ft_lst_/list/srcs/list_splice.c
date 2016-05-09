# include "list.h"

void	t__list_splice(t_list *list, t_list *head)
{
	t_list	*first;
	t_list	*last;
	t_list	*at;

	first = list->next;
	last = list->prev;
	at = head->next;
	first->prev = head;
	head->next = first;
	last->next = at;
	at->prev = last;
}

void	list_splice(t_list *list, t_list *head)
{
	if (!list_empty(list))
	{
		t__list_splice(list, head);
		INIT_LIST_HEAD(list);
	}
}
