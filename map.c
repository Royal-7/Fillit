/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 15:25:37 by abao              #+#    #+#             */
/*   Updated: 2018/08/27 19:50:04 by abao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		map_size(int n)
{
	int sqr;

	sqr = 2;
	while ((sqr * sqr) < (n * 4))
		sqr++;
	printf("%d\n", sqr);
	return (sqr);
}

char	**make_map(int size, char **mapy)
{
	char	**map;
	int		i;
	int		j;

	free(mapy);
	map = (char **)malloc(sizeof(char *) * size);
	i = 0;
	printf("size of map: %d\n", size);
	while (i < size)
	{
		map[i] = ft_strnew(size);
		j = 0;
		while (j < size)
		{
			map[i][j] = '.';
			j++;
		}
		i++;
	}
	mapy = map;
	print_map(map, size);
	return (mapy);
}

void	free_map(char **map)
{
	ft_memdel((void **)map);
}

void	print_map(char **map, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		ft_putstr(map[i]);
		ft_putchar('\n');
		i++;
	}
}
