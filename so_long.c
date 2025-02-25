/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dias <dias@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 10:50:43 by dias              #+#    #+#             */
/*   Updated: 2025/02/25 12:59:54 by dias             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void ft_initialize_map(t_map **map)
{
	*map = (t_map *)malloc(sizeof(t_map));
	if (!*map)
		ft_terminate();
	(*map)->width = 0;
	(*map)->height = 0;
}

int	main(int ac, char *av[])
{
	t_map	*map;

	ft_is_correct_arguments(ac);
	ft_is_correct_path(av[1]);
	ft_initialize_map(&map);
	ft_is_correct_shape(av[1], map);
	//ft_construct_grid()
	free(map);
}