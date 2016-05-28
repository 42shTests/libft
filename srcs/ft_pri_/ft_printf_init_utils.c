#include "libftprintf.h"

static void				ft_printf_add_arg_default(t_printf_args *el)
{
	el->type = ' ';
	el->pl = 0;
	el->ze = 0;
	el->wi_wc = 0;
	el->wi = 0;
	el->acc_wc = 0;
	el->acc_d = 0;
	el->acc = 0;
	el->si = ' ';
	el->len = 0;
	el->export = NULL;
}

static t_printf_args	*ft_printf_add_arg_init(char const *fmt,
							size_t *i,
							size_t *j)
{
	t_printf_args		*el;

	if (!(el = (t_printf_args *)ft_memalloc(sizeof(t_printf_args))))
		return (NULL);
	ft_printf_add_arg_default(el);
	if (*(fmt + *i) == '%')
	{
		el->type = *(fmt + *j);
		if (*(fmt + *j) != 'n')
			ft_printf_conv_fmt(fmt, i, j, el);
	}
	else
	{
		if (!(el->export = ft_strsub(fmt, *i, *j - *i)))
			return (NULL);
		el->len = ft_strlen(el->export);
	}
	return (el);
}

t_printf_args			*ft_printf_add_arg(char const *fmt,
							size_t i, size_t j,
							t_printf_args **args)
{
	t_printf_args		*el;
	t_printf_args		*last;

	if (!(el = ft_printf_add_arg_init(fmt, &i, &j)))
		return (NULL);
	el->next = NULL;
	if (*args)
	{
		last = *args;
		while (last->next)
			last = last->next;
		last->next = el;
	}
	else
		*args = el;
	return (el);
}

char					ft_printf_is_conv_char(char const c)
{
	if (c == 'd' || c == 'D'
		|| c == 'i'
		|| c == 'e' || c == 'E'
		|| c == 'g' || c == 'G'
		|| c == 'u' || c == 'U'
		|| c == 'o' || c == 'O'
		|| c == 'x' || c == 'X'
		|| c == 's' || c == 'S'
		|| c == 'c' || c == 'C'
		|| c == '%'
		|| c == 'p'
		|| c == 'n'
		|| c == 'r' || c == 'a' || c == 'b')
		return (1);
	return (0);
}

char					ft_printf_is_mod_char(char const c)
{
	if (c == 'h' || c == 'l' || c == 'j' || c == 'z'
		|| c == '.' || c == '#' || c == ' ' || c == '-' || c == '+'
		|| (c >= '0' && c <= '9')
		|| c == '*')
		return (1);
	return (0);
}
