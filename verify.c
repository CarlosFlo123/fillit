/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/29 14:40:00 by abao              #+#    #+#             */
/*   Updated: 2018/08/26 19:04:10 by abao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function verifies the input to all the standards.
** # of tets (0 - 26), only # and . symbols, 16 chars, all four # are connected.
** Param: The char** with the tetrinimos
** Return: 1 if all good, 0 if incorrect input.
** Segfault in the file. Where?
*/

#include "fillit.h"

int	check_adjacent(char **tet, int a, int b)
{
	int		c;

	c = 0;
	if (tet[a][b + 4] == '#')
		c++;
	if (tet[a][b - 4] == '#')
		c++;
	if (tet[a][b + 1] == '#')
		c++;
	if (tet[a][b - 1] == '#')
		c++;
	return (c);
}

int	verify(char** tets)
{
	int		num;
	int		place;
	int		hashtags;
	int		connect;
	int		count;

	num = 0;
	place = 0;
	hashtags = 0;
	connect = 0;
	while (tets[num])
		num++;
	num = num - 1;
	if (num < 1 || num > 26)
		return (0);
	printf("how many? %d\n", num);
	count = num;
	num--;
	while (num >= 0)
	{
		while (tets[num][place] != '\0')
		{
			if (tets[num][place] != '#' && tets[num][place] != '.' && tets[num][place] != '\n')
				return (0);
			if (tets[num][place] == '#')
			{
				hashtags++;
				connect = connect + check_adjacent(tets, num, place);
			}
			place++;
		}
		printf("ht num: %d\n", hashtags);
		printf("connections: %d\n", connect);
		printf("place num: %d\n", place);
		if (hashtags != 4 || place != 16 || (connect != 6 && connect != 8))
			return (0);
		num--;
		hashtags = 0;
		place = 0;
		connect = 0;
	}
	return (count);
}
