/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dias <dias@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 10:50:43 by dias              #+#    #+#             */
/*   Updated: 2025/03/02 10:21:06 by dias             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int ac, char *av[])
{
	t_map		*map;
	char		**grid;
	t_player	*player;
	t_game		game;

	ft_is_valid_arguments(ac);
	ft_is_valid_path(av[1]);
	ft_init_map(&map);
	ft_is_valid_shape(av[1], map);
	ft_init_grid(&grid, map);
	ft_fill_grid(grid, map, av[1]);
	ft_is_valid_borders(grid, map);
	ft_is_valid_quantity(grid, map);
	ft_is_valid_characters(grid, map);
	ft_init_player(&player, grid, map);
	ft_is_valid_path_to_exit(player, grid, map, av[1]);
	ft_init_game(&game, map, grid, player);
	ft_render_map(&game);
	mlx_key_hook(game.win, ft_handle_keypress, &game);
	mlx_hook(game.win, 17, 0, ft_close_window, &game);
	mlx_loop(game.mlx);
	wow(map, grid, NULL, 0);
}
