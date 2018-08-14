/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 17:31:35 by abao              #+#    #+#             */
/*   Updated: 2018/08/14 03:42:25 by cflores-         ###   ########.fr       */
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
	char	*original;
	//char	**tets;
	size_t	num;
	int		filedes;
	//t_tet	*pieces;

	original = 0;
	if (argc != 2)
	{
		ft_putstr("usage: fillit input_file\n");
		return (1);
	}
	original = ft_strnew(21);
	filedes = open(argv[1], O_RDONLY);
	num = read(filedes, original, 21);
	printf("%lu\n", num);
	while (num != 0)
	{
		num = read(filedes, original, 21);
		printf("%s", original);
	}
	/*
	tets = ft_strsplit(original, '\n');
	if (verify(tets) != 1)
	{
		ft_putstr("error");
		return (1);
	}
	pieces = assign(tets);
	squSize(pieces);*/
	return (0);
}
