#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: flourdau <flourdau@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/02/09 12:04:28 by flourdau          #+#    #+#              #
#    Updated: 2016/05/07 14:56:36 by flourdau         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a

CC_FLAGS = -Wall -Wextra -Werror

PATH_SRCS = ./
PATH_OBJS = ./OBJS/
PATH_INCS = ./

FILES_INCS = \
	libft.h \
	includesft.h \
	definesft.h \
	color.h \
	typedef.h

FILES_C_SRCS = \
	ft_strlen.c \
	ft_xlen.c \
	ft_atoi.c \
	ft_itoa.c \
	ft_tolower.c \
	ft_toupper.c \
	ft_strupcase.c \
	ft_strlowcase.c \
	ft_printf.c \
	ft_check_tag_opt.c \
	ft_check_tag_length.c \
	ft_check_tag_prec_width.c \
	ft_check_type_entier.c \
	ft_check_type_char.c \
	ft_check_type_convert.c \
	ft_write_nbr.c \
	ft_write_width_prec.c \
	ft_write_types.c \
	ft_convert.c \
	ft_n_str8_64.c \
	get_next_line.c \
	ft_lstnew.c \
	ft_lstdelone.c \
	ft_lstdel.c \
	ft_lstadd.c \
	ft_lstiter.c \
	ft_lstmap.c \
	ft_add_link.c \
	ft_print_list.c \
	ft_create_elem.c \
	ft_list_push_back.c \
	ft_list_push_front.c \
	ft_list_size.c \
	ft_list_last.c \
	ft_list_push_params.c \
	ft_list_clear.c \
	ft_list_at.c \
	ft_list_reverse.c \
	ft_list_foreach.c \
	ft_list_remove_if.c \
	ft_abs.c \
	ft_memccpy.c \
	ft_memmove.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memalloc.c \
	ft_memdel.c \
	ft_memset.c \
	ft_memcpy.c \
	ft_bzero.c \
	ft_strcat.c \
	ft_strchr.c \
	ft_strdup.c \
	ft_strcpy.c \
	ft_strncpy.c \
	ft_strncat.c \
	ft_strlcat.c \
	ft_strrchr.c \
	ft_strstr.c \
	ft_strnstr.c \
	ft_strcmp.c \
	ft_strncmp.c \
	ft_strnew.c \
	ft_strdel.c \
	ft_strclr.c \
	ft_striter.c \
	ft_striteri.c \
	ft_strmap.c \
	ft_strmapi.c \
	ft_strequ.c \
	ft_strnequ.c \
	ft_strsub.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_strsplit.c \
	ft_strrev.c \
	ft_isspace.c \
	ft_iswhitespace.c \
	ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_swap.c \
	ft_time.c \
	ft_putchar.c \
	ft_putstr.c \
	ft_putwint.c \
	ft_putwstr.c \
	ft_putnbr.c \
	ft_putnbr_xsize.c \
	ft_putendl.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c

SRCS = $(addprefix $(PATH_SRCS), $(FILES_C_SRCS))
INCS = $(addprefix $(PATH_INCS), $(FILES_INCS))
FILES_OBJS += $(FILES_C_SRCS:.c=.o)
OBJS = $(addprefix $(PATH_OBJS), $(FILES_OBJS))

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

$(PATH_OBJS)%.o: $(PATH_SRCS)%.c $(INCS)

	gcc $(CC_FLAGS) -I $(PATH_INCS) -c $< -o $@

clean:
	rm -Rfv $(OBJS)
	@clear

fclean: clean
	rm -Rfv $(NAME)
	@clear

re: fclean all

norme:
	@norminette $(SRCS) $(INCS)
