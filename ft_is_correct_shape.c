/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_correct_shape.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dias <dias@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 11:42:35 by dias              #+#    #+#             */
/*   Updated: 2025/02/25 12:14:41 by dias             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_is_correct_shape(char *path)
{
	int		fd;
	t_map	*map;

	fd = open(path, O_RDONLY);
	map = (t_map)malloc(sizeof(t_map));
	if (!map)
		ft_terminate();
	map->width = 0;
	map->height = 0;
	ft_get_map(fd, map);
}
