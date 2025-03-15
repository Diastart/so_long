/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_image.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dias <dias@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 09:45:02 by dias              #+#    #+#             */
/*   Updated: 2025/03/02 10:20:25 by dias             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_put_image(t_game *game, int x, int y)
{
	void	*img;

	if (game->grid[y][x] == '0')
		img = game->img.floor;
	else if (game->grid[y][x] == '1')
		img = game->img.wall;
	else if (game->grid[y][x] == 'C')
		img = game->img.collectible;
	else if (game->grid[y][x] == 'E')
		img = game->img.exit;
	else if (game->grid[y][x] == 'P')
		img = game->img.player;
	else
		return ;
	mlx_put_image_to_window(game->mlx, game->win, \
	img, x * TILE_SIZE, y * TILE_SIZE);
}
