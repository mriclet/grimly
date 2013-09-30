# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jblanche <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/09/25 12:42:57 by jblanche          #+#    #+#              #
<<<<<<< HEAD
#    Updated: 2013/09/30 18:00:39 by jblanche         ###   ########.fr        #
=======
<<<<<<< HEAD
#    Updated: 2013/09/30 16:50:53 by mriclet          ###   ########.fr        #
=======
#    Updated: 2013/09/30 17:42:35 by jblanche         ###   ########.fr        #
>>>>>>> cbe052f0506b0c568959bc327328586c4ba95755
>>>>>>> 6abd2128ed96cdf7b6bb441b03668e22824e1b7e
#                                                                              #
# **************************************************************************** #

NAME = grimly

LIB = libft.a

SRCS = ./srcs/main.c ./srcs/check_map.c ./srcs/ft_liballoc.c \
<<<<<<< HEAD
	   ./srcs/create_map.c ./srcs/map_info.c
=======
<<<<<<< HEAD
	   ./srcs/creat_map.c ./srcs/get_tab.c
=======
	   ./srcs/ft_libwrite.c ./srcs/create_map.c ./srcs/map_info.c
>>>>>>> cbe052f0506b0c568959bc327328586c4ba95755
>>>>>>> 6abd2128ed96cdf7b6bb441b03668e22824e1b7e

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
