/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 17:31:35 by abao              #+#    #+#             */
/*   Updated: 2018/08/30 18:37:38 by cflores-         ###   ########.fr       */
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
	char	***readed_file;
	int 	i = 0;
	int 	j = 0;
	int 	k = 0;
	int 	flag = 0;
	char 	letter = 'A';
	int 	con = 0;
	t_tet	*tets = 0;
	t_tet	*tmp = 0;

	if (argc != 2)
	{
		ft_putstr("usage: fillit input_file\n");
		return (1);
	}
	
	readed_file = (char ***) malloc(sizeof(char **) * 27);
	readed_file = read_file(argv[1]);
	
	tets = (t_tet *)malloc(sizeof(t_tet));
	tmp = tets;
	tets->next = 0;
	
	//printf("\t%c\n\t%c\n", ***readed_file, ***readed_file);

	while (readed_file[i])
	{
		//printf("%c", tets->letter);
		j = 0;
		if (flag == 1)
		{
			tets->next = (struct t_tet *)malloc(sizeof( t_tet));
			tets = (t_tet*)tets->next;
		}
		flag = 0;
		con = 0;
		
		
		tets->letter = letter;
		while (readed_file[i][j])
		{
			k = 0;
			//printf("%s", readed_file[i][0]);
			while (readed_file[i][j][k])
			{
				printf("%c", readed_file[i][j][k]);
				if (readed_file[i][j][k] == '#')
				{
					//printf("%i - %i", j,k);
					if (flag == 0)
					{
						flag = 1;
						tets->point.x = j;
						tets->point.y = k;
					}
					else
					{
						if (tets->point.x != 0 || tets->point.y != 0)
						{
							tets->body.x[con] = k - tets->point.x - 1;
							tets->body.y[con] = j - tets->point.y + 1;
						}
						else
						{
							tets->body.x[con] = k - tets->point.x;
							tets->body.y[con] = j - tets->point.y;

						}
						tets->letter = letter;
						con++;
					}
				}
				k++;
			}
			printf("\n");
			j++;
		}
		tets->next = 0;
		if (readed_file[i + 1])
			printf("\n");
		i++;
		letter++;
	}
	int count = 0;
	while (!(tmp->next == 0))
	{	
		count += 1;
		tmp = (t_tet *)tmp->next;
	}
	printf("\n\n%s%i\n", readed_file[0][0], count);
	/*while (tmp->next != 0)
	{
		printf("\t\n\t\nTetro %c:\n\tbody1: x:%i - y:%i\n\tbody2: x:%i - y:%i\n\tbody3: x:%i - y:%i\n\t", tmp->letter, tmp->body.x[0], tmp->body.y[0], tmp->body.x[1], tmp->body.y[1], tmp->body.x[2], tmp->body.y[2]);	
		tmp = (t_tet*)tmp->next;
	}*/
	

	/*if (verify(*readed_file) != 1)
	{
		ft_putstr("error");
		i = -1;
		while (readed_file[++i])
		{
			printf("%s\n", *readed_file[i]);
		}
		return (1);
	}*/

	//AUXILIAR PRINT
	/*while (readed_file[i])
	{
		j = 0;
		while (readed_file[i][j])
		{
			printf("%s\n", readed_file[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}*/

	//pieces = assign(readed_file);
	//squSize(pieces);
	return (0);
}
