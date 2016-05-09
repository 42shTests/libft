/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   file    : t_list.c                                                       */
/*                                                                            */
/*   author  : anouvel <adrien.nouvel@outlook.com>                            */
/*                                                                            */
/*   created : 2016/05/09 15:52:00 by anouvel                                 */
/*   updated : 2016/05/09 16:04:07 by anouvel                                 */
/*                                                                            */
/* ************************************************************************** */

typedef struct	s_list
{
	void		*content;
	size_t		size;
	t_list		*prev;
	t_list		*next;

	int			idx;

}				t_list;

t_list_new(content, size);
t_list_del();
