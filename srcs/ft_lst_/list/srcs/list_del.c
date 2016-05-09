# include "list.h"

void	t__list_del(t_list *prev, t_list *next)
{
	prev->next = next;
	next->prev = prev;
}

void	list_del(t_list *entry)
{
	t__list_del(entry->prev, entry->next);
	INIT_LIST_HEAD(entry);
}
