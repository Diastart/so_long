/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_valid_shape.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dias <dias@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 11:42:35 by dias              #+#    #+#             */
/*   Updated: 2025/02/26 18:00:26 by dias             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	helper(char *line, t_map *map)
{
	free(line);
	wow(map, NULL, NULL, 1);
}

void	ft_is_valid_shape(char *path, t_map *map)
{
	int		fd;
	char	*line;

	fd = open(path, O_RDONLY);
	if (fd == -1)
		wow(map, NULL, NULL, 1);
	line = get_next_line(fd);
	if (!line)
		wow(map, NULL, NULL, 1);
	if (ft_linelen(line) < 3)
		helper(line, map);
	else
		map->width = ft_linelen(line);
	while (line)
	{
		if (ft_linelen(line) != map->width)
			helper(line, map);
		map->height++;
		free(line);
		line = get_next_line(fd);
	}
	if (map->height < 3 || map->width == map->height)
		wow(map, NULL, NULL, 1);
	close(fd);
}
