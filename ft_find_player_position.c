/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_player_position.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dias <dias@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 09:21:50 by dias              #+#    #+#             */
/*   Updated: 2025/02/28 09:35:53 by dias             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_find_player_position(t_player *player, char **grid, t_map *map)
{
	int	i;
	int	j;

	i = 0;
	while (++i < (map->height - 1))
	{
		j = 0;
		while (++j < (map->width - 1))
		{
			if (grid[i][j] == 'P')
			{
				player->i = i;
				player->j = j;
				return ;
			}
		}
	}
}
