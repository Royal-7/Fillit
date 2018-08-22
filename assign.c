/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 13:15:12 by abao              #+#    #+#             */
/*   Updated: 2018/08/21 15:25:10 by abao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function assigns the tets into a struct array. After verify? or verify this?
** Param: tets.
** Return: The struct array?
 */

#include "fillit.h"

t_tet	*assign(char **tets)
{
	t_tet	*list;
	char	letter;
	int		x;
	int		y;
	int		four;

	x = 0;
	y = 0;
	four = 0;
	list = (t_tet *)malloc(sizeof(t_list));
	letter = 'A';
	list->point[four]->x = 0;
	list->point[four]->y = 0;
	while (tets[x])
	{
		while (tets[x][y] != '\0')
		{
			if (tets[x][y] == '#')
			{
				tets[x][y] == letter;
				//Is this correct? doable? Need new xy coords - the first point
				list->point[four]->x = x - list->point[0]->x;
				list->point[four]->y = y - list->point[0]->y;
			}
			y++;
		}
		list->letter = letter;
		letter++;
		num++;
		y = 0;
		x++;
		four++;
	}
	return (list);
}
