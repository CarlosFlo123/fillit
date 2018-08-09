/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tet_add.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 18:52:31 by abao              #+#    #+#             */
/*   Updated: 2018/08/07 19:51:57 by abao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Creates new t_tet at beginning of the list
 */

void	tet_add(t_tets **list, t_tets *new)
{
	t_tets	*start;

	start = list;
	list = new;
	new->next = list;
}
