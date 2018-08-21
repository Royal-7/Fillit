/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recursion.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 15:22:01 by abao              #+#    #+#             */
/*   Updated: 2018/08/21 15:19:43 by abao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The recursive function to put the pieces in the map. What need for each?
** Try function: takes the map and list of pieces to work with.
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

int		backtrack(t_map map, t_tet tet, int x, int y)
{
	int	four;

	four = 0;
	while (four < 4)
	{
		if (map->field[x][y] == '.')
		{
			
		}
		//if failure
		{
			undo(map, tet->letter);
			return (0);
		}
		four++;
	}
	while (x < map->size)
	{
		y = 0;
		while (y < map->size)
		{
			 (backtrack(map, &tets, x, y));
			y++;
		}
		x++;
	}

	return (0);
}

int		try(t_map map, t_tet *tets)
{
	int	x;
	int	y;
	int	correct;

	correct = 0;

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
