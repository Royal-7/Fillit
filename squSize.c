/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   squSize.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 17:34:28 by abao              #+#    #+#             */
/*   Updated: 2018/08/26 19:24:49 by abao             ###   ########.fr       */
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

void	squSize(t_tet *tets, int num)
{
	int		length;
	t_map	map;

	length = map_size(num);
	map.size = length;
//	map.field = make_map(length, map.field);
	printf("test7\n");
	while (try(map, tets) == 0)
	{
		map.size++;
		free_map(map.field);
		map.field = make_map(map.size, map.field);
	}
	print_map(map.field, map.size);
}
