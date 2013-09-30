# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jblanche <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/09/25 12:42:57 by jblanche          #+#    #+#              #
#    Updated: 2013/09/30 18:03:47 by jblanche         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = grimly

LIB = libft.a

SRCS = ./srcs/main.c ./srcs/check_map.c ./srcs/ft_liballoc.c \
	   ./srcs/create_map.c ./srcs/map_info.c

LSRCS = ./libs/ft_putchar.c ./libs/ft_putnbr.c ./libs/ft_putstr.c \
		./libs/ft_strcmp.c ./libs/ft_strlen.c ./libs/ft_swap.c \
		./libs/ft_char_to_int.c

HDRS = ./includes/

LOBJS = ft_putchar.o ft_putnbr.o ft_putstr.o ft_strcmp.o ft_strlen.o \
		ft_swap.o

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(LIB):
	@gcc $(FLAGS) -c $(LSRCS)
	@ar rc $(LIB) $(LOBJS)
	@ranlib $(LIB)

$(NAME): $(LIB)
	gcc $(FLAGS)  $(SRCS) -L. -lft -I $(HDRS) -o $(NAME)

clean:
	/bin/rm -f $(LOBJS) $(LIB)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
