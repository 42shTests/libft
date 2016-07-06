#include "libftprintf.h"

int		is_conversion_symbol(char c)
{
	if (c == '%' || c == 'p' || c == 'n' || c == 'a' || c == 'r' || c == 's' || c == 'S' || c == 'c' || c == 'C' || c == 'u' || c == 'U' || c == 'd' || c == 'i' || c == 'D' || c == 'b' || c == 'B' || c == 'x' || c == 'X' || c == 'o' || c == 'O')
		return (1);
	return (0);
}
int		count_symbols(char const *format)
{
	int				i;
	int				cnt;

	cnt = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			while (format[i] && is_conversion_symbol(format[i]) == 0)
				i++;
			if (format[i])
				cnt++;
			else
				break ;
		}
		i++;
	}
	return (cnt);
}

void	my_logger(char const *format, ...)
{
	void			**array;
	va_list			pa;
	int				total;
	int				i;
	uintmax_t		val;

	total = count_symbols(format);
	array = (void **)malloc(sizeof(void *) * (total + 1));
	array[0] = NULL;
	i = 0;
	va_start(pa, format);
	while(i < total)
	{
		val = va_arg(pa, uintmax_t);
		array[i++] = (void *)&val;
		array[i] = NULL;
	}
	va_end(pa);
	ft_printf_array(format, array);
}

int		main(void)
{
	int				i;
	void			**array;
	char			character = '!';
	char			*str = "je suis là";
	wchar_t			*str2 = L"ζéЩ";
	int				numeric = 42;
	int				numeric2 = 298;
	unsigned int	unsigned_numeric = 4294967295;
	long long		numeric3 = 9223372036854775807;
	char			*ptr = str;

	i = 0;
	array = (void **)malloc(sizeof(void *) * 20);
	array[i++] = (void *)&character;
	array[i++] = (void *)&str;
	array[i++] = (void *)&str2;
	array[i++] = (void *)&numeric;
	array[i++] = (void *)&numeric; //octal
	array[i++] = (void *)&numeric; //hexa
	array[i++] = (void *)&numeric; //binary representation
	array[i++] = (void *)&numeric2;
	array[i++] = (void *)&numeric3;
	array[i++] = (void *)&unsigned_numeric;
	array[i++] = (void *)&ptr;
	array[i++] = NULL;

	ft_printf_array("---------\n%c\n%s\n%S\n%d\n%o\n%x\n%b\n%hhd\n%lld\n%u\n%p\n", array);
	my_logger("---------\n%c\n%s\n%S\n%d\n%o\n%x\n%b\n%hhd\n%lld\n%u\n%p\n", character, str, str2, numeric, numeric, numeric, numeric, numeric2, numeric3, unsigned_numeric, ptr);
	ft_printf("---------\n%c\n%s\n%S\n%d\n%o\n%x\n%b\n%hhd\n%lld\n%u\n%p\n", character, str, str2, numeric, numeric, numeric, numeric, numeric2, numeric3, unsigned_numeric, ptr);

	return (0);
}
