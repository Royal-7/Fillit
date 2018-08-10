/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 12:50:17 by abao              #+#    #+#             */
/*   Updated: 2018/08/10 14:24:10 by abao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Attempted solution to undefined symbol.
** Put all functions requiring fcntl in here
** Param:
** Return: 
*/

#include <fcntl.h>

char	*read_file(int n, char **arg)
{
	char	*original;
	size_t	num;
	int		filedes;

	original = NULL;
	filedes = open(argv[1], O_RDONLY);
	num = read(filedes, original, 1);
	printf("%d", filedes);
	while (num != 0)
		num = read(filedes, original, 1);
	return (original);
}
