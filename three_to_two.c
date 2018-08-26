/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_to_two.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 18:40:42 by abao              #+#    #+#             */
/*   Updated: 2018/08/25 19:38:51 by abao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Convert a 3d array to 2d array
** Will make it compatible with the verify I wrote
** In current 3d, broken down as: 4 lines, each line, each char
** In array I want: 4 lines, each char
*/

#include "fillit.h"

char	**three_to_two(char ***list)
{
	char	**new;
	int		a;
	int		x;
	int		y;

	a = 0;
	x = 0;
	y = 0;
	printf("%s\n", list[x][y]);
	printf("%s\n", list[x][y + 1]);
	new = (char **) malloc(sizeof(char *) * 27);
	while (list[x])
	{
		new[a] = (char *) malloc(sizeof(char) * 21);
		while (list[x][y])
		{
			new[a] = ft_strcat(new[a], list[x][y]);
			y++;
		}
		a++;
		x++;
		y = 0;
	}
	return (new);
}
