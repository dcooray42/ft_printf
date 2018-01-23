# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcooray <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/13 21:43:16 by dcooray           #+#    #+#              #
#    Updated: 2017/03/13 21:43:23 by dcooray          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c \
	ft_printf_bis.c \
	ft_printf_flag.c \
	ft_printf_champ.c \
	ft_printf_specifier.c \
	ft_printf_arg_lz.c \
	ft_printf_arg_mod.c \
	ft_printf_arg_mod_bis.c \
	ft_printf_arg_s.c \
	ft_printf_arg_s_print.c \
	ft_printf_arg_ls_print.c \
	ft_printf_arg_p.c \
	ft_printf_arg_p_print.c \
	ft_printf_arg_di.c \
	ft_printf_arg_di_pos_zero_print.c \
	ft_printf_arg_di_pos_zero_print_bis.c \
	ft_printf_arg_di_neg_print.c \
	ft_printf_arg_ld.c \
	ft_printf_arg_ld_print.c \
	ft_printf_arg_o.c \
	ft_printf_arg_o_print.c \
	ft_printf_arg_lo.c \
	ft_printf_arg_lo_print.c \
	ft_printf_arg_u.c \
	ft_printf_arg_u_print.c \
	ft_printf_arg_lu.c \
	ft_printf_arg_lu_print.c \
	ft_printf_arg_x.c \
	ft_printf_arg_x_print.c \
	ft_printf_arg_lx.c \
	ft_printf_arg_lx_print.c \
	ft_printf_arg_c.c \
	ft_printf_arg_c_print.c \
	ft_printf_reset.c \
	ft_putchar.c \
	ft_putstr.c \
	ft_strlen.c \
	ft_atoi.c \
	ft_itoa.c \
	ft_itoa_base.c \
	ft_itoa_base_usigned.c \
	ft_strdel.c \
	ft_memset.c \
	ft_bzero.c \
	ft_memalloc.c \
	ft_strnew.c \
	ft_memcpy.c \
	ft_memdel.c \
	ft_strdup.c \
	ft_isdigit.c \
	ft_isspace.c \
	ft_toupper.c \
	ft_putwchar.c \
	ft_putwstr.c \
	ft_wstrlen.c

OBJ = $(SRC:.c=.o)

FLAGS = -Wall -Werror -Wextra

INCLUDE = -I./includes

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $^
	ranlib $(NAME)

%.o: %.c
	gcc $(FLAGS) $(INCLUDE) -c $^

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
