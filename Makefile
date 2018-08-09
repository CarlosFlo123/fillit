# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abao <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/27 14:04:17 by abao              #+#    #+#              #
#    Updated: 2018/07/27 17:18:50 by abao             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror


all: $(NAME)

clean:
	/bin/rm -f $(OBJS)
	/bin/rm -rf a.out.dSYM

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
