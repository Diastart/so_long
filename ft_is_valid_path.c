/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_valid_path.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dias <dias@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 11:01:29 by dias              #+#    #+#             */
/*   Updated: 2025/02/26 17:59:49 by dias             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_is_valid_path(char *path)
{
	int	number_of_dots;

	number_of_dots = ft_count_dots(path);
	if (ft_strlen(path) < 5 || number_of_dots != 1 || \
	ft_strcmp(path + (ft_strlen(path) - 4), ".ber") != 0)
		wow(NULL, NULL, NULL, 1);
}
