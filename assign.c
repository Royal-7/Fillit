/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 13:15:12 by abao              #+#    #+#             */
/*   Updated: 2018/08/23 18:50:38 by abao             ###   ########.fr       */
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
	int		fx;
	int		fy;
	int		listnum;

	x = 0;
	y = 0;
	four = 0;
	list = (t_tet *)malloc(26 * sizeof(t_tet));
	letter = 'A';
	listnum = 0;
	while (tets[x])
	{
		while (tets[x][y] != '\0')
		{
			if (tets[x][y] == '#')
			{
				fx = x;
				fy = y;
				break;
			}
			y++;
		}
		x++;
		y = 0;
	}
	while (tets[x])
	{
		while (tets[x][y] != '\0')
		{
			if (tets[x][y] == '#')
			{
				tets[x][y] = letter;
				list[listnum].point[four].x = x - fx;
				list[listnum].point[four].y = y - fy;
				four++;
			}
			y++;
		}
		list[listnum].letter = letter;
		letter++;
		y = 0;
		x++;
		four = 0;
		listnum++;
	}
	return (list);
}
