/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_space_or_zero.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anesteru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 15:37:57 by anesteru          #+#    #+#             */
/*   Updated: 2018/01/29 15:38:04 by anesteru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		put_space_or_zero(int width, int zero)
{
	int	i;

	i = -1;
	if (zero == 0)
		while (++i < width)
			write(1, " ", 1);
	else
		while (++i < width)
			write(1, "0", 1);
	return (i);
}
