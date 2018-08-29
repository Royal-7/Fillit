/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/28 12:11:14 by abao              #+#    #+#             */
/*   Updated: 2018/08/28 19:59:46 by abao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Header file. Contains all functions used, and structs.
** Struct for tetrinimos: char/int to use for it, char* for shape
** Tets have 4 points, a 2d array. The coords for the upper left is [0, 0]
** All other points are in reference to that one.
*/

#ifndef FILLIT_H
# define FILLIT_H
#include <string.h>
#include "libft/libft.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef struct		s_point
{
	int				x;
	int				y;
}					t_point;

typedef struct		s_tet
{
	char			letter;
	int				total;
	t_point			point[4];
}					t_tet;

typedef struct		s_map
{
	int				size;
	char			**field;
}					t_map;

int					verify(char **tets);
void				squSize(t_tet *tets, int i);
t_tet				*assign(char ***tets, int i);
void				tet_add(t_tet **list, t_tet *n);
t_tet				*tet_new(void *content);
char				**ft_strsplit(char const *s, char splitchars);
void				ft_putstr(char const *s);
char				***read_file(char *input);
int					check(t_map map, t_tet tet, int x, int y);
int					backtrack(t_map map, t_tet tet, int x, int y);
int					try(t_map map, t_tet *tets, int num);
t_map				undo(t_map map, char letter);
int					map_size(int n);
char				**make_map(int size, char **mapy);
void				free_map(char **map);
void				print_map(char **map, int size);
char				**three_to_two(char ***list);


#endif
