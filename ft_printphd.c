/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printphd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:10:18 by nakebli           #+#    #+#             */
/*   Updated: 2022/11/05 10:10:14 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void ft_printphd(unsigned long  n, int *len)
{
	char *str;
 
	str = "0123456789abcdef";
	if(n > 16)
	{
		ft_printphd(n / 16, len);
		ft_printphd(n % 16, len);
	}
	else
		ft_putchar(str[n], len);
}
