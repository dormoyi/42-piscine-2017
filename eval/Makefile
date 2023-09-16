# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: idormoy <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/22 23:31:23 by idormoy           #+#    #+#              #
#    Updated: 2018/07/22 23:31:27 by idormoy          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

vpath %.h $(INCLUDE)

NAME		=	eval_expr

INCLUDE		=	includes/

SRC			=	srcs/

FILE		=	$(SRC)calc.c $(SRC)do_op.c $(SRC)eval_expr.c $(SRC)ft_gest_list.c $(SRC)ft_parsing.c $(SRC)ft_utils.c $(SRC)main.c $(SRC)print_fun.c $(SRC)utils_calc.c $(SRC)calc_count.c

FLAGS		=	-Wall -Werror -Wextra

CC			=	gcc

OBJ			=	$(FILE:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $@ $^

%.o: %.c
	$(CC) -I $(INCLUDE) -o $@ -c $? $(FLAGS)

clean: $(OBJ)
	rm $(OBJ)

fclean: all clean
	rm $(NAME)

re: all fclean 
	make

norme:
	norminette $(FILE)

.PHONY: all re clean fclean
