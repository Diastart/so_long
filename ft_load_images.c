/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_load_images.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dias <dias@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 09:34:00 by dias              #+#    #+#             */
/*   Updated: 2025/03/02 09:41:08 by dias             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_load_images(t_game *game)
{
	int	img_width;
	int	img_height;

	game->img.wall = mlx_png_file_to_image(game->mlx, 
		"textures/wall.png", &img_width, &img_height);
	game->img.floor = mlx_png_file_to_image(game->mlx, 
		"textures/floor.png", &img_width, &img_height);
	game->img.collectible = mlx_png_file_to_image(game->mlx, 
		"textures/collectible.png", &img_width, &img_height);
	game->img.exit = mlx_png_file_to_image(game->mlx, 
		"textures/exit.png", &img_width, &img_height);
	game->img.player = mlx_png_file_to_image(game->mlx, 
		"textures/player.png", &img_width, &img_height);
	
	if (!game->img.wall || !game->img.floor || !game->img.collectible \
	|| !game->img.exit || !game->img.player)
		ft_clean_images(game);
}