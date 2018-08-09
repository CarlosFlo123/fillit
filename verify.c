/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/29 14:40:00 by abao              #+#    #+#             */
/*   Updated: 2018/08/07 15:43:59 by abao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function verifies the input to all the standards.
** # of tets (0 - 26), only # and . symbols, 16 chars, all four # are connected.
** Param: The char** with the tetrinimos
** Return: 1 if all good, 0 if incorrect input.
*/

static int	check_adjacent(char **tet, int a, int b)
{
	int		c;
	if (tet[a + 1][b] == '#')
		c++;
	if (tet[a - 1][b] == '#')
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
	int		**coor;
	int		connect;
	int		x;
	int		y;

	num = 0;
	place = 0;
	hastags = 0;
	connect = 0;
	while (tets)
		num++;
	if (num < 1 || num > 26)
		return (0);
	while (num > 0)
	{
		while (tets[num][place])
		{
			if (tets[num][place] != '#' || tets[num][place] != '.')
				return (0);
			if (tets[num][place] == '#')
			{
				hastags++;
				connect = connect + check_adjacent(tets, num, place);
			}
			place++;
		}
		if (hashtags != 4 || place != 20 || connect != 6)
			return (0);
		num--;
		hastags = 0;
		place = 0;
		connect = 0;
	}
	return (1);
}
