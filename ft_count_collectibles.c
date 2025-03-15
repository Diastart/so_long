/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_collectibles.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dias <dias@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 09:37:48 by dias              #+#    #+#             */
/*   Updated: 2025/03/02 09:39:39 by dias             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_count_collectibles(t_game *game)
{
	int	i;
	int	j;

	game->total_collectibles = 0;
	game->collectibles_collected = 0;
	i = 0;
	while (++i < game->map->height - 1)
	{
		j = 0;
		while (++j < game->map->width - 1)
		{
			if (game->grid[i][j] == 'C')
				game->total_collectibles++;
		}
	}
}
