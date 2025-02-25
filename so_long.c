/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dias <dias@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 10:50:43 by dias              #+#    #+#             */
/*   Updated: 2025/02/25 12:52:18 by dias             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void ft_initialize_map(t_map *map)
{
	map = (t_map *)malloc(sizeof(t_map));
	if (!map)
		ft_terminate();
	map->width = 0;
	map->height = 0;
}

int	main(int ac, char *av[])
{
	int		fd;
	t_map	*map;

	ft_is_correct_arguments(ac);
	ft_is_correct_path(av[1]);
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
		ft_terminate();
	ft_is_correct_shape(fd, map);
	//ft_construct_grid()
	close(fd);
	free(map);
}