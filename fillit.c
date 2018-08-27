/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 17:31:35 by abao              #+#    #+#             */
/*   Updated: 2018/08/26 18:47:44 by abao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Main program to run Fillit.
** First reads the given file into a string by opening file into a descriptor.
** Uses split to divide the string, then calls squSize for the rest.
** Param: File to read.
** Return: None, but output the finished product.
*/

#include "fillit.h"

int	main(int argc, char **argv)
{
	char	***three;
	char	**tets;
	t_tet	*pieces;
	int 	i;

	if (argc != 2)
	{
		ft_putstr("usage: fillit input_file\n");
		return (1);
	}
	tets = (char **)malloc(sizeof(char *) * 7);
	printf("test1\n");
	three = read_file(argv[1]);
	printf("test2\n");
	tets = three_to_two(three);
	printf("test3\n");
	printf("%s\n", tets[0]);
	i = verify(tets);
	if (i == 0)
	{
		ft_putstr("error");
		return (1);
	}
	printf("test4\n");
	pieces = assign(tets);
	printf("test5\n");
	squSize(pieces, i);
	return (0);
}
