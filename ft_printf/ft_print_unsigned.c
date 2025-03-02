/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dias <dinursul@student.42.it>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 16:44:51 by Dias              #+#    #+#             */
/*   Updated: 2025/01/14 16:46:43 by Dias             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned(unsigned int n)
{
	int	print_length;

	print_length = 0;
	if (n >= 10)
		print_length += ft_print_unsigned(n / 10);
	ft_putchar_fd((n % 10) + '0', 1);
	print_length++;
	return (print_length);
}
