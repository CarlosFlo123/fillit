/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/28 12:11:14 by abao              #+#    #+#             */
/*   Updated: 2018/08/09 05:55:28 by cflores-         ###   ########.fr       */
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

typedef struct	s_tet
{
	char			letter;
	int				width;
	int				height;
	struct t_tet	*next;
}				t_tet;

typedef struct	s_map
{
	int				size;
	char			**field;
}				t_map;

int				verify(char **tets);
void			squSize(char **tets);
t_tet			*assign(char **tets);

#endif
