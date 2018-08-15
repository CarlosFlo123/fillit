/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/28 12:11:14 by abao              #+#    #+#             */
/*   Updated: 2018/08/15 00:58:25 by cflores-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Header file. Contains all functions used, and structs.
** Struct for tetrinimos: char/int to use for it, char* for shape
** 
*/

#ifndef FILLIT_H
# define FILLIT_H
#include <string.h>
#include "libft/libft.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef struct		s_point
{
	int				x;
	int				y;
}					t_point;

typedef struct		tetro
{
	char			**x;
	char			**y;
}					t_tetro;

typedef struct		s_tet
{
	char			letter;
	t_point			point;
	t_tetro			body;
	struct t_tet	*next;
}					t_tet;


typedef struct		s_map
{
	int				size;
	char			**field;
}					t_map;

int					verify(char **tets);
void				squSize(t_tet *tets);
t_tet				*assign(char **tets);
void				tet_add(t_tet **list, t_tet *n);
t_tet				*tet_new(void *content);
char				**ft_strsplit(char const *s, char splitchars);
void				ft_putstr(char const *s);
char				**read_file(char *input);

#endif
