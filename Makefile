# ---------------------------------------------------------------------------- #
# The purpose of the Makefile is to provide a tool which optimizes the build   #
# of a project, The common problems are bad management of dependencies, relink #
# build, uncompiled modified sources...                                        #
#                                                                              #
# ---------------------------------------------------------------------------- #
#                                                                              #
# USAGE                                                                        #
#                                                                              #
# ---------------------------------------------------------------------------- #
# First, the user must configure its environment settings.                     #
# - see 'PROJECT CONFIGURATION' to configure project directories               #
# - see 'EXTERNAL TOOLS SETTINGS' to setup default programs to use             #
#                                                                              #
# Second, configure the sources.                                               #
# - see 'TARGET SETUP' to set the name of the target and the sources           #
#                                                                              #
# Third, configure the build options.                                          #
# - see 'PROJECT COMPILATION' to setup prepocessor, flags and libraries        #
#                                                                              #
# Fourth, setup the linking rule.                                              #
# - see 'PUBLIC RULES' to modify the $(NAME) rule                              #
#                                                                              #
# ---------------------------------------------------------------------------- #
# The project must compile at this step.                                       #
# ---------------------------------------------------------------------------- #
#                                                                              #
# To add custom rules, the concerned section is 'PUBLIC RULES'. Be sure to     #
# keep at least the rules all, $(NAME), libs, clean, fclean and re.            #
#                                                                              #
# ---------------------------------------------------------------------------- #
#                                                                              #
#                               /!\ WARNING /!\                                #
#                                                                              #
# The sections commented with '/!\' are critical, and must not be modified.    # 
#                                                                              #
# ---------------------------------------------------------------------------- #


# ---------------------------------------------------------------------------- #
#                                                                              #
# TARGET SETUP                                                                 #
#                                                                              #
# ---------------------------------------------------------------------------- #
# - The 'NAME' variable must contain the expected name of the output target.   #
# - The 'SRCS' variable must contain the list of the source files without the  #
# base prefix of the directory.                                                #
# ---------------------------------------------------------------------------- #

NAME	=	libft.a

# ---------------------------------------------------------------------------- #

