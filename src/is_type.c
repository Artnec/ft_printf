/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_type.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anesteru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 21:57:03 by anesteru          #+#    #+#             */
/*   Updated: 2018/01/29 21:57:05 by anesteru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_type(const char *s)
{
	return (*s == 'c' || *s == 'C' || *s == 's' || *s == 'S' || *s == 'i'
		|| *s == 'd' || *s == 'D' || *s == 'u' || *s == 'U' || *s == 'x'
		|| *s == 'X' || *s == 'o' || *s == 'O' || *s == 'p' || *s == 'b');
}