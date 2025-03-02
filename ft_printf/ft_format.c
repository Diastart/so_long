/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dias <dinursul@student.42.it>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 11:55:33 by Dias              #+#    #+#             */
/*   Updated: 2025/01/14 18:03:37 by Dias             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(char specifier, va_list *args)
{
	int	print_length;

	print_length = 0;
	if (specifier == 'c')
		print_length += ft_print_char(va_arg(*args, int));
	else if (specifier == 's')
		print_length += ft_print_string(va_arg(*args, char *));
	else if (specifier == 'p')
		print_length += ft_print_pointer(va_arg(*args, unsigned long long));
	else if (specifier == 'd' || specifier == 'i')
		print_length += ft_print_number(va_arg(*args, int));
	else if (specifier == 'u')
		print_length += ft_print_unsigned(va_arg(*args, unsigned int));
	else if (specifier == 'x' || specifier == 'X')
		print_length += ft_print_hex(va_arg(*args, unsigned int), specifier);
	else if (specifier == '%')
		print_length += ft_print_percent();
	return (print_length);
}
