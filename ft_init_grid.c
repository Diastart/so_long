/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_grid.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dias <dias@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 13:14:02 by dias              #+#    #+#             */
/*   Updated: 2025/02/26 18:00:54 by dias             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_init_grid(char ***grid, t_map *map)
{
	int	i;

	*grid = (char **)malloc(sizeof(char *) * (map->height + 1));
	if (!*grid)
		wow(map, NULL, NULL, 1);
	i = 0;
	while (i < map->height)
	{
		(*grid)[i] = (char *)malloc(sizeof(char) * (map->width + 1));
		if (!(*grid)[i])
		{
			while (--i >= 0)
				free((*grid)[i]);
			free(*grid);
			wow(map, NULL, NULL, 1);
		}
		(*grid)[i][map->width] = '\0';
		i++;
	}
	(*grid)[map->height] = NULL;
}
