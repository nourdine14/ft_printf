/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_hexad.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 19:15:49 by nakebli           #+#    #+#             */
/*   Updated: 2022/11/06 19:22:25 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putptr_hexad(unsigned long value, int *len)
{
	char	*str;

	str = "0123456789abcdef";
	if (value >= 16)
	{
		ft_putptr_hexad(value / 16, len);
		ft_putptr_hexad(value % 16, len);
	}
	else
		ft_putchar(str[value], len);
}
