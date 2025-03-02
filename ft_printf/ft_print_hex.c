/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dias <dinursul@student.42.it>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 16:47:22 by Dias              #+#    #+#             */
/*   Updated: 2025/01/14 16:50:20 by Dias             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned int num, const char format)
{
	int		print_length;
	char	*symbols;

	print_length = 0;
	if (format == 'x')
		symbols = "0123456789abcdef";
	else
		symbols = "0123456789ABCDEF";
	if (num >= 16)
		print_length += ft_print_hex(num / 16, format);
	print_length += ft_print_char(symbols[num % 16]);
	return (print_length);
}
