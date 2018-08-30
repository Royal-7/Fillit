/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 13:15:12 by abao              #+#    #+#             */
/*   Updated: 2018/08/29 18:33:43 by abao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function assigns the tets into a struct array.
** Param: tets.
** Return: The struct array?
*/

#include "fillit.h"

t_tet	*assign(char ***tets, int i)
{
	t_tet	*list;
	char	letter;
	int		x;
	int		y;
	int		z;
	int		four;
	int		fy;
	int		fz;
	int		flag;

	x = 0;
	y = 0;
	z = 0;
	four = 0;
	list = (t_tet *)malloc(26 * sizeof(t_tet));
	letter = 'A';
	flag = 0;
	while (x < i)
	{
		while (tets[x][y] != NULL)
		{
			while (tets[x][y][z] != '\0')
			{
				if (tets[x][y][z] == '#')
				{
					if (flag == 0)
					{
						fy = y;
						fz = z;
						flag = 1;
					}
					list[x].point[four].x = y - fy;
					list[x].point[four].y = z - fz;
					printf("Coord check: point %d:  %d, %d\n", four, list[x].point[four].x, list[x].point[four].y);
					four++;
				}
				z++;
			}
			printf("y = %d\n", y);
			list[x].letter = letter;
			z = 0;
			y++;
		}
		x++;
		y = 0;
		z = 0;
		flag = 0;
		four = 0;
		letter++;
	}
	return (list);
}
