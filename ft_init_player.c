/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_player.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dias <dias@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 09:04:56 by dias              #+#    #+#             */
/*   Updated: 2025/02/28 09:27:23 by dias             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_init_player(t_player **player, char **grid, t_map *map)
{
	*player = (t_player *)malloc(sizeof(t_player));
	if (!(*player))
		wow(map, grid, *player, 1);
	ft_find_player_position(*player, grid, map);
}