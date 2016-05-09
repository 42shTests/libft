/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   file    : t_container.c                                                  */
/*                                                                            */
/*   author  : anouvel <adrien.nouvel@outlook.com>                            */
/*                                                                            */
/*   created : 2016/05/09 15:52:00 by anouvel                                 */
/*   updated : 2016/05/09 16:04:40 by anouvel                                 */
/*                                                                            */
/* ************************************************************************** */

typedef struct	s_container
{
	t_list		*head;
	t_list		*tail;

	t_list		*cur;

	size_t		size;
}				t_container;

t_container_new();
t_container_del();

t_container_push_front(t_container *c, t_list *l);
t_container_push_back(t_list *l);


t_container_next();
t_container_prev();

t_container_del_front();
t_container_del_back();


// delete cur and set cur to prev
t_container_del_cur();

// f = compareTo (-1 < 0 < 1)
t_container_sort(*(void)f());

// use t_list->idx
t_container_get_index();


int main(void)
{
	t_container	*c;

	t_container_new(c);

	int tab[10] = (1, 2, 3, 4, 5, 6, 7, 8);

	while (i < 10)
	{
		t_container_push_front(c, t_list_new(tab[i]m sizeof(int)));
		i++;
	}

	t_container_del(&c);
	
	return (0);
}
