/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_player.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dias <dias@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 09:59:00 by dias              #+#    #+#             */
/*   Updated: 2025/03/02 09:59:08 by dias             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_move_player(t_game *game, int dx, int dy)
{
	int	new_j;
	int	new_i;

	new_j = game->player->j + dx;
	new_i = game->player->i + dy;
	if (game->grid[new_i][new_j] == '1')
		return;
	if (game->grid[new_i][new_j] == 'E')
	{
		if (game->collectibles_collected == game->total_collectibles)
		{
			ft_printf("Moves: %d\n", ++game->moves);
			ft_close_game_success(game);
		}
		return;
	}
	if (game->grid[new_i][new_j] == 'C')
	{
		game->collectibles_collected++;
		game->grid[new_i][new_j] = '0';
	}
	game->grid[game->player->i][game->player->j] = '0';
	game->grid[new_i][new_j] = 'P';
	game->player->i = new_i;
	game->player->j = new_j;
	game->moves++;
	ft_printf("Moves: %d\n", game->moves);
	ft_render_map(game);
}