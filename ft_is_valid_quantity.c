/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_valid_quantity.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dias <dias@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 15:43:09 by dias              #+#    #+#             */
/*   Updated: 2025/02/26 18:02:30 by dias             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_is_valid_quantity(char **grid, t_map *map)
{
	t_quantity	quantity;
	int			i;
	int			j;

	quantity.exit = 0;
	quantity.collectible = 0;
	quantity.player = 0;
	i = 0;
	while (++i < (map->height - 1))
	{
		j = 0;
		while (++j < (map->width - 1))
		{
			if (grid[i][j] == 'E')
				quantity.exit++;
			else if (grid[i][j] == 'C')
				quantity.collectible++;
			else if (grid[i][j] == 'P')
				quantity.player++;
		}
	}
	if (quantity.exit != 1 || \
	quantity.collectible < 1 || \
	quantity.player != 1)
		wow(map, grid, NULL, 1);
}
