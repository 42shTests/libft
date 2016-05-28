# ---------------------------------------------------------------------------- #
# PROJECT DATA
# ---------------------------------------------------------------------------- #

NAME		=	libft.a

# ---------------------------------------------------------------------------- #

SRCS		=	ft_get_/get_next_line.c	\
				ft_arr_/ft_array_indexof.c\
				ft_arr_/ft_array_pop.c	\
				ft_ito_/ft_itoa.c		\
				ft_mem_/ft_memalloc.c	\
				ft_mem_/ft_memdel.c		\
				ft_mem_/ft_memdel_tab.c	\
				ft_pri_/ft_printf.c		\
				ft_pri_/ft_printf_display.c\
				ft_pri_/ft_printf_fill.c\
				ft_pri_/ft_printf_fill_default.c\
				ft_pri_/ft_printf_fill_empty.c\
				ft_pri_/ft_printf_fill_d.c\
				ft_pri_/ft_printf_fill_d_short.c\
				ft_pri_/ft_printf_fill_d_int.c\
				ft_pri_/ft_printf_fill_d_long.c\
				ft_pri_/ft_printf_fill_d_llong.c\
				ft_pri_/ft_printf_fill_d_intmax.c\
				ft_pri_/ft_printf_fill_b.c\
				ft_pri_/ft_printf_fill_b_char.c\
				ft_pri_/ft_printf_fill_b_short.c\
				ft_pri_/ft_printf_fill_b_int.c\
				ft_pri_/ft_printf_fill_b_long.c\
				ft_pri_/ft_printf_fill_b_llong.c\
				ft_pri_/ft_printf_fill_b_intmax.c\
				ft_pri_/ft_printf_fill_u.c\
				ft_pri_/ft_printf_fill_u_short.c\
				ft_pri_/ft_printf_fill_u_int.c\
				ft_pri_/ft_printf_fill_u_long.c\
				ft_pri_/ft_printf_fill_u_llong.c\
				ft_pri_/ft_printf_fill_u_intmax.c\
				ft_pri_/ft_printf_fill_p.c\
				ft_pri_/ft_printf_fill_s.c\
				ft_pri_/ft_printf_fill_s_long.c\
				ft_pri_/ft_printf_fill_c.c\
				ft_pri_/ft_printf_fill_x.c\
				ft_pri_/ft_printf_fill_x_short.c\
				ft_pri_/ft_printf_fill_x_int.c\
				ft_pri_/ft_printf_fill_x_long.c\
				ft_pri_/ft_printf_fill_x_llong.c\
				ft_pri_/ft_printf_fill_x_intmax.c\
				ft_pri_/ft_printf_fill_o.c\
				ft_pri_/ft_printf_fill_o_short.c\
				ft_pri_/ft_printf_fill_o_int.c\
				ft_pri_/ft_printf_fill_o_long.c\
				ft_pri_/ft_printf_fill_o_llong.c\
				ft_pri_/ft_printf_fill_o_intmax.c\
				ft_pri_/ft_printf_init.c\
				ft_pri_/ft_printf_init_conv.c\
				ft_pri_/ft_printf_init_conv_digit.c\
				ft_pri_/ft_printf_init_utils.c\
				ft_pri_/ft_printf_utils.c\
				ft_pri_/ft_printf_utils2.c\
				ft_put_/ft_putchar.c	\
				ft_put_/ft_putchar_fd.c	\
				ft_put_/ft_putstr.c		\
				ft_put_/ft_putstr_fd.c	\
				ft_put_/ft_putnbr.c		\
				ft_put_/ft_putnbr_fd.c	\
				ft_put_/ft_putendl.c	\
				ft_put_/ft_putendl_fd.c	\
				ft_str_/ft_strnew.c		\
				ft_str_/ft_strdel.c		\
				ft_str_/ft_strclr.c		\
				ft_str_/ft_strisnumeric.c\
				ft_str_/ft_strisalnum.c	\
				ft_str_/ft_striter.c	\
				ft_str_/ft_striteri.c	\
				ft_str_/ft_strmap.c		\
				ft_str_/ft_strmapi.c	\
				ft_str_/ft_strequ.c		\
				ft_str_/ft_strnequ.c	\
				ft_str_/ft_strsub.c		\
				ft_str_/ft_strjoin.c	\
				ft_str_/ft_strser.c		\
				ft_str_/ft_strtrim.c	\
				ft_str_/ft_strsplit.c	\
				recodes/ft_memset.c		\
				recodes/ft_bzero.c		\
				recodes/ft_memcpy.c		\
				recodes/ft_memccpy.c	\
				recodes/ft_memmove.c	\
				recodes/ft_memchr.c		\
				recodes/ft_memcmp.c		\
				recodes/ft_strlen.c		\
				recodes/ft_strdup.c		\
				recodes/ft_strcpy.c		\
				recodes/ft_strncpy.c	\
				recodes/ft_strcat.c		\
				recodes/ft_strncat.c	\
				recodes/ft_strlcat.c	\
				recodes/ft_strchr.c		\
				recodes/ft_strrchr.c	\
				recodes/ft_strstr.c		\
				recodes/ft_strnstr.c	\
				recodes/ft_strcmp.c		\
				recodes/ft_strncmp.c	\
				recodes/ft_atoi.c		\
				recodes/ft_isalpha.c	\
				recodes/ft_isdigit.c	\
				recodes/ft_isalnum.c	\
				recodes/ft_isascii.c	\
				recodes/ft_isprint.c	\
				recodes/ft_isspace.c	\
				recodes/ft_toupper.c	\
				recodes/ft_tolower.c	\
				ft_lst_/t_list/t_list_add.c	\
				ft_lst_/t_list/t_list_del.c	\
				ft_lst_/t_list/t_list_splice.c	\
				ft_lst_/list_push_front.c	\
				ft_lst_/list_push_back.c	\
				ft_lst_/list_del.c			\
				ft_lst_/list_is_empty.c		\
				ft_lst_/list_insert.c		\
				ft_lst_/list_size.c			\
				ft_lst_/list_move.c			\
				ft_lst_/list_nth.c			\
				ft_lst_/list_slice.c		\
				ft_lst_/list_splice.c		\

# ---------------------------------------------------------------------------- #
# PROJECT CONFIGURATION
# ---------------------------------------------------------------------------- #

CFLAGS		=	\
				-g 								\
				-Wall -Wextra -Werror			\

# >>> REQUIRED FOR LIBRARIES >>> THINK ABOUT CHANGING THE *LIBS rules

CPPFLAGS	=	\
				-I $(DIRINC)					\

LDFLAGS		=	\

LDLIBS		=	\

# GLOBAL SETUP
AR			=	ar
CC			=	clang
RM			=	rm
MKDIR		=	mkdir
MAKE		=	make

DIRSRC		=	./srcs/
DIROBJ		=	./.objs/
DIRINC		=	./incs/
DIRLIB		=	./libs/

# EXTRA COLOR
C_DFL		=	\033[0m
C_GRA		=	\033[30m
C_RED		=	\033[31m
C_GRE		=	\033[32m
C_YEL		=	\033[33m
C_BLUE		=	\033[34m
C_MAG		=	\033[35m
C_CYA		=	\033[36m
C_WHI		=	\033[37m

# ============================================================================ #

# ---------------------------------------------------------------------------- #
# SOURCES NORMALIZATION
# ---------------------------------------------------------------------------- #

SRC			=	$(addprefix $(DIRSRC), $(SRCS))
OBJ			=	$(addprefix $(DIROBJ), $(notdir $(SRC:.c=.o)))

# ---------------------------------------------------------------------------- #
# RULES
# ---------------------------------------------------------------------------- #

all			:	libs $(NAME)
	@printf "$(C_GRE)[ $(NAME) ] [ %-6s ]$(C_DFL) build completed\n" "$(MAKE)"

$(NAME)		:	$(DIROBJ) $(OBJ)
	@printf "$(C_GRE)[ $(NAME) ] [ %-6s ]$(C_DFL) linking objects\n" "$(CC)"
	@$(AR) rc $(NAME) $(OBJ)
	@printf "$(C_GRE)[ $(NAME) ] [ %-6s ]$(C_DFL) index project\n" "ranlib"
	@ranlib $(NAME)

# ---------------------------------------------------------------------------- #
# CUSTOMISABLE RULES

libs		:

fcleanlibs	:

# ---------------------------------------------------------------------------- #

clean		:
	@printf "$(C_GRE)[ $(NAME) ] [ %-6s ]$(C_DFL) remove objects\n" "$(RM)"
	@$(RM) -rf $(DIROBJ)

fclean		:	fcleanlibs clean
	@printf "$(C_GRE)[ $(NAME) ] [ %-6s ]$(C_DFL) remove binaries\n" "$(RM)"
	@$(RM) -f $(NAME)

re			:	fclean all

$(DIROBJ)	:
	@$(MKDIR) -p $(DIROBJ)

depend		:
	@sed -e '/^#start/,/^end/d' Makefile > .mftmp && mv .mftmp Makefile
	@printf "#start\n\n" >> Makefile
	@$(foreach s, $(SRC),													\
		printf '$$(DIROBJ)'										>> Makefile	&& \
		$(CC) -MM $(s) $(CPPFLAGS)								>> Makefile	&& \
																			\
		printf '\t\t@printf "$$(C_GRE)[ $(NAME) ] '				>> Makefile && \
		printf '[ %%-6s ]$$(C_DFL) " "$(CC)"\n'					>> Makefile && \
		printf '\t\t@printf "compiling $(s)\\n"\n'				>> Makefile	&& \
																			\
		printf '\t\t@$$(CC) -c $(s) -o '						>> Makefile	&& \
		printf '$(addprefix $(DIROBJ), $(notdir $(s:.c=.o))) '	>> Makefile	&& \
		printf '$$(CPPFLAGS) $$(CFLAGS) \n\n'					>> Makefile	&& \
																			\
		printf "$(C_GRE)[ $(NAME) ] [ %-6s ]$(C_DFL) " "dep"				&& \
		printf "$(s) rule generated\n"										|| \
																			\
		(sed -e '/^#start/,$$d' Makefile > .mftmp && mv .mftmp Makefile		&& \
		printf "#start\n\n"										>> Makefile	&& \
		printf "$(C_RED)[ $(NAME) ] [ %-6s ]$(C_DFL) " "dep"				&& \
		printf "$(s) rule generation failed\n"								) \
	;)
	@printf "\n#end\n" >> Makefile

.PHONY	:	 libs

# ---------------------------------------------------------------------------- #
# AUTO-GENERATED SECTION - do not modify
# ---------------------------------------------------------------------------- #

#start

$(DIROBJ)get_next_line.o: srcs/ft_get_/get_next_line.c incs/get_next_line.h \
  incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_get_/get_next_line.c\n"
		@$(CC) -c ./srcs/ft_get_/get_next_line.c -o ./.objs/get_next_line.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_array_indexof.o: srcs/ft_arr_/ft_array_indexof.c incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_arr_/ft_array_indexof.c\n"
		@$(CC) -c ./srcs/ft_arr_/ft_array_indexof.c -o ./.objs/ft_array_indexof.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_array_pop.o: srcs/ft_arr_/ft_array_pop.c incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_arr_/ft_array_pop.c\n"
		@$(CC) -c ./srcs/ft_arr_/ft_array_pop.c -o ./.objs/ft_array_pop.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_itoa.o: srcs/ft_ito_/ft_itoa.c incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_ito_/ft_itoa.c\n"
		@$(CC) -c ./srcs/ft_ito_/ft_itoa.c -o ./.objs/ft_itoa.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_memalloc.o: srcs/ft_mem_/ft_memalloc.c incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_mem_/ft_memalloc.c\n"
		@$(CC) -c ./srcs/ft_mem_/ft_memalloc.c -o ./.objs/ft_memalloc.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_memdel.o: srcs/ft_mem_/ft_memdel.c incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_mem_/ft_memdel.c\n"
		@$(CC) -c ./srcs/ft_mem_/ft_memdel.c -o ./.objs/ft_memdel.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_memdel_tab.o: srcs/ft_mem_/ft_memdel_tab.c incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_mem_/ft_memdel_tab.c\n"
		@$(CC) -c ./srcs/ft_mem_/ft_memdel_tab.c -o ./.objs/ft_memdel_tab.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_printf.o: srcs/ft_pri_/ft_printf.c incs/libftprintf.h incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_pri_/ft_printf.c\n"
		@$(CC) -c ./srcs/ft_pri_/ft_printf.c -o ./.objs/ft_printf.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_printf_display.o: srcs/ft_pri_/ft_printf_display.c incs/libftprintf.h \
  incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_pri_/ft_printf_display.c\n"
		@$(CC) -c ./srcs/ft_pri_/ft_printf_display.c -o ./.objs/ft_printf_display.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_printf_fill.o: srcs/ft_pri_/ft_printf_fill.c incs/libftprintf.h \
  incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_pri_/ft_printf_fill.c\n"
		@$(CC) -c ./srcs/ft_pri_/ft_printf_fill.c -o ./.objs/ft_printf_fill.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_printf_fill_default.o: srcs/ft_pri_/ft_printf_fill_default.c \
  incs/libftprintf.h incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_pri_/ft_printf_fill_default.c\n"
		@$(CC) -c ./srcs/ft_pri_/ft_printf_fill_default.c -o ./.objs/ft_printf_fill_default.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_printf_fill_empty.o: srcs/ft_pri_/ft_printf_fill_empty.c \
  incs/libftprintf.h incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_pri_/ft_printf_fill_empty.c\n"
		@$(CC) -c ./srcs/ft_pri_/ft_printf_fill_empty.c -o ./.objs/ft_printf_fill_empty.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_printf_fill_d.o: srcs/ft_pri_/ft_printf_fill_d.c incs/libftprintf.h \
  incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_pri_/ft_printf_fill_d.c\n"
		@$(CC) -c ./srcs/ft_pri_/ft_printf_fill_d.c -o ./.objs/ft_printf_fill_d.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_printf_fill_d_short.o: srcs/ft_pri_/ft_printf_fill_d_short.c \
  incs/libftprintf.h incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_pri_/ft_printf_fill_d_short.c\n"
		@$(CC) -c ./srcs/ft_pri_/ft_printf_fill_d_short.c -o ./.objs/ft_printf_fill_d_short.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_printf_fill_d_int.o: srcs/ft_pri_/ft_printf_fill_d_int.c \
  incs/libftprintf.h incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_pri_/ft_printf_fill_d_int.c\n"
		@$(CC) -c ./srcs/ft_pri_/ft_printf_fill_d_int.c -o ./.objs/ft_printf_fill_d_int.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_printf_fill_d_long.o: srcs/ft_pri_/ft_printf_fill_d_long.c \
  incs/libftprintf.h incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_pri_/ft_printf_fill_d_long.c\n"
		@$(CC) -c ./srcs/ft_pri_/ft_printf_fill_d_long.c -o ./.objs/ft_printf_fill_d_long.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_printf_fill_d_llong.o: srcs/ft_pri_/ft_printf_fill_d_llong.c \
  incs/libftprintf.h incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_pri_/ft_printf_fill_d_llong.c\n"
		@$(CC) -c ./srcs/ft_pri_/ft_printf_fill_d_llong.c -o ./.objs/ft_printf_fill_d_llong.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_printf_fill_d_intmax.o: srcs/ft_pri_/ft_printf_fill_d_intmax.c \
  incs/libftprintf.h incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_pri_/ft_printf_fill_d_intmax.c\n"
		@$(CC) -c ./srcs/ft_pri_/ft_printf_fill_d_intmax.c -o ./.objs/ft_printf_fill_d_intmax.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_printf_fill_b.o: srcs/ft_pri_/ft_printf_fill_b.c incs/libftprintf.h \
  incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_pri_/ft_printf_fill_b.c\n"
		@$(CC) -c ./srcs/ft_pri_/ft_printf_fill_b.c -o ./.objs/ft_printf_fill_b.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_printf_fill_b_char.o: srcs/ft_pri_/ft_printf_fill_b_char.c \
  incs/libftprintf.h incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_pri_/ft_printf_fill_b_char.c\n"
		@$(CC) -c ./srcs/ft_pri_/ft_printf_fill_b_char.c -o ./.objs/ft_printf_fill_b_char.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_printf_fill_b_short.o: srcs/ft_pri_/ft_printf_fill_b_short.c \
  incs/libftprintf.h incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_pri_/ft_printf_fill_b_short.c\n"
		@$(CC) -c ./srcs/ft_pri_/ft_printf_fill_b_short.c -o ./.objs/ft_printf_fill_b_short.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_printf_fill_b_int.o: srcs/ft_pri_/ft_printf_fill_b_int.c \
  incs/libftprintf.h incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_pri_/ft_printf_fill_b_int.c\n"
		@$(CC) -c ./srcs/ft_pri_/ft_printf_fill_b_int.c -o ./.objs/ft_printf_fill_b_int.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_printf_fill_b_long.o: srcs/ft_pri_/ft_printf_fill_b_long.c \
  incs/libftprintf.h incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_pri_/ft_printf_fill_b_long.c\n"
		@$(CC) -c ./srcs/ft_pri_/ft_printf_fill_b_long.c -o ./.objs/ft_printf_fill_b_long.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_printf_fill_b_llong.o: srcs/ft_pri_/ft_printf_fill_b_llong.c \
  incs/libftprintf.h incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_pri_/ft_printf_fill_b_llong.c\n"
		@$(CC) -c ./srcs/ft_pri_/ft_printf_fill_b_llong.c -o ./.objs/ft_printf_fill_b_llong.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_printf_fill_b_intmax.o: srcs/ft_pri_/ft_printf_fill_b_intmax.c \
  incs/libftprintf.h incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_pri_/ft_printf_fill_b_intmax.c\n"
		@$(CC) -c ./srcs/ft_pri_/ft_printf_fill_b_intmax.c -o ./.objs/ft_printf_fill_b_intmax.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_printf_fill_u.o: srcs/ft_pri_/ft_printf_fill_u.c incs/libftprintf.h \
  incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_pri_/ft_printf_fill_u.c\n"
		@$(CC) -c ./srcs/ft_pri_/ft_printf_fill_u.c -o ./.objs/ft_printf_fill_u.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_printf_fill_u_short.o: srcs/ft_pri_/ft_printf_fill_u_short.c \
  incs/libftprintf.h incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_pri_/ft_printf_fill_u_short.c\n"
		@$(CC) -c ./srcs/ft_pri_/ft_printf_fill_u_short.c -o ./.objs/ft_printf_fill_u_short.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_printf_fill_u_int.o: srcs/ft_pri_/ft_printf_fill_u_int.c \
  incs/libftprintf.h incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_pri_/ft_printf_fill_u_int.c\n"
		@$(CC) -c ./srcs/ft_pri_/ft_printf_fill_u_int.c -o ./.objs/ft_printf_fill_u_int.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_printf_fill_u_long.o: srcs/ft_pri_/ft_printf_fill_u_long.c \
  incs/libftprintf.h incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_pri_/ft_printf_fill_u_long.c\n"
		@$(CC) -c ./srcs/ft_pri_/ft_printf_fill_u_long.c -o ./.objs/ft_printf_fill_u_long.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_printf_fill_u_llong.o: srcs/ft_pri_/ft_printf_fill_u_llong.c \
  incs/libftprintf.h incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_pri_/ft_printf_fill_u_llong.c\n"
		@$(CC) -c ./srcs/ft_pri_/ft_printf_fill_u_llong.c -o ./.objs/ft_printf_fill_u_llong.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_printf_fill_u_intmax.o: srcs/ft_pri_/ft_printf_fill_u_intmax.c \
  incs/libftprintf.h incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_pri_/ft_printf_fill_u_intmax.c\n"
		@$(CC) -c ./srcs/ft_pri_/ft_printf_fill_u_intmax.c -o ./.objs/ft_printf_fill_u_intmax.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_printf_fill_p.o: srcs/ft_pri_/ft_printf_fill_p.c incs/libftprintf.h \
  incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_pri_/ft_printf_fill_p.c\n"
		@$(CC) -c ./srcs/ft_pri_/ft_printf_fill_p.c -o ./.objs/ft_printf_fill_p.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_printf_fill_s.o: srcs/ft_pri_/ft_printf_fill_s.c incs/libftprintf.h \
  incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_pri_/ft_printf_fill_s.c\n"
		@$(CC) -c ./srcs/ft_pri_/ft_printf_fill_s.c -o ./.objs/ft_printf_fill_s.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_printf_fill_s_long.o: srcs/ft_pri_/ft_printf_fill_s_long.c \
  incs/libftprintf.h incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_pri_/ft_printf_fill_s_long.c\n"
		@$(CC) -c ./srcs/ft_pri_/ft_printf_fill_s_long.c -o ./.objs/ft_printf_fill_s_long.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_printf_fill_c.o: srcs/ft_pri_/ft_printf_fill_c.c incs/libftprintf.h \
  incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_pri_/ft_printf_fill_c.c\n"
		@$(CC) -c ./srcs/ft_pri_/ft_printf_fill_c.c -o ./.objs/ft_printf_fill_c.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_printf_fill_x.o: srcs/ft_pri_/ft_printf_fill_x.c incs/libftprintf.h \
  incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_pri_/ft_printf_fill_x.c\n"
		@$(CC) -c ./srcs/ft_pri_/ft_printf_fill_x.c -o ./.objs/ft_printf_fill_x.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_printf_fill_x_short.o: srcs/ft_pri_/ft_printf_fill_x_short.c \
  incs/libftprintf.h incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_pri_/ft_printf_fill_x_short.c\n"
		@$(CC) -c ./srcs/ft_pri_/ft_printf_fill_x_short.c -o ./.objs/ft_printf_fill_x_short.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_printf_fill_x_int.o: srcs/ft_pri_/ft_printf_fill_x_int.c \
  incs/libftprintf.h incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_pri_/ft_printf_fill_x_int.c\n"
		@$(CC) -c ./srcs/ft_pri_/ft_printf_fill_x_int.c -o ./.objs/ft_printf_fill_x_int.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_printf_fill_x_long.o: srcs/ft_pri_/ft_printf_fill_x_long.c \
  incs/libftprintf.h incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_pri_/ft_printf_fill_x_long.c\n"
		@$(CC) -c ./srcs/ft_pri_/ft_printf_fill_x_long.c -o ./.objs/ft_printf_fill_x_long.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_printf_fill_x_llong.o: srcs/ft_pri_/ft_printf_fill_x_llong.c \
  incs/libftprintf.h incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_pri_/ft_printf_fill_x_llong.c\n"
		@$(CC) -c ./srcs/ft_pri_/ft_printf_fill_x_llong.c -o ./.objs/ft_printf_fill_x_llong.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_printf_fill_x_intmax.o: srcs/ft_pri_/ft_printf_fill_x_intmax.c \
  incs/libftprintf.h incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_pri_/ft_printf_fill_x_intmax.c\n"
		@$(CC) -c ./srcs/ft_pri_/ft_printf_fill_x_intmax.c -o ./.objs/ft_printf_fill_x_intmax.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_printf_fill_o.o: srcs/ft_pri_/ft_printf_fill_o.c incs/libftprintf.h \
  incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_pri_/ft_printf_fill_o.c\n"
		@$(CC) -c ./srcs/ft_pri_/ft_printf_fill_o.c -o ./.objs/ft_printf_fill_o.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_printf_fill_o_short.o: srcs/ft_pri_/ft_printf_fill_o_short.c \
  incs/libftprintf.h incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_pri_/ft_printf_fill_o_short.c\n"
		@$(CC) -c ./srcs/ft_pri_/ft_printf_fill_o_short.c -o ./.objs/ft_printf_fill_o_short.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_printf_fill_o_int.o: srcs/ft_pri_/ft_printf_fill_o_int.c \
  incs/libftprintf.h incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_pri_/ft_printf_fill_o_int.c\n"
		@$(CC) -c ./srcs/ft_pri_/ft_printf_fill_o_int.c -o ./.objs/ft_printf_fill_o_int.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_printf_fill_o_long.o: srcs/ft_pri_/ft_printf_fill_o_long.c \
  incs/libftprintf.h incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_pri_/ft_printf_fill_o_long.c\n"
		@$(CC) -c ./srcs/ft_pri_/ft_printf_fill_o_long.c -o ./.objs/ft_printf_fill_o_long.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_printf_fill_o_llong.o: srcs/ft_pri_/ft_printf_fill_o_llong.c \
  incs/libftprintf.h incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_pri_/ft_printf_fill_o_llong.c\n"
		@$(CC) -c ./srcs/ft_pri_/ft_printf_fill_o_llong.c -o ./.objs/ft_printf_fill_o_llong.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_printf_fill_o_intmax.o: srcs/ft_pri_/ft_printf_fill_o_intmax.c \
  incs/libftprintf.h incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_pri_/ft_printf_fill_o_intmax.c\n"
		@$(CC) -c ./srcs/ft_pri_/ft_printf_fill_o_intmax.c -o ./.objs/ft_printf_fill_o_intmax.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_printf_init.o: srcs/ft_pri_/ft_printf_init.c incs/libftprintf.h \
  incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_pri_/ft_printf_init.c\n"
		@$(CC) -c ./srcs/ft_pri_/ft_printf_init.c -o ./.objs/ft_printf_init.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_printf_init_conv.o: srcs/ft_pri_/ft_printf_init_conv.c \
  incs/libftprintf.h incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_pri_/ft_printf_init_conv.c\n"
		@$(CC) -c ./srcs/ft_pri_/ft_printf_init_conv.c -o ./.objs/ft_printf_init_conv.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_printf_init_conv_digit.o: srcs/ft_pri_/ft_printf_init_conv_digit.c \
  incs/libftprintf.h incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_pri_/ft_printf_init_conv_digit.c\n"
		@$(CC) -c ./srcs/ft_pri_/ft_printf_init_conv_digit.c -o ./.objs/ft_printf_init_conv_digit.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_printf_init_utils.o: srcs/ft_pri_/ft_printf_init_utils.c \
  incs/libftprintf.h incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_pri_/ft_printf_init_utils.c\n"
		@$(CC) -c ./srcs/ft_pri_/ft_printf_init_utils.c -o ./.objs/ft_printf_init_utils.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_printf_utils.o: srcs/ft_pri_/ft_printf_utils.c incs/libftprintf.h \
  incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_pri_/ft_printf_utils.c\n"
		@$(CC) -c ./srcs/ft_pri_/ft_printf_utils.c -o ./.objs/ft_printf_utils.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_printf_utils2.o: srcs/ft_pri_/ft_printf_utils2.c incs/libftprintf.h \
  incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_pri_/ft_printf_utils2.c\n"
		@$(CC) -c ./srcs/ft_pri_/ft_printf_utils2.c -o ./.objs/ft_printf_utils2.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_putchar.o: srcs/ft_put_/ft_putchar.c incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_put_/ft_putchar.c\n"
		@$(CC) -c ./srcs/ft_put_/ft_putchar.c -o ./.objs/ft_putchar.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_putchar_fd.o: srcs/ft_put_/ft_putchar_fd.c incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_put_/ft_putchar_fd.c\n"
		@$(CC) -c ./srcs/ft_put_/ft_putchar_fd.c -o ./.objs/ft_putchar_fd.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_putstr.o: srcs/ft_put_/ft_putstr.c incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_put_/ft_putstr.c\n"
		@$(CC) -c ./srcs/ft_put_/ft_putstr.c -o ./.objs/ft_putstr.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_putstr_fd.o: srcs/ft_put_/ft_putstr_fd.c incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_put_/ft_putstr_fd.c\n"
		@$(CC) -c ./srcs/ft_put_/ft_putstr_fd.c -o ./.objs/ft_putstr_fd.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_putnbr.o: srcs/ft_put_/ft_putnbr.c incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_put_/ft_putnbr.c\n"
		@$(CC) -c ./srcs/ft_put_/ft_putnbr.c -o ./.objs/ft_putnbr.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_putnbr_fd.o: srcs/ft_put_/ft_putnbr_fd.c incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_put_/ft_putnbr_fd.c\n"
		@$(CC) -c ./srcs/ft_put_/ft_putnbr_fd.c -o ./.objs/ft_putnbr_fd.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_putendl.o: srcs/ft_put_/ft_putendl.c incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_put_/ft_putendl.c\n"
		@$(CC) -c ./srcs/ft_put_/ft_putendl.c -o ./.objs/ft_putendl.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_putendl_fd.o: srcs/ft_put_/ft_putendl_fd.c incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_put_/ft_putendl_fd.c\n"
		@$(CC) -c ./srcs/ft_put_/ft_putendl_fd.c -o ./.objs/ft_putendl_fd.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_strnew.o: srcs/ft_str_/ft_strnew.c incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_str_/ft_strnew.c\n"
		@$(CC) -c ./srcs/ft_str_/ft_strnew.c -o ./.objs/ft_strnew.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_strdel.o: srcs/ft_str_/ft_strdel.c incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_str_/ft_strdel.c\n"
		@$(CC) -c ./srcs/ft_str_/ft_strdel.c -o ./.objs/ft_strdel.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_strclr.o: srcs/ft_str_/ft_strclr.c incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_str_/ft_strclr.c\n"
		@$(CC) -c ./srcs/ft_str_/ft_strclr.c -o ./.objs/ft_strclr.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_strisnumeric.o: srcs/ft_str_/ft_strisnumeric.c incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_str_/ft_strisnumeric.c\n"
		@$(CC) -c ./srcs/ft_str_/ft_strisnumeric.c -o ./.objs/ft_strisnumeric.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_strisalnum.o: srcs/ft_str_/ft_strisalnum.c incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_str_/ft_strisalnum.c\n"
		@$(CC) -c ./srcs/ft_str_/ft_strisalnum.c -o ./.objs/ft_strisalnum.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_striter.o: srcs/ft_str_/ft_striter.c incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_str_/ft_striter.c\n"
		@$(CC) -c ./srcs/ft_str_/ft_striter.c -o ./.objs/ft_striter.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_striteri.o: srcs/ft_str_/ft_striteri.c incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_str_/ft_striteri.c\n"
		@$(CC) -c ./srcs/ft_str_/ft_striteri.c -o ./.objs/ft_striteri.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_strmap.o: srcs/ft_str_/ft_strmap.c incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_str_/ft_strmap.c\n"
		@$(CC) -c ./srcs/ft_str_/ft_strmap.c -o ./.objs/ft_strmap.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_strmapi.o: srcs/ft_str_/ft_strmapi.c incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_str_/ft_strmapi.c\n"
		@$(CC) -c ./srcs/ft_str_/ft_strmapi.c -o ./.objs/ft_strmapi.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_strequ.o: srcs/ft_str_/ft_strequ.c incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_str_/ft_strequ.c\n"
		@$(CC) -c ./srcs/ft_str_/ft_strequ.c -o ./.objs/ft_strequ.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_strnequ.o: srcs/ft_str_/ft_strnequ.c incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_str_/ft_strnequ.c\n"
		@$(CC) -c ./srcs/ft_str_/ft_strnequ.c -o ./.objs/ft_strnequ.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_strsub.o: srcs/ft_str_/ft_strsub.c incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_str_/ft_strsub.c\n"
		@$(CC) -c ./srcs/ft_str_/ft_strsub.c -o ./.objs/ft_strsub.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_strjoin.o: srcs/ft_str_/ft_strjoin.c incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_str_/ft_strjoin.c\n"
		@$(CC) -c ./srcs/ft_str_/ft_strjoin.c -o ./.objs/ft_strjoin.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_strser.o: srcs/ft_str_/ft_strser.c incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_str_/ft_strser.c\n"
		@$(CC) -c ./srcs/ft_str_/ft_strser.c -o ./.objs/ft_strser.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_strtrim.o: srcs/ft_str_/ft_strtrim.c incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_str_/ft_strtrim.c\n"
		@$(CC) -c ./srcs/ft_str_/ft_strtrim.c -o ./.objs/ft_strtrim.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_strsplit.o: srcs/ft_str_/ft_strsplit.c incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_str_/ft_strsplit.c\n"
		@$(CC) -c ./srcs/ft_str_/ft_strsplit.c -o ./.objs/ft_strsplit.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_memset.o: srcs/recodes/ft_memset.c incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/recodes/ft_memset.c\n"
		@$(CC) -c ./srcs/recodes/ft_memset.c -o ./.objs/ft_memset.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_bzero.o: srcs/recodes/ft_bzero.c incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/recodes/ft_bzero.c\n"
		@$(CC) -c ./srcs/recodes/ft_bzero.c -o ./.objs/ft_bzero.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_memcpy.o: srcs/recodes/ft_memcpy.c incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/recodes/ft_memcpy.c\n"
		@$(CC) -c ./srcs/recodes/ft_memcpy.c -o ./.objs/ft_memcpy.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_memccpy.o: srcs/recodes/ft_memccpy.c incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/recodes/ft_memccpy.c\n"
		@$(CC) -c ./srcs/recodes/ft_memccpy.c -o ./.objs/ft_memccpy.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_memmove.o: srcs/recodes/ft_memmove.c incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/recodes/ft_memmove.c\n"
		@$(CC) -c ./srcs/recodes/ft_memmove.c -o ./.objs/ft_memmove.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_memchr.o: srcs/recodes/ft_memchr.c incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/recodes/ft_memchr.c\n"
		@$(CC) -c ./srcs/recodes/ft_memchr.c -o ./.objs/ft_memchr.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_memcmp.o: srcs/recodes/ft_memcmp.c incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/recodes/ft_memcmp.c\n"
		@$(CC) -c ./srcs/recodes/ft_memcmp.c -o ./.objs/ft_memcmp.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_strlen.o: srcs/recodes/ft_strlen.c incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/recodes/ft_strlen.c\n"
		@$(CC) -c ./srcs/recodes/ft_strlen.c -o ./.objs/ft_strlen.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_strdup.o: srcs/recodes/ft_strdup.c incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/recodes/ft_strdup.c\n"
		@$(CC) -c ./srcs/recodes/ft_strdup.c -o ./.objs/ft_strdup.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_strcpy.o: srcs/recodes/ft_strcpy.c incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/recodes/ft_strcpy.c\n"
		@$(CC) -c ./srcs/recodes/ft_strcpy.c -o ./.objs/ft_strcpy.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_strncpy.o: srcs/recodes/ft_strncpy.c incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/recodes/ft_strncpy.c\n"
		@$(CC) -c ./srcs/recodes/ft_strncpy.c -o ./.objs/ft_strncpy.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_strcat.o: srcs/recodes/ft_strcat.c incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/recodes/ft_strcat.c\n"
		@$(CC) -c ./srcs/recodes/ft_strcat.c -o ./.objs/ft_strcat.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_strncat.o: srcs/recodes/ft_strncat.c incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/recodes/ft_strncat.c\n"
		@$(CC) -c ./srcs/recodes/ft_strncat.c -o ./.objs/ft_strncat.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_strlcat.o: srcs/recodes/ft_strlcat.c incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/recodes/ft_strlcat.c\n"
		@$(CC) -c ./srcs/recodes/ft_strlcat.c -o ./.objs/ft_strlcat.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_strchr.o: srcs/recodes/ft_strchr.c incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/recodes/ft_strchr.c\n"
		@$(CC) -c ./srcs/recodes/ft_strchr.c -o ./.objs/ft_strchr.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_strrchr.o: srcs/recodes/ft_strrchr.c incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/recodes/ft_strrchr.c\n"
		@$(CC) -c ./srcs/recodes/ft_strrchr.c -o ./.objs/ft_strrchr.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_strstr.o: srcs/recodes/ft_strstr.c incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/recodes/ft_strstr.c\n"
		@$(CC) -c ./srcs/recodes/ft_strstr.c -o ./.objs/ft_strstr.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_strnstr.o: srcs/recodes/ft_strnstr.c incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/recodes/ft_strnstr.c\n"
		@$(CC) -c ./srcs/recodes/ft_strnstr.c -o ./.objs/ft_strnstr.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_strcmp.o: srcs/recodes/ft_strcmp.c incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/recodes/ft_strcmp.c\n"
		@$(CC) -c ./srcs/recodes/ft_strcmp.c -o ./.objs/ft_strcmp.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_strncmp.o: srcs/recodes/ft_strncmp.c incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/recodes/ft_strncmp.c\n"
		@$(CC) -c ./srcs/recodes/ft_strncmp.c -o ./.objs/ft_strncmp.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_atoi.o: srcs/recodes/ft_atoi.c incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/recodes/ft_atoi.c\n"
		@$(CC) -c ./srcs/recodes/ft_atoi.c -o ./.objs/ft_atoi.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_isalpha.o: srcs/recodes/ft_isalpha.c incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/recodes/ft_isalpha.c\n"
		@$(CC) -c ./srcs/recodes/ft_isalpha.c -o ./.objs/ft_isalpha.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_isdigit.o: srcs/recodes/ft_isdigit.c incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/recodes/ft_isdigit.c\n"
		@$(CC) -c ./srcs/recodes/ft_isdigit.c -o ./.objs/ft_isdigit.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_isalnum.o: srcs/recodes/ft_isalnum.c incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/recodes/ft_isalnum.c\n"
		@$(CC) -c ./srcs/recodes/ft_isalnum.c -o ./.objs/ft_isalnum.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_isascii.o: srcs/recodes/ft_isascii.c incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/recodes/ft_isascii.c\n"
		@$(CC) -c ./srcs/recodes/ft_isascii.c -o ./.objs/ft_isascii.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_isprint.o: srcs/recodes/ft_isprint.c incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/recodes/ft_isprint.c\n"
		@$(CC) -c ./srcs/recodes/ft_isprint.c -o ./.objs/ft_isprint.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_isspace.o: srcs/recodes/ft_isspace.c incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/recodes/ft_isspace.c\n"
		@$(CC) -c ./srcs/recodes/ft_isspace.c -o ./.objs/ft_isspace.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_toupper.o: srcs/recodes/ft_toupper.c incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/recodes/ft_toupper.c\n"
		@$(CC) -c ./srcs/recodes/ft_toupper.c -o ./.objs/ft_toupper.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)ft_tolower.o: srcs/recodes/ft_tolower.c incs/libft.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/recodes/ft_tolower.c\n"
		@$(CC) -c ./srcs/recodes/ft_tolower.c -o ./.objs/ft_tolower.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)t_list_add.o: srcs/ft_lst_/t_list/t_list_add.c incs/list.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_lst_/t_list/t_list_add.c\n"
		@$(CC) -c ./srcs/ft_lst_/t_list/t_list_add.c -o ./.objs/t_list_add.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)t_list_del.o: srcs/ft_lst_/t_list/t_list_del.c incs/list.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_lst_/t_list/t_list_del.c\n"
		@$(CC) -c ./srcs/ft_lst_/t_list/t_list_del.c -o ./.objs/t_list_del.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)t_list_splice.o: srcs/ft_lst_/t_list/t_list_splice.c incs/list.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_lst_/t_list/t_list_splice.c\n"
		@$(CC) -c ./srcs/ft_lst_/t_list/t_list_splice.c -o ./.objs/t_list_splice.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)list_push_front.o: srcs/ft_lst_/list_push_front.c incs/list.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_lst_/list_push_front.c\n"
		@$(CC) -c ./srcs/ft_lst_/list_push_front.c -o ./.objs/list_push_front.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)list_push_back.o: srcs/ft_lst_/list_push_back.c incs/list.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_lst_/list_push_back.c\n"
		@$(CC) -c ./srcs/ft_lst_/list_push_back.c -o ./.objs/list_push_back.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)list_del.o: srcs/ft_lst_/list_del.c incs/list.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_lst_/list_del.c\n"
		@$(CC) -c ./srcs/ft_lst_/list_del.c -o ./.objs/list_del.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)list_is_empty.o: srcs/ft_lst_/list_is_empty.c incs/list.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_lst_/list_is_empty.c\n"
		@$(CC) -c ./srcs/ft_lst_/list_is_empty.c -o ./.objs/list_is_empty.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)list_insert.o: srcs/ft_lst_/list_insert.c incs/list.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_lst_/list_insert.c\n"
		@$(CC) -c ./srcs/ft_lst_/list_insert.c -o ./.objs/list_insert.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)list_size.o: srcs/ft_lst_/list_size.c incs/list.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_lst_/list_size.c\n"
		@$(CC) -c ./srcs/ft_lst_/list_size.c -o ./.objs/list_size.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)list_move.o: srcs/ft_lst_/list_move.c incs/list.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_lst_/list_move.c\n"
		@$(CC) -c ./srcs/ft_lst_/list_move.c -o ./.objs/list_move.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)list_nth.o: srcs/ft_lst_/list_nth.c incs/list.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_lst_/list_nth.c\n"
		@$(CC) -c ./srcs/ft_lst_/list_nth.c -o ./.objs/list_nth.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)list_slice.o: srcs/ft_lst_/list_slice.c incs/list.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_lst_/list_slice.c\n"
		@$(CC) -c ./srcs/ft_lst_/list_slice.c -o ./.objs/list_slice.o $(CPPFLAGS) $(CFLAGS) 

$(DIROBJ)list_splice.o: srcs/ft_lst_/list_splice.c incs/list.h
		@printf "$(C_GRE)[ libft.a ] [ %-6s ]$(C_DFL) " "clang"
		@printf "compiling ./srcs/ft_lst_/list_splice.c\n"
		@$(CC) -c ./srcs/ft_lst_/list_splice.c -o ./.objs/list_splice.o $(CPPFLAGS) $(CFLAGS) 


#end
