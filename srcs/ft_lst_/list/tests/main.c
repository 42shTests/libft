typedef struct	s_struct
{
	int		num;
	t_list	list;
}				t_struct;

typedef struct	s_list_head
{
	size_t	size;
	t_list	list;
}				t_list_head;

int main()
{
	t_list		list_head;
	t_struct	*new;

	list_head.next = &list_head;
	list_head.prev = &list_head;

	new = new_create(42);
	list_pushback(&list_head, &new->list);

  	return 0;
}
