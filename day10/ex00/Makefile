# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: idormoy <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/17 07:13:40 by idormoy           #+#    #+#              #
#    Updated: 2018/07/18 12:31:05 by idormoy          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= libft.a

SRC= srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c\
	  srcs/ft_swap.c

all: $(NAME)

$(NAME):
	@gcc -c $(SRC) -I./includes 
	@ar rc libft.a ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
	@ranlib libft.a

clean:
	@/bin/rm -f ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
