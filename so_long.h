/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dias <dias@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 10:50:52 by dias              #+#    #+#             */
/*   Updated: 2025/02/25 11:25:20 by dias             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include "get_next_line.h"

int		ft_count_dots(char *path);
void	ft_is_correct_arguments(int ac);
void	ft_is_correct_path(char *path);
int		ft_strcmp(char *s1, char *s2);
void	ft_terminate(void);

#endif