#ifndef LIST_H
# define LIST_H

# include <stddef.h>

# undef OFFSETOF
# define OFFSETOF(type, member) ((size_t) &((type *)0)->member)

/*
** Casts a member of a structure out to the containing structure
** @param p: ptr		the pointer to the member.
** @param t: type		the type of the container struct this is embedded in.
** @param m: member		the name of the member within the struct.
*/

# undef CONTAINER_OF
#define CONTAINER_OF(ptr, type, member) ({   		              \
		const typeof( ((type *)0)->member ) *__mptr = (ptr); 	   \
		(type *)( (char *)__mptr - OFFSETOF(type,member) );})

/*
** Double linked list implementation
*/

typedef struct		s_list
{
	struct s_list	*prev;
	struct s_list	*next;
}					t_list;

void				t_list_add(t_list *new, t_list *prev, t_list *next);

void				t_list_del(t_list *prev, t_list *next);
void				t_list_del_init(t_list *entry);

void				t_list_splice(t_list *list, t_list *head);

/*
** Initialize list
*/

# define LIST_HEAD_INIT(name) { &(name), &(name) }

# define LIST_HEAD(name) t_list	name = LIST_HEAD_INIT(name)

# define INIT_LIST_HEAD(ptr) (ptr)->next = (ptr); (ptr)->prev = (ptr);

/*
** Add the node new at the begining of the list pointed by head.
*/
void		list_push_front(t_list *new, t_list *head);

/*
** Add the node new at the end of the list pointed by head.
*/
void		list_push_back(t_list *new, t_list *head);

/*
** Delete the list pointed by entry.
*/
void		list_del(t_list *entry);

/*
** list move: move an element from one list to another
** TODO check if it is necessary
*/

void		list_move(t_list *list, t_list *head);
void		list_move_tail(t_list *list, t_list *head);

/*
** Check if the list pointed by head is empty.
*/
int			list_is_empty(t_list *head);

/*
** Get the length of the list pointed by head.
*/
size_t		list_size(t_list *head);

/*
** Concatenate the list pointed by list at the begining of the list head.
*/
void		list_splice(t_list *list, t_list *head);

/*
** Get the nth node of the list pointed by head.
*/
t_list		*list_nth(const t_list *head, const int index);

/*
** list slice: get a part of a list
*/
t_list		*list_slice(t_list *new, t_list *head, const int index, int len);

/*
** list insert
*/
void		list_insert(t_list *new, t_list *head, unsigned int index);

/*
** list foreach: iterate through element of a list
*/
# define LIST_FOREACH(h, p) p=(t_list*)h;while((p=p->next)&&p!=h)

# define LIST_FOREACH_PREV(head,pos) pos=head;while((pos=pos->prev)&&pos!=head)

/*
**# define LIST_FOREACH_SAFE(head, pos, save) save=head->next;\
**		   while((pos=save)&&pos!=head&&(save=save->next))
*/










#endif
