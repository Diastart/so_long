/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_valid_borders.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dias <dias@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 14:14:10 by dias              #+#    #+#             */
/*   Updated: 2025/02/26 18:05:53 by dias             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_is_valid_borders(char **grid, t_map *map)
{
	int	i;

	i = -1;
	while (++i < map->width)
	{
		if (grid[0][i] != '1' || grid[map->height - 1][i] != '1')
			wow(map, grid, NULL, 1);
	}
	i = -1;
	while (++i < map->height)
	{
		if (grid[i][0] != '1' || grid[i][map->width - 1] != '1')
			wow(map, grid, NULL, 1);
	}
}
