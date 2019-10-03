# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hgadacha <hgadacha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/20 15:11:14 by hgadacha          #+#    #+#              #
#    Updated: 2019/06/22 17:03:39 by hgadacha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Wextra -Werror

SRCS = *.c
all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SRCS) -I .
	ar rc $(NAME) $(SRCS:.c=.o)
	ranlib $(NAME)

clean:
	rm -rf $(SRCS:.c=.o)

fclean: clean
	rm -rf $(NAME)

re: fclean all