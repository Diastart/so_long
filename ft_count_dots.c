/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_dots.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dias <dias@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 11:03:10 by dias              #+#    #+#             */
/*   Updated: 2025/02/25 11:05:14 by dias             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_count_dots(char *path)
{
	int	dot_counter;
	
	dot_counter = 0;
	while (*path)
	{
		if (*path == '.')
			dot_counter++;
		path++;
	}
	return (dot_counter);
}