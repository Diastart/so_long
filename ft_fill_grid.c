/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_grid.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dias <dias@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 14:51:48 by dias              #+#    #+#             */
/*   Updated: 2025/02/25 14:58:55 by dias             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_fill_grid(char **grid, t_map *map)
{
	int		fd;
	char	*line;
	int		i;
	int		j;

	fd = open(path, O_RDONLY);
	if (fd == -1)
		ft_terminate();
	i = 0;
	while (i < map->height)
	{
		j = 0;
		line = get_next_line(fd);
		// Later I will add function to free grid if line is NULL
		while (j < map->width)
		{
			grid[i][j] = line[j];
			j++;
		}
		free(line);
		i++;
	}
}