/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cflores- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 20:50:46 by cflores-          #+#    #+#             */
/*   Updated: 2018/08/25 20:18:21 by abao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	***read_file(char *input)
{
	char	*original;
	char	***tets;
	size_t	num;
	int		filedes;
	int 	i;

	original = 0;
	num = 2;
	i = 0;
	original = ft_strnew(21);
	tets = (char ***) malloc(sizeof(char**) * 27);
	filedes = open(input, O_RDONLY);
	while (num != 0)
	{
		printf("%s", original);
		num = read(filedes, original, 21);
		tets[i] = ft_strsplit(original, '\n');
		i++;
	}
	return (tets);
}
