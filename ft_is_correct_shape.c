/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_correct_shape.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dias <dias@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 11:42:35 by dias              #+#    #+#             */
/*   Updated: 2025/02/25 12:48:50 by dias             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	ft_terminate_and_free(char *line, t_map *map)
{
	if (line)
		free(line);
	free(map);
	ft_terminate();
}

void	ft_is_correct_shape(int fd, t_map *map)
{
	char	*line;

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
