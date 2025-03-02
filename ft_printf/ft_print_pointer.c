/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dias <dinursul@student.42.it>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 16:29:14 by Dias              #+#    #+#             */
/*   Updated: 2025/01/14 18:13:15 by Dias             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_pointer(unsigned long long ptr)
{
	int	print_length;

	print_length = 0;
	if (ptr == 0)
		return (write (1, "0x0", 3));
	print_length += ft_print_string("0x");
	print_length += ft_print_hex_ptr(ptr);
	return (print_length);
}
