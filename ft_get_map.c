/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dias <dias@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 12:13:42 by dias              #+#    #+#             */
/*   Updated: 2025/02/25 12:19:03 by dias             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_get_map(int fd, t_map *map)
{
	char	*line;

	line = get_next_line(fd);
	if (ft_linelen(line) < 3)
	{
		free(map);
		free(line);
		ft_terminate();
	}
	else
		map->width = ft_linelen(line);
	while (line)
	{
		if (ft_linelen(line) != map->width)
		{
			free(map);
			free(line);
			ft_terminate();
		}
		map->height++;
		free(line);
		line = get_next_line(fd);
	}
	if (map->height < 3 || map->width == map->height)
	{
		free(map);
		free(line);
		ft_terminate();
	}
}