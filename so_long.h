/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dias <dias@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 10:50:52 by dias              #+#    #+#             */
/*   Updated: 2025/02/28 09:32:55 by dias             ###   ########.fr       */
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

typedef struct s_quantity
{
	int	exit;
	int	collectible;
	int	player;
}				t_quantity;

typedef struct s_window
{
	int	width;
	int	height;
}				t_window;

typedef struct s_player
{
	int	i;
	int	j;
}				t_player;

int		ft_count_dots(char *path);
void	ft_fill_grid(char **grid, t_map *map, char *path);
void	ft_find_player_position(t_player *player, char **grid, t_map *map);
void	ft_free_grid(char **grid, t_map *map);
void	ft_init_grid(char ***grid, t_map *map);
void	ft_init_map(t_map **map);
void	ft_init_player(t_player **player, char **grid, t_map *map);
void	ft_is_valid_arguments(int ac);
void	ft_is_valid_borders(char **grid, t_map *map);
void	ft_is_valid_characters(char **grid, t_map *map);
void	ft_is_valid_path(char *path);
void	ft_is_valid_quantity(char **grid, t_map *map);
void	ft_is_valid_shape(char *path, t_map *map);
int		ft_linelen(char *line);
int		ft_strcmp(char *s1, char *s2);
void	wow(t_map *m, char **g, t_player *p, int err);

#endif