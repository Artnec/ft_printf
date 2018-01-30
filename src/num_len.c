/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num_len.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anesteru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/28 22:21:22 by anesteru          #+#    #+#             */
/*   Updated: 2018/01/28 22:21:44 by anesteru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		num_len(long long num, t_flags sd)
{
	int	i;

	i = (sd.precision == 0 && num == 0) ? 0 : 1;
	while (num /= 10)
		i++;
	return (i);
}

int		unsigned_num_len(size_t num, unsigned int base, t_flags sd)
{
	int	i;

	i = (sd.precision == 0 && num == 0) ? 0 : 1;
	while (num /= base)
		i++;
	return (i);
}
