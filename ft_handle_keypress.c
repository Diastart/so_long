/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_keypress.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dias <dias@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 09:47:05 by dias              #+#    #+#             */
/*   Updated: 2025/03/02 09:59:32 by dias             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

#define KEY_ESC 65307
#define KEY_W 119
#define KEY_A 97
#define KEY_S 115
#define KEY_D 100
#define KEY_UP 65362
#define KEY_LEFT 65361
#define KEY_DOWN 65364
#define KEY_RIGHT 65363

int	ft_handle_keypress(int keycode, t_game *game)
{
	if (keycode == KEY_ESC)
		ft_close_game(game);
	else if (keycode == KEY_W || keycode == KEY_UP)
		ft_move_player(game, 0, -1);
	else if (keycode == KEY_A || keycode == KEY_LEFT)
		ft_move_player(game, -1, 0);
	else if (keycode == KEY_S || keycode == KEY_DOWN)
		ft_move_player(game, 0, 1);
	else if (keycode == KEY_D || keycode == KEY_RIGHT)
		ft_move_player(game, 1, 0);
	return (0);
}

