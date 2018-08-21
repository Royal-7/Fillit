/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   squSize.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 17:34:28 by abao              #+#    #+#             */
/*   Updated: 2018/08/16 18:10:24 by abao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function determines the size of the overall square.
** Start by calculating the minimum amount of space necessary.
** 4 * # of tetrinimos
** Then try placing blocks into square, and increment size if fails.
** Param: The char** of tetrinimos.
** Return: 
*/

#include "fillit.h"

char	**makeArray(int a)
{
	char	**arr;
	int		x;
	int		y;

	x = 0;
	arr = (char**)malloc(sizeof(char*) * (a + 1));
	while (x < a)
	{
		y = 0;
		arr[x] = (char*)malloc(sizeof(char) * (x + 1));
		while (y < a)
		{
			arr[x][y] = '.';
			y++;
		}
		arr[x][y] = '\0';
		x++;
	}
	arr[x] = NULL;
	return (arr);
}

t_map	squSize(t_tet *tets)
{
	int		total;
	int		length;
	int		area;
	t_map	map;

	total = 0;
	length = 1;
	while (tets)
		total++;
	area = total * 4;
	while ((length * length) < area)
		length++;
	map = (t_map)malloc(sizeof(t_map));
	map->size = length;
	map->field = makeArray(length);
	recursion(map, tets);
}
