/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cflores- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 14:48:40 by cflores-          #+#    #+#             */
/*   Updated: 2018/08/21 14:48:58 by cflores-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		map_size(int *list)
{
	int size;
	int sqr;

	size = 0;
	while (list[size])
		size++;
	sqr = 2;
	while (sqr * sqr < size * 4)
		sqr++;
	return (sqr);
}

char	**make_map(int size, char **mapy)
{
	char	**map;
	int		i;
	int		j;

	free(mapy);
	map = (char **)malloc(sizeof(char *) * size);
	i = 0;
	while (i < size)
	{
		map[i] = ft_strnew(size);
		j = 0;
		while (j < size)
		{
			map[i][j] = '.';
			j++;
		}
		i++;
	}
	mapy = map;
	return (mapy);
}

void	free_map(char **map)
{
	ft_memdel((void **)map);
}

void	print_map(char **map, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		ft_putstr(map[i]);
		ft_putchar('\n');
		i++;
	}
}
