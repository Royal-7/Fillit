/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 17:31:35 by abao              #+#    #+#             */
/*   Updated: 2018/08/10 14:24:24 by abao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Main program to run Fillit. 
** First reads the given file into a string by opening file into a descriptor.
** Uses split to divide the string, then calls squSize for the rest. 
** Problem: Undefined symbol architecture x86. Why? All functions are in .h file.
** Param: File to read.
** Return: None, but output the finished product.
*/

#include <stdio.h>
#include "fillit.h"
#include "libft/libft.h"

int	main (int argc, char **argv)
{
	char	*original;
	char	**tets;
	size_t	num;
	int		filedes;
	t_tet	*pieces;

	if (argc != 2)
	{
		ft_putstr("usage: fillit input_file\n");
		return (1);
	}
	original = read_file(argc, argv);
	tets = ft_strsplit(original, '\n');
	if (verify(tets) != 1)
	{
		ft_putstr("error");
		return (1);
	}
	pieces = assign(tets);
	squSize(pieces);
	return (0);
}
