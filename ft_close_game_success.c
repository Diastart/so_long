/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_close_game_success.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dias <dias@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 10:00:09 by dias              #+#    #+#             */
/*   Updated: 2025/03/02 10:00:17 by dias             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_close_game_success(t_game *game)
{
	ft_printf("You won in %d moves!\n", game->moves);
	ft_clean_images(game);
	wow(game->map, game->grid, game->player, 0);
}