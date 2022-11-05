/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexadecimal.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 21:03:29 by nakebli           #+#    #+#             */
/*   Updated: 2022/11/05 10:09:30 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void ft_puthexadecimal(int value, char c, int *len)
{
    char    *str;
    
    if(c == 'x')
        str = "0123456789abcdef";
    else if (c == 'X')
        str = "0123456789ABCDEF";
    if(value > 16)
	{
		ft_printphd(value / 16, len);
		ft_printphd(value % 16, len);
	}
	else
		ft_putchar(str[value], len);
}
