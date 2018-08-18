/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cflores- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 20:50:46 by cflores-          #+#    #+#             */
/*   Updated: 2018/08/15 01:11:20 by cflores-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**read_file(char *input)
{
	char	*original;
	char	**tets;
	size_t	num;
	int		filedes;

	num = -1;
	original = 0;
	original = ft_strnew(21);
	filedes = open(input, O_RDONLY);
	tets = (char **) malloc(sizeof(char*) * 27);
	while (num != 0)
	{
		printf("%s", original);
		tets = ft_strsplit(original, '\n');
		while (*tets != 0)
		{
			printf("%c\n", **tets);
			tets++;
		}
		num = read(filedes, original, 21);
	}
	return (tets);
}
