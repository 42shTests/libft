#include <string.h>
#include "libftprintf.h"

static void				ft_printf_conv_fmt_digit_0(t_printf_args *el)
{
	el->ze = 1;
}

static void				ft_printf_conv_fmt_digit_1(unsigned int n,
							t_printf_args *el)
{
	el->wi = el->wi * 10 + n;
}

static void				ft_printf_conv_fmt_digit_2(unsigned int n,
							t_printf_args *el)
{
	el->acc = el->acc * 10 + n;
}

void					ft_printf_conv_fmt_digit(char const c, short *step,
							t_printf_args *el)
{
	if (c == '0' && *step == 0)
		ft_printf_conv_fmt_digit_0(el);
	else
	{
		if (*step == 0)
			*step = 1;
		if (*step == 1)
		{
			if (el->wi_wc == 1)
				el->wi_wc = 2;
			ft_printf_conv_fmt_digit_1((size_t)(c - 48), el);
		}
		else if (*step == 2)
		{
			if (el->acc_wc == 1)
				el->acc_wc = 2;
			ft_printf_conv_fmt_digit_2((size_t)(c - 48), el);
		}
	}
}
