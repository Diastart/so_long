/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dias <dias@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 10:50:43 by dias              #+#    #+#             */
/*   Updated: 2025/02/26 18:19:00 by dias             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int ac, char *av[])
{
	t_map	*map;
	char	**grid;

	ft_is_valid_arguments(ac);
	ft_is_valid_path(av[1]);
	ft_init_map(&map);
	ft_is_valid_shape(av[1], map);
	ft_init_grid(&grid, map);
	ft_fill_grid(grid, map, av[1]);
	ft_is_valid_borders(grid, map);
	ft_is_valid_quantity(grid, map);
	ft_is_valid_characters(grid, map);
	wow(map, grid, NULL, 0);
}
