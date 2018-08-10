/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   squSize.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 17:34:28 by abao              #+#    #+#             */
/*   Updated: 2018/08/09 19:22:57 by abao             ###   ########.fr       */
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

void	placeBlock(t_tet *tets, int len)
{

}

void	squSize(t_tet *tets)
{
	int		total;
	int		length;
	int		correct;

	total = 0;
	correct = 0;
	while (tets)
		total++;
	length = sqrt(total * 4);
	while (correct != 1)
	{

	}
}
