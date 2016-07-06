#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdint.h>
# include <stdarg.h>
# include <string.h>
# include <wchar.h>
# include "libft.h"

typedef struct				s_printf_params
{
	int						fd;
	char					fd_dynamic;
	char					export_dynamic;
}							t_printf_params;

typedef struct				s_printf_args
{
	char					type;
	char					al;
	char					pl;
	char					ze;
	char					si;
	char					sh;
	char					wi_wc;
	size_t					wi;
	char					acc_wc;
	size_t					acc_d;
	size_t					acc;
	size_t					len;
	size_t					temp;
	char					*export;
	char					**export_dynamic;
	int						*n;
	struct s_printf_args	*next;
}							t_printf_args;

int							ft_printf(char const *format, ...);
int							ft_printf_array(char const *format, void **array);
int							ft_printf_params(t_printf_params **params);
char						*ft_printf_empty_string(void);
void						ft_printf_exit_malloc(void);
char						ft_printf_is_conv_char(char const c);
char						ft_printf_is_mod_char(char const c);
t_printf_args				*ft_printf_add_arg(char const *fmt, size_t i,
								size_t j, t_printf_args **args);
int							ft_printf_init(char const *format,
								t_printf_args **args);
int							ft_printf_display(t_printf_params *params,
								t_printf_args *args);
int							ft_printf_return_free(t_printf_params *params,
								t_printf_args *args, int ret);
int							ft_printf_fill(t_printf_params **params,
								t_printf_args *el, va_list ap);
int							ft_printf_array_fill(t_printf_params **params,
								t_printf_args *el, void *ap, int *index);
void						ft_printf_conv_fmt(char const *fmt,
								size_t *i,
								size_t *j,
								t_printf_args *el);
void						ft_printf_conv_fmt_digit(char const c,
								short *step, t_printf_args *el);
char						*ft_printf_strprefixfree(char *str,
								size_t strlen, char c, size_t len);
char						*ft_printf_strsuffixfree(char *str,
								size_t strlen, char c, size_t len);
char						*ft_printf_strprefix(char *str,
								size_t strlen, char c, size_t len);
char						*ft_printf_strsuffix(char *str,
								size_t strlen, char c, size_t len);
char						*ft_printf_fill_default(t_printf_args *el);
char						*ft_printf_fill_empty(t_printf_args *el, char c);
char						*ft_printf_fill_d(t_printf_args *el, va_list ap);
char						*ft_printf_array_fill_d(t_printf_args *el, void *ap,
								int *index);
char						*ft_printf_fill_b(t_printf_args *el, va_list ap);
char						*ft_printf_array_fill_b(t_printf_args *el, void *ap,
								int *index);
char						*ft_printf_fill_u(t_printf_args *el, va_list ap);
char						*ft_printf_array_fill_u(t_printf_args *el, void *ap,
								int *index);
char						*ft_printf_fill_s(t_printf_args *el, va_list ap);
char						*ft_printf_array_fill_s(t_printf_args *el, void *ap,
								int *index);
char						*ft_printf_fill_c(t_printf_args *el, va_list ap);
char						*ft_printf_array_fill_c(t_printf_args *el, void *ap,
								int *index);
char						*ft_printf_fill_x(t_printf_args *el, va_list ap);
char						*ft_printf_array_fill_x(t_printf_args *el, void *ap,
								int *index);
char						*ft_printf_fill_o(t_printf_args *el, va_list ap);
char						*ft_printf_array_fill_o(t_printf_args *el, void *ap,
								int *index);
char						*ft_printf_fill_p(t_printf_args *el,
								unsigned long long n);
char						*ft_printf_fill_s_long(t_printf_args *el,
								wchar_t *str);
char						*ft_printf_fill_s_default(t_printf_args *el,
								char *str);
char						*ft_printf_fill_d_short(t_printf_args *el,
								short n);
char						*ft_printf_fill_d_int(t_printf_args *el,
								int n);
char						*ft_printf_fill_d_long(t_printf_args *el,
								long n);
char						*ft_printf_fill_d_llong(t_printf_args *el,
								long long n);
char						*ft_printf_fill_d_intmax(t_printf_args *el,
								intmax_t n);
char						*ft_printf_fill_b_char(t_printf_args *el,
								char n);
char						*ft_printf_fill_b_short(t_printf_args *el,
								short n);
char						*ft_printf_fill_b_int(t_printf_args *el,
								int n);
char						*ft_printf_fill_b_long(t_printf_args *el,
								long n);
char						*ft_printf_fill_b_llong(t_printf_args *el,
								long long n);
char						*ft_printf_fill_b_intmax(t_printf_args *el,
								intmax_t n);
char						*ft_printf_fill_u_short(t_printf_args *el,
								unsigned short n);
char						*ft_printf_fill_u_int(t_printf_args *el,
								unsigned int n);
char						*ft_printf_fill_u_long(t_printf_args *el,
								unsigned long n);
char						*ft_printf_fill_u_llong(t_printf_args *el,
								unsigned long long n);
char						*ft_printf_fill_u_intmax(t_printf_args *el,
								uintmax_t n);
char						*ft_printf_fill_o_short(t_printf_args *el,
								unsigned short n);
char						*ft_printf_fill_o_int(t_printf_args *el,
								unsigned int n);
char						*ft_printf_fill_o_long(t_printf_args *el,
								unsigned long n);
char						*ft_printf_fill_o_llong(t_printf_args *el,
								unsigned long long n);
char						*ft_printf_fill_o_intmax(t_printf_args *el,
								uintmax_t n);
char						*ft_printf_fill_x_short(t_printf_args *el,
								unsigned short n);
char						*ft_printf_fill_x_int(t_printf_args *el,
								unsigned int n);
char						*ft_printf_fill_x_long(t_printf_args *el,
								unsigned long n);
char						*ft_printf_fill_x_llong(t_printf_args *el,
								unsigned long long n);
char						*ft_printf_fill_x_intmax(t_printf_args *el,
								uintmax_t n);
void						*ft_printf_utils_eilseq(void);
char						*ft_printf_utils_accuracy(t_printf_args *el,
								char *str, size_t *len_n, char c);
char						*ft_printf_utils_accuracy_bin(size_t step,
								size_t len, char *str, char c);
char						*compute_hexa_fill_n_common(t_printf_args *el,
								char *str, size_t *len_n, char is_null);

#endif
