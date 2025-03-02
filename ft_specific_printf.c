/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specific_printf.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dias <dias@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 10:18:34 by dias              #+#    #+#             */
/*   Updated: 2025/03/02 10:18:45 by dias             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_printf(char *str, int value)
{
	char	num[12];
	int		i;
	int		temp;

	while (*str)
	{
		if (*str == '%' && *(str + 1) == 'd')
		{
			i = 0;
			if (value == 0)
				num[i++] = '0';
			else
			{
				temp = value;
				while (temp > 0)
				{
					temp /= 10;
					i++;
				}
				temp = i;
				while (value > 0)
				{
					num[--i] = (value % 10) + '0';
					value /= 10;
				}
				i = temp;
			}
			num[i] = '\0';
			i = 0;
			while (num[i])
				write(1, &num[i++], 1);
			str += 2;
		}
		else
			write(1, str++, 1);
	}
}