/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_correct_shape.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dias <dias@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 11:42:35 by dias              #+#    #+#             */
/*   Updated: 2025/02/25 13:18:23 by dias             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_is_correct_shape(char *path, t_map *map)
{
	int		fd;
	char	*line;

	fd = open(path, O_RDONLY);
	if (fd == -1)
		ft_terminate();
	line = get_next_line(fd);
	if (!line)
		ft_terminate_and_free(line, map);
	if (ft_linelen(line) < 3)
		ft_terminate_and_free(line, map);
	else
		map->width = ft_linelen(line);
	while (line)
	{
		if (ft_linelen(line) != map->width)
			ft_terminate_and_free(line, map);
		map->height++;
		free(line);
		line = get_next_line(fd);
	}
	if (map->height < 3 || map->width == map->height)
		ft_terminate_and_free(line, map);
}
