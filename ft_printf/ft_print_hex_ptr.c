/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_ptr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dias <dinursul@student.42.it>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 16:41:30 by Dias              #+#    #+#             */
/*   Updated: 2025/01/24 18:26:47 by Dias             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex_ptr(unsigned long long num)
{
	int		print_length;
	char	*symbols;

	print_length = 0;
	symbols = "0123456789abcdef";
	if (num >= 16)
		print_length += ft_print_hex_ptr(num / 16);
	print_length += ft_print_char(symbols[num % 16]);
	return (print_length);
}
