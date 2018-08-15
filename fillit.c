/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 17:31:35 by abao              #+#    #+#             */
/*   Updated: 2018/08/15 01:02:53 by cflores-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Main program to run Fillit.
** First reads the given file into a string by opening file into a descriptor.
** Uses split to divide the string, then calls squSize for the rest.
** Param: File to read.
** Return: None, but output the finished product.
*/

#include "fillit.h"

int	main (int argc, char **argv)
{
	char	**tets;
	int i = 0;

	if (argc != 2)
	{
		ft_putstr("usage: fillit input_file\n");
		return (1);
	}
	tets = (char **) malloc(sizeof(char *) * 27);
	tets = read_file(argv[1]);
	/*if (verify(tets) != 1)
	{
		ft_putstr("error");
		return (1);
	}*/
	while (tets[i])
	{
		printf("%s", tets[i]);
		i++;
	}
	//pieces = assign(tets);
	//squSize(pieces);
	return (0);
}