SRCS	=	\
			ft_get_/get_next_line.c				\
			ft_arr_/ft_array_dup.c				\
			ft_arr_/ft_array_indexof.c			\
			ft_arr_/ft_array_pop.c				\
			ft_arr_/ft_array_push_back.c		\
			ft_arr_/ft_array_push_front.c		\
			ft_arr_/ft_array_push_index.c		\
			ft_ito_/ft_itoa.c					\
			ft_ito_/ft_lltoa.c					\
			ft_math_/ft_powi.c					\
			ft_mem_/ft_memalloc.c				\
			ft_mem_/ft_memdel.c					\
			ft_mem_/ft_memdel_tab.c				\
			ft_mem_/ft_memdup.c					\
			ft_mem_/ft_realloc.c				\
			ft_pri_/ft_printf.c					\
			ft_pri_/ft_printf_display.c			\
			ft_pri_/ft_printf_fill.c			\
			ft_pri_/ft_printf_fill_default.c	\
			ft_pri_/ft_printf_fill_empty.c		\
			ft_pri_/ft_printf_fill_d.c			\
			ft_pri_/ft_printf_fill_d_short.c	\
			ft_pri_/ft_printf_fill_d_int.c		\
			ft_pri_/ft_printf_fill_d_long.c		\
			ft_pri_/ft_printf_fill_d_llong.c	\
			ft_pri_/ft_printf_fill_d_intmax.c	\
			ft_pri_/ft_printf_fill_b.c			\
			ft_pri_/ft_printf_fill_b_char.c		\
			ft_pri_/ft_printf_fill_b_short.c	\
			ft_pri_/ft_printf_fill_b_int.c		\
			ft_pri_/ft_printf_fill_b_long.c		\
			ft_pri_/ft_printf_fill_b_llong.c	\
			ft_pri_/ft_printf_fill_b_intmax.c	\
			ft_pri_/ft_printf_fill_u.c			\
			ft_pri_/ft_printf_fill_u_short.c	\
			ft_pri_/ft_printf_fill_u_int.c		\
			ft_pri_/ft_printf_fill_u_long.c		\
			ft_pri_/ft_printf_fill_u_llong.c	\
			ft_pri_/ft_printf_fill_u_intmax.c	\
			ft_pri_/ft_printf_fill_p.c			\
			ft_pri_/ft_printf_fill_s.c			\
			ft_pri_/ft_printf_fill_s_long.c		\
			ft_pri_/ft_printf_fill_c.c			\
			ft_pri_/ft_printf_fill_x.c			\
			ft_pri_/ft_printf_fill_x_short.c	\
			ft_pri_/ft_printf_fill_x_int.c		\
			ft_pri_/ft_printf_fill_x_long.c		\
			ft_pri_/ft_printf_fill_x_llong.c	\
			ft_pri_/ft_printf_fill_x_intmax.c	\
			ft_pri_/ft_printf_fill_o.c			\
			ft_pri_/ft_printf_fill_o_short.c	\
			ft_pri_/ft_printf_fill_o_int.c		\
			ft_pri_/ft_printf_fill_o_long.c		\
			ft_pri_/ft_printf_fill_o_llong.c	\
			ft_pri_/ft_printf_fill_o_intmax.c	\
			ft_pri_/ft_printf_init.c			\
			ft_pri_/ft_printf_init_conv.c		\
			ft_pri_/ft_printf_init_conv_digit.c	\
			ft_pri_/ft_printf_init_utils.c		\
			ft_pri_/ft_printf_utils.c			\
			ft_pri_/ft_printf_utils2.c			\
			ft_put_/ft_putchar.c				\
			ft_put_/ft_putchar_fd.c				\
			ft_put_/ft_putstr.c					\
			ft_put_/ft_putstr_fd.c				\
			ft_put_/ft_putmem_fd.c				\
			ft_put_/ft_putnbr.c					\
			ft_put_/ft_putnbr_fd.c				\
			ft_put_/ft_putendl.c				\
			ft_put_/ft_putendl_fd.c				\
			ft_str_/ft_strnew.c					\
			ft_str_/ft_strdel.c					\
			ft_str_/ft_strclr.c					\
			ft_str_/ft_strisnumeric.c			\
			ft_str_/ft_strisalnum.c				\
			ft_str_/ft_striter.c				\
			ft_str_/ft_striteri.c				\
			ft_str_/ft_strmap.c					\
			ft_str_/ft_strmapi.c				\
			ft_str_/ft_strequ.c					\
			ft_str_/ft_strnequ.c				\
			ft_str_/ft_strsub.c					\
			ft_str_/ft_strjoin.c				\
			ft_str_/ft_strjoin3.c				\
			ft_str_/ft_strjoin3_safe.c			\
			ft_str_/ft_strser.c					\
			ft_str_/ft_wcstombs.c				\
			ft_str_/ft_strtrim.c				\
			ft_str_/ft_strsplit.c				\
			ft_str_/ft_strtolower.c				\
			ft_str_/ft_wctomb.c					\
			ft_str_/ft_wstrlen.c				\
			recodes/ft_memset.c					\
			recodes/ft_bzero.c					\
			recodes/ft_memcpy.c					\
			recodes/ft_memccpy.c				\
			recodes/ft_memmove.c				\
			recodes/ft_memchr.c					\
			recodes/ft_memcmp.c					\
			recodes/ft_strlen.c					\
			recodes/ft_strdup.c					\
			recodes/ft_strcpy.c					\
			recodes/ft_strncpy.c				\
			recodes/ft_strcat.c					\
			recodes/ft_strncat.c				\
			recodes/ft_strlcat.c				\
			recodes/ft_strchr.c					\
			recodes/ft_strrchr.c				\
			recodes/ft_strstr.c					\
			recodes/ft_strnstr.c				\
			recodes/ft_strcmp.c					\
			recodes/ft_strncmp.c				\
			recodes/ft_atoi.c					\
			recodes/ft_atoll.c					\
			recodes/ft_isalpha.c				\
			recodes/ft_isdigit.c				\
			recodes/ft_isalnum.c				\
			recodes/ft_isascii.c				\
			recodes/ft_isprint.c				\
			recodes/ft_isspace.c				\
			recodes/ft_toupper.c				\
			recodes/ft_tolower.c				\
			ft_lst_/t_list/t_list_add.c			\
			ft_lst_/t_list/t_list_del.c			\
			ft_lst_/t_list/t_list_splice.c		\
			ft_lst_/list_push_front.c			\
			ft_lst_/list_push_back.c			\
			ft_lst_/list_del.c					\
			ft_lst_/list_is_empty.c				\
			ft_lst_/list_insert.c				\
			ft_lst_/list_size.c					\
			ft_lst_/list_move.c					\
			ft_lst_/list_nth.c					\
			ft_lst_/list_nth_safe.c				\
			ft_lst_/list_slice.c				\
			ft_lst_/list_splice.c				\

