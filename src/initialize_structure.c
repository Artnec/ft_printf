/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize_structure.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anesteru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 21:51:08 by anesteru          #+#    #+#             */
/*   Updated: 2018/01/29 21:51:10 by anesteru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	initialize_structure(t_flags *sd)
{
	sd->width = 0;
	sd->precision = -1;
	sd->minus = 0;
	sd->type = 0;
	sd->hash = 0;
	sd->space = 0;
	sd->zero = 0;
	sd->plus = 0;
	sd->length = 0;
	sd->wc = 0;
	sd->error = 0;
}
