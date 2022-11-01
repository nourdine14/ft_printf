/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:02:24 by nakebli           #+#    #+#             */
/*   Updated: 2022/10/31 11:39:53 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_putnbr(int n, int *len)
{
    if (n == -2147483648)
	{
		ft_putchar('-', len);
		ft_putchar('2', len);
		ft_putnbr(147483648, len);
	}
	else
	{
		if (n < 0)
		{
			ft_putchar('-', len);
			n = -n;
		}
		if (n > 9)
		{
			ft_putnbr(n / 10, len);
			ft_putnbr(n % 10,len);
		}
		else
			ft_putchar(n % 10 + '0', len);
	}
}
