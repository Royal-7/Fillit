/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cflores- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 20:50:46 by cflores-          #+#    #+#             */
/*   Updated: 2018/08/25 17:15:08 by abao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**read_file(char *input)
{
	char	*original;
	char	**tets;
	size_t	num;
	int		filedes;
	int		test = 0;

	original = 0;
	original = ft_strnew(21);
	filedes = open(input, O_RDONLY);
	num = read(filedes, original, 21);
	while (num != 0)
	{
		num = read(filedes, original, 21);
		printf("%s", original);
	}
	tets = (char **) malloc(sizeof(char*) * 27);
	tets = ft_strsplit(original, '\n');
	while (tets[0][test] != '\0')
	{
		printf("%c", tets[0][test]);
		test++;
	}
	return (tets);
}
