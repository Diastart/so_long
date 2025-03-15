/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dias <dias@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 10:50:52 by dias              #+#    #+#             */
/*   Updated: 2025/03/02 10:37:27 by dias             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include "get_next_line.h"
# include "ft_printf/ft_printf.h"
# include "minilibx-linux/mlx.h"
# define TILE_SIZE 64

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

typedef struct s_player
{
	int	i;
	int	j;
}				t_player;

typedef struct s_img
{
	void	*wall;
	void	*floor;
	void	*collectible;
	void	*exit;
	void	*player;
}				t_img;

typedef struct s_game
{
	void		*mlx;
	void		*win;
	t_map		*map;
	char		**grid;
	t_player	*player;
	t_img		img;
	int			moves;
	int			total_collectibles;
	int			collectibles_collected;
}				t_game;

void	ft_clean_images(t_game *game);
void	ft_close_game_success(t_game *game);
int		ft_close_game(t_game *game);
int		ft_close_window(t_game *game);
void	ft_count_collectibles(t_game *game);
int		ft_count_dots(char *path);
void	ft_fill_grid(char **grid, t_map *map, char *path);
void	ft_find_player_position(t_player *player, char **grid, t_map *map);
void	ft_free_grid(char **grid, t_map *map);
int		ft_handle_keypress(int keycode, t_game *game);
void	ft_init_game(t_game *game, t_map *map, char **grid, t_player *player);
void	ft_init_grid(char ***grid, t_map *map);
void	ft_init_map(t_map **map);
void	ft_init_mlx(t_game *game);
void	ft_init_player(t_player **player, char **grid, t_map *map);
void	ft_is_valid_arguments(int ac);
void	ft_is_valid_borders(char **grid, t_map *map);
void	ft_is_valid_characters(char **grid, t_map *map);
void	ft_is_valid_path_to_exit(t_player *pl, char **g, t_map *m, char *pth);
void	ft_is_valid_path(char *path);
void	ft_is_valid_quantity(char **grid, t_map *map);
void	ft_is_valid_shape(char *path, t_map *map);
int		ft_linelen(char *line);
void	ft_load_images(t_game *game);
void	ft_move_player(t_game *game, int dx, int dy);
void	ft_put_image(t_game *game, int x, int y);
void	ft_render_map(t_game *game);
int		ft_strcmp(char *s1, char *s2);
void	wow(t_map *m, char **g, t_player *p, int err);

#endif