/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 13:15:12 by abao              #+#    #+#             */
/*   Updated: 2018/08/07 18:51:40 by abao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function assigns the tets into a struct array. After verify? or verify this?
** Param: tets.
** Return: The struct array?
 */

#include <stdlib.h>

t_tets	*assign(char **tets)
{
	t_tets	*list;
	char	letter;

	list = (t_tets *)malloc(sizeof(t_list));
	list
	letter = 'A';
	while (tets)
	{
		list->letter = letter;
		letter++;

	}
	return (list);
}
