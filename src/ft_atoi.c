/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anesteru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 20:33:08 by anesteru          #+#    #+#             */
/*   Updated: 2018/01/17 20:33:17 by anesteru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_atoi(const char **str, va_list argp)
{
	long	res;
	int		precision;

	res = 0;
	if (**str == '.')
		*str += 1;
	if (**str == '*')
	{
		precision = va_arg(argp, int);
		if (precision < 0)
			precision = -1;
		return (precision);
	}
	while (**str >= '0' && **str <= '9')
	{
		res = (res * 10) + **str - '0';
		*str += 1;
	}
	*str -= 1;
	return (res);
}
