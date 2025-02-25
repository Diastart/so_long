/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_correct_path.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dias <dias@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 11:01:29 by dias              #+#    #+#             */
/*   Updated: 2025/02/25 13:05:12 by dias             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_is_correct_path(char *path)
{
	int	number_of_dots;

	number_of_dots = ft_count_dots(path);
	if (ft_strlen(path) < 5 || number_of_dots != 1 || \
	ft_strcmp(path + (ft_strlen(path) - 4), ".ber") != 0)
		ft_terminate();
}
