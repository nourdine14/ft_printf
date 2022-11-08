/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 18:34:00 by nakebli           #+#    #+#             */
/*   Updated: 2022/11/06 19:28:55 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	ft_check(char c, int *len, void *value)
{
	if (c == 'c')
		ft_putchar((char)value, len);
	else if (c == 'u')
		ft_printunsignedint((unsigned int)value, len);
	else if (c == 's')
		ft_putstr((char *)value, len);
	else if (c == 'p')
	{
		ft_putstr("0x", len);
		ft_putptr_hexad((unsigned long)value, len);
	}
	else if (c == 'd' || c == 'i')
		ft_putnbr((int)value, len);
	else if (c == 'x' || c == 'X')
		ft_puthexadecimal((unsigned int)value, c, len);
	else
		ft_putchar(c, len);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		len;
	va_list	lst;

	len = 0;
	i = -1;
	va_start(lst, format);
	while (format[++i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] && format[i] != '%')
				ft_check(format[i], &len, va_arg(lst, void *));
			else if (format[i] && format[i] == '%')
				ft_putchar('%', &len);
			else
				return (len);
		}
		else
			ft_putchar(format[i], &len);
	}
	va_end(lst);
	return (len);
}
