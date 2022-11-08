/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsignedint.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 12:44:36 by nakebli           #+#    #+#             */
/*   Updated: 2022/11/06 18:31:33 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_printunsignedint(unsigned int value, int *len)
{
	if (value > 9)
	{
		ft_printunsignedint(value / 10, len);
		ft_printunsignedint(value % 10, len);
	}
	else
		ft_putchar(value + '0', len);
}
