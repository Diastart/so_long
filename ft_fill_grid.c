/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_grid.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dias <dias@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 14:51:48 by dias              #+#    #+#             */
/*   Updated: 2025/02/25 15:25:56 by dias             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_fill_grid(char **grid, t_map *map, char *path)
{
	int		fd;
	char	*line;
	int		i;
	int		j;

	fd = open(path, O_RDONLY);
	if (fd == -1)
		ft_terminate_and_free(NULL, map);
	i = -1;
	while (++i < map->height)
	{
		j = -1;
		line = get_next_line(fd);
		if (!line)
		{
			ft_free_grid(grid, map);
			ft_terminate_and_free(NULL, map);
		}
		while (++j < map->width)
			grid[i][j] = line[j];
		free(line);
	}
	close(fd);
}