# ---------------------------------------------------------------------------- #
# PROJECT CONFIGURATION                                                        #
# ---------------------------------------------------------------------------- #
# - The 'DIR*' variables describe all directories of the project.              #
# ---------------------------------------------------------------------------- #

DIRSRC	=	srcs
DIRINC	=	incs
DIRLIB	=	libs
DIRTST	=	test
DIROBJ	=	.objs
DIRDEP	=	.deps

# ---------------------------------------------------------------------------- #
# EXTERNAL TOOLS SETTINGS                                                      #
# ---------------------------------------------------------------------------- #
# - Set the default external programs.                                         #
# ---------------------------------------------------------------------------- #

CC		=	clang
AR		=	ar
ARFLAGS	=	rc
RM		=	rm -f

# ---------------------------------------------------------------------------- #
# PROJECT COMPILATION                                                          #
# ---------------------------------------------------------------------------- #
# - The 'LDFLAGS' tells the linker where to find external libraries (-L flag). #
# - The 'LDLIBS' tells the linker the prefix of external libraries (-l flag).  #
# - The 'CPPFLAGS' tells the compiler where to find preprocessors (-I flag).   #
# - The 'CFLAGS' configures the compiler options.                              #
# ---------------------------------------------------------------------------- #

LIBS		=	\

LDFLAGS		=	\

LDLIBS		=	\

CPPFLAGS	=	\
				-I $(DIRINC)					\

CFLAGS		=	\
				-Wall -Wextra -Werror			\

# ---------------------------------------------------------------------------- #
# /!\ COMPILATION RULES /!\                                                    #
# ---------------------------------------------------------------------------- #

DEPFLAGS	=	\
				-MT $@ -MMD -MP -MF $(DIRDEP)/$*.Td	\

COMPILE.c	=	$(CC) $(DEPFLAGS) $(CFLAGS) $(CPPFLAGS) -c

POSTCOMPILE	=	mv -f $(DIRDEP)/$*.Td $(DIRDEP)/$*.d

# ---------------------------------------------------------------------------- #
# /!\ SOURCES NORMALIZATION /!\                                                #
# ---------------------------------------------------------------------------- #

SRC	=	$(addprefix $(DIRSRC)/, $(SRCS))
OBJ	=	$(addprefix $(DIROBJ)/, $(SRCS:.c=.o))

$(DIROBJ)	:
	@mkdir -p $(DIROBJ)

$(DIRDEP)	:
	@mkdir -p $(DIRDEP)

# ---------------------------------------------------------------------------- #
# PUBLIC RULES                                                                 #
# ---------------------------------------------------------------------------- #
# The rules must contain at least :                                            #
# - all        make libs and target                                            #
# - $(NAME)    make binaries and target                                        #
# - libs       build static libraries                                          #
# - clean      remove binaries                                                 #
# - fclean     remove binaries and target                                      #
# - fcleanlibs apply fclean rule on libraries                                  #
# - re         remove binaries, target and libraries and build the target      #
#                                                                              #
# To compile a static library, the $(NAME) rule should be :                    #
#     '$(AR) $(ARFLAGS) $(NAME) $(OBJ)'                                        #
#     'ranlib $(NAME)'                                                         #
#                                                                              #
# To compile a C binary, the $(NAME) rule should be :                          #
#     '$(CC) $(OBJ) -o $(NAME) $(LDFLAGS) $(LDLIBS)'                           #
# ---------------------------------------------------------------------------- #

all			:	libs $(NAME)
	@printf "\033[32m[ %s ]\033[0m %s\n" "$(NAME)" "finish to build $(NAME)"

$(NAME)		:	$(DIROBJ) $(DIRDEP) $(OBJ) $(LIBS)
	@printf "\033[32m[ %s ]\033[0m %s\n" "$(NAME)" "link objects..."
	@$(AR) $(ARFLAGS) $(NAME) $(OBJ)
	@ranlib $(NAME)

libs		:

fcleanlibs	:

clean		:
	@printf "\033[32m[ %s ]\033[0m %s\n" "$(NAME)" "remove objects..."
	@$(RM) -r $(DIROBJ)
	@printf "\033[32m[ %s ]\033[0m %s\n" "$(NAME)" "remove dependencies..."
	@$(RM) -r $(DIRDEP)

fclean		:	clean
	@printf "\033[32m[ %s ]\033[0m %s\n" "$(NAME)" "remove target..."
	@$(RM) $(NAME)

re			:	fcleanlibs fclean all

# ---------------------------------------------------------------------------- #
# CUSTOM RULES                                                                 #
# ---------------------------------------------------------------------------- #

test		:	re
	@printf "\033[32m[ %s ]\033[0m %s\n" "$(NAME)" "run tests..."

submodule	:
	@printf "\033[32m[ %s ]\033[0m %s\n" "$(NAME)" "retrieve submodules..."

norme		:
	@printf "\033[32m[ %s ]\033[0m %s\n" "$(NAME)" "run norminette..."
	@printf "\033[33m[ %s ]\033[0m %s\n" "$(NAME)" "missing headers not check"
	@/usr/bin/norminette -R CheckTopCommentHeader	\
		$$(find * -name "*.[ch]")
	@printf "\033[32m[ %s ]\033[0m %s\n" "$(NAME)" "run norminette..."
	@printf "\033[33m[ %s ]\033[0m %s\n" "$(NAME)" "missing headers not check"

# ---------------------------------------------------------------------------- #
# /!\ PRIVATE RULES /!\                                                        #
# ---------------------------------------------------------------------------- #

$(DIROBJ)/%.o	:	$($(DIRSRC)/%.c
$(DIROBJ)/%.o	:	$(DIRSRC)/%.c $(DIRDEP)/%.d
	@mkdir -p $(dir $@)
	@mkdir -p $(dir $(word 2,$^))
	@printf "\033[32m[ %s ]\033[0m %s\n" "$(NAME)" "compiling $<..."
	@$(COMPILE.c) $(OUTPUT_OPTION) $<
	@$(POSTCOMPILE)

$(DIRDEP)/%.d	:	;
.PRECIOUS		:	$(DIRDEP)/%.d

-include $(patsubst %,$(DIRDEP)/%.d,$(basename $(SRCS)))

# ---------------------------------------------------------------------------- #

.PHONY	:	all clean fclean re $(DIROBJ)/%.o $(DIRDEP)/%.d libs

# ---------------------------------------------------------------------------- #
