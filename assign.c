/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 13:15:12 by abao              #+#    #+#             */
/*   Updated: 2018/08/10 03:14:44 by cflores-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function assigns the tets into a struct array. After verify? or verify this?
** Param: tets.
** Return: The struct array?
 */

#include "fillit.h"

t_tet	*assign(char **tets)
{
	t_tet	*list;
	char	letter;

	list = (t_tet *)malloc(sizeof(t_list));
	letter = 'A';
	while (tets)
	{
		list->letter = letter;
		letter++;

	}
	return (list);
}
