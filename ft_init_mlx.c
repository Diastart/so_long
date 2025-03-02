/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_mlx.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dias <dias@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 09:31:30 by dias              #+#    #+#             */
/*   Updated: 2025/03/02 09:33:20 by dias             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_init_mlx(t_game *game)
{
	game->mlx = mlx_init();
	if (!game->mlx)
		wow(game->map, game->grid, game->player, 1);
	
	game->win = mlx_new_window(game->mlx, 
		game->map->width * TILE_SIZE, 
		game->map->height * TILE_SIZE, 
		"so_long");
	if (!game->win)
	{
		mlx_destroy_display(game->mlx);
		free(game->mlx);
		wow(game->map, game->grid, game->player, 1);
	}
}
