/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_valid_path_to_exit.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dias <dias@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 09:53:20 by dias              #+#    #+#             */
/*   Updated: 2025/02/28 10:35:45 by dias             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static int	dfs(char **grid, int i, int j, t_map *map)
{
	char	original;

	if (grid[i][j] == 'E')
		return (1);
	if (i <= 0 || j <= 0 || (i >= map->height - 1) \
	|| (j >= map->width - 1) || (grid[i][j] == '1'))
		return (0);
	original = grid[i][j];
	grid[i][j] = '1';
	if (dfs(grid, i + 1, j, map) || \
		dfs(grid, i, j + 1, map) || \
		dfs(grid, i - 1, j, map) || \
		dfs(grid, i, j - 1, map))
	{
		grid[i][j] = original;
		return (1);
	}
	grid[i][j] = original;
	return (0);
}

void	ft_is_valid_path_to_exit(t_player *pl, char **g, t_map *m, char *pth)
{
	char	**g_c;

	ft_init_grid(&grid_copy, map);
	ft_fill_grid(g_c, map, pth);
	if (dfs(g_c, pl->i, pl->j, map))
		return ;
	ft_free_grid(g_c, map);
	wow(m, g, pl, 1);
}
