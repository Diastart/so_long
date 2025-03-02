/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dias <dinursul@student.42.it>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 16:42:06 by Dias              #+#    #+#             */
/*   Updated: 2025/01/14 18:07:52 by Dias             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_number(int n)
{
	int		print_length;
	char	*num;

	print_length = 0;
	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	num = ft_itoa(n);
	if (!num)
		return (0);
	write(1, num, ft_strlen(num));
	print_length = ft_strlen(num);
	free(num);
	return (print_length);
}
