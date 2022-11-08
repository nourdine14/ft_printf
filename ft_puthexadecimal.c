/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexadecimal.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 21:03:29 by nakebli           #+#    #+#             */
/*   Updated: 2022/11/06 19:15:05 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_puthexadecimal(unsigned int value, char c, int *len)
{
	char	*str;

	if (c == 'X')
		str = "0123456789ABCDEF";
	else if (c == 'x')
		str = "0123456789abcdef";
	if (value >= 16)
	{
		ft_puthexadecimal(value / 16, c, len);
		ft_puthexadecimal(value % 16, c, len);
	}
	else
		ft_putchar(str[value], len);
}
