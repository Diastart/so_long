/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_game.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dias <dias@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 09:27:50 by dias              #+#    #+#             */
/*   Updated: 2025/03/02 09:37:38 by dias             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_init_game(t_game *game, t_map *map, char **grid, t_player *player)
{
	game->map = map;
	game->grid = grid;
	game->player = player;
	game->moves = 0;
	ft_init_mlx(game);
	ft_load_images(game);
	ft_count_collectibles(game);
}
