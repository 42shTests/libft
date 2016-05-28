#include <string.h>
#include "libftprintf.h"

static char				ft_printf_is_size_gt(char c1, char c2)
{
	if (c1 == c2)
		return (1);
	if (c1 == 'h' && (c2 == 'l' || c2 == 'L' || c2 == 'z' || c2 == 'j'))
		return (0);
	if (c1 == 'z' && (c2 == 'l' || c2 == 'L' || c2 == 'j'))
		return (0);
	return (1);
}

static char				ft_printf_is_size_char(char c)
{
	if (c == 'h' || c == 'H'
		|| c == 'l' || c == 'L'
		|| c == 'j'
		|| c == 'z')
		return (1);
	return (0);
}

static short			ft_printf_conv_fmt2(t_printf_args *el,
							char const c, short *step)
{
	if (c == '+')
		el->pl = 1;
	else if (c == '#')
		el->sh = 1;
	else if (c == ' ')
	{
		el->ze = 0;
		if (el->pl != 1)
			el->pl = 2;
	}
	else if (c == '-')
		el->al = 1;
	else if (c == '.')
	{
		el->acc = 0;
		el->acc_d = 1;
		*step = 2;
	}
	else if (ft_isdigit(c) == 1)
		ft_printf_conv_fmt_digit(c, step, el);
	else
		return (0);
	return (1);
}

static void				ft_printf_conv_fmt3(t_printf_args *el,
							char const c, short *step)
{
	if (ft_printf_is_size_char(c) == 1)
	{
		if (ft_printf_is_size_gt(c, el->si) == 1)
		{
			if (ft_toupper(c) == ft_toupper(el->si))
				el->si = ft_toupper(c);
			else
				el->si = c;
		}
	}
	else if (c == '*')
	{
		if (*step == 2)
			el->acc_wc = 1;
		else
			el->wi_wc = 1;
	}
}

void					ft_printf_conv_fmt(char const *fmt,
							size_t *i,
							size_t *j,
							t_printf_args *el)
{
	size_t				k;
	short				step;

	step = 0;
	k = *i + 1;
	while (k <= *j - 1)
	{
		if (ft_printf_conv_fmt2(el, fmt[k], &step) == 0)
			ft_printf_conv_fmt3(el, fmt[k], &step);
		k++;
	}
	if (el->acc_d == 1 && el->acc == 0 && el->acc_wc != 1
		&& (el->type == 'd' || el->type == 'i' || el->type == 'D'
		|| el->type == 'u' || el->type == 'U' || el->type == 'o'
		|| el->type == 'O' || el->type == 'x' || el->type == 'X'
		|| el->type == 'p'))
		el->ze = 0;
}
