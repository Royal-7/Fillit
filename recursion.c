/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recursion.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 15:22:01 by abao              #+#    #+#             */
/*   Updated: 2018/08/21 17:01:51 by abao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The recursive function to put the pieces in the map. What need for each?
** Try function: takes the map and list of pieces to work with. Feeds 
** the pieces into the backtracking function. Or should backtracking do
** that itself? Starts the recursion.
** Param: tmap, ttet*
** Return: map
** Backtracking function: takes the map and specific tet to put in. 
** Uses the starting coordinates given and finds the points of the tet
** in the map. Sees if they are all empty and fills them in.
** If all empty, put them in and return success. If not, then 
** return fail so position can increment.
** Param:
** Return: 
** Where to account for need size increase?
*/

int		check(t_map map, t_tet tet, int x, int y)
{
	int	c;

	c = 0;
	while (c < 4)
	{
		if (map->field[x + tet->point[c]->x][y + tet->point[c]->y] == '.')
			c++;
		else
			return (0);
	}
	return (1);
}

int		backtrack(t_map map, t_tet tet, int x, int y)
{
	int	c;
	if (check(map, tet, x, y) = 1)
	{
		while (c < 4)
		{
			map->field[x + tet->point[c]->x][y + tet->point[c]->y] = tet->letter;
			c++;
		}
	}
	else
	{
		while (x < map->size)
		{
			while (y < map->size)
			{
				if (backtrack(map, tet, x, y) == 1)
					return (1);
				y++;
			}
			x++;
			y = 0;
		}
	}
	return (0);
}

int		try(t_map map, t_tet *tets)
{
	int	x;
	int	y;
	int sol;
	
	while (tets->next != NULL)
	{

	}
	return (0);
}

t_map	undo(t_map map, char letter)
{
	int	x;
	int	y;

	while (x < map->size)
	{
		while (y < map->size)
		{
			if (map->field[x][y] == letter)
				map->field[x][y] = '.';
			y++;
		}
		y = 0;
		x++;
	}
	return (map);
}
