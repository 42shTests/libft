#include "list.h"

#include <stdbool.h>
#define FALSE	0
#define TRUE	1

#include <stdlib.h>
#include <strings.h>

#include <stdio.h>

/*
** The structure representation of a string.
*/
typedef struct	s_list_char
{
	t_list		list;
	char		c;
}				t_list_char;

t_list		*list_char_create_one(const char c)
{
	t_list_char *new;

	new = (t_list_char *)malloc(sizeof(t_list_char));
	if (new == NULL)
		return (NULL);
	new->c = c;
	INIT_LIST_HEAD(&new->list);
	return (&new->list);
}

void		list_char_delete_one(t_list *node)
{
	t_list_char *container;

	container = CONTAINER_OF(node, t_list_char, list);
	free(container);
}

void		list_char_delete(const t_list * const list_head)
{
	t_list	*pos, *save;

	pos = list_head->next;
	save = pos->next;
	while ( pos != list_head )
	{
		list_char_delete_one(pos);

		pos = save;
		save = save->next;
	}
}

bool		string_to_list_char(const char *str, t_list *out_list)
{
	t_list	*new;
	size_t	str_size;
	size_t	str_index;

	INIT_LIST_HEAD(out_list);
	str_size = strlen(str);
	str_index = 0;
	while (str_index < str_size)
	{
		new = list_char_create_one(str[str_index]);
		if (new == NULL)
			return FALSE;
		list_push_back(new, out_list);
		str_index++;
	}
	return TRUE;
}

static void			list_display (const t_list * const list_head)
{
	t_list			*pos;
	t_list_char		*container;

	printf ("list:\n");

	pos = list_head->next;
	while ( pos != list_head )
	{
		container = CONTAINER_OF (pos, t_list_char, list);
		printf ("%c", container->c);

		pos = pos->next;
	}
	printf ("\n");
}

int main(int argc, char **argv)
{
	t_list	list;
	int		i;

	i = 0;
	while (i < argc)
	{
		if (string_to_list_char(argv[i], &list))
		{
			list_display(&list);
			list_char_delete(&list);
		}
		else
			fprintf(stderr, "string_to_list_char() failed on %s\n", argv[i]);

		i++;
	}
	return 0;
}
