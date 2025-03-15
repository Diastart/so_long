/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wow.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dias <dias@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 13:01:38 by dias              #+#    #+#             */
/*   Updated: 2025/02/28 09:19:08 by dias             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	wow(t_map *m, char **g, t_player *p, int err)
{
	if (g)
		ft_free_grid(g, m);
	if (m)
		free(m);
	if (p)
		free(p);
	if (err)
	{
		write (2, "Error\n", 6);
		exit(EXIT_FAILURE);
	}
	else
		exit(EXIT_SUCCESS);
}
