/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_valid_characters.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dias <dias@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 17:39:14 by dias              #+#    #+#             */
/*   Updated: 2025/02/26 18:14:31 by dias             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_is_valid_characters(char **grid, t_map *map)
{
	int	i;
	int	j;

	i = 0;
	while (++i < (map->height - 1))
	{
		j = 0;
		while (++j < (map->width - 1))
		{
			if ((grid[i][j] != '0') && \
			(grid[i][j] != '1') && \
			(grid[i][j] != 'C') && \
			(grid[i][j] != 'E') && \
			(grid[i][j] != 'P') && \
			(grid[i][j] != 'B'))
				wow(map, grid, NULL, 1);
		}
	}
}
