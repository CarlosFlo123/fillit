# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abao <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/27 14:04:17 by abao              #+#    #+#              #
#    Updated: 2018/08/10 01:27:23 by cflores-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit.a

CFLAGS = -libft -I fillit.h

SRC = placeBlock.c \
	  tet_add.c \
	  verify.c \
	  fillit.c \
	  squSize.c \
	  tet_new.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	@gcc -o $(CFLAGS) -Wall -Wextra -Werror $(SRC)
	@ar rc $(NAME) $(OBJ)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all
