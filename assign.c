/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 13:15:12 by abao              #+#    #+#             */
/*   Updated: 2018/08/19 19:12:42 by abao             ###   ########.fr       */
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
	while (tets[x])
	{
		while (tets[x][y] != '\0')
		{
			if (tets[x][y] == '#')
			{
				tets[x][y] == letter;
				list->point[four]->x = x;
				list->point[four]->y = y;
			}
			y++;
		}
		list->letter = letter;
		letter++;
		num++;
		y = 0;
		x++;
	}
	return (list);
}
