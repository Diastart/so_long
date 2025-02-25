/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dias <dias@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 10:50:52 by dias              #+#    #+#             */
/*   Updated: 2025/02/25 15:21:35 by dias             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include "get_next_line.h"

typedef struct s_map
{
	int	width;
	int	height;
}				t_map;

int		ft_count_dots(char *path);
void	ft_fill_grid(char **grid, t_map *map, char *path);
void	ft_free_grid(char **grid, t_map *map);
void	ft_init_grid(char ***grid, t_map *map);
void	ft_init_map(t_map **map);
void	ft_is_correct_arguments(int ac);
void	ft_is_correct_path(char *path);
void	ft_is_correct_shape(char *path, t_map *map);
int		ft_linelen(char *line);
//void	ft_print_grid_debug(char **grid, t_map *map);
int		ft_strcmp(char *s1, char *s2);
void	ft_terminate_and_free(char *line, t_map *map);
void	ft_terminate(void);

#endif