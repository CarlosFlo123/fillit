/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   squSize.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 17:34:28 by abao              #+#    #+#             */
/*   Updated: 2018/08/09 19:03:14 by abao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function determines the size of the overall square.
** Start by calculating the minimum amount of space necessary.
** 4 * # of tetrinimos
** Then try placing blocks into square, and increment size if fails.
** Param: The char** of tetrinimos.
** Return: 
*/

#include "fillit.h"

void	squSize(t_tet *tets)
{
	int		total;
	int		length;

	total = 0;
	while (tets)
		total++;
	length = sqrt(total * 4);
	//Insert solver here.
}
