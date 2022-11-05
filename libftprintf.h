/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:09:34 by nakebli           #+#    #+#             */
/*   Updated: 2022/11/05 19:06:19 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>


int     ft_printf(const char *format, ...);
void    ft_putchar(char c,int *len);
void    ft_putnbr(int n, int *len);
void	ft_putstr(char *s, int *len);
void    ft_printphd(unsigned long n, int *len);
void    ft_printunsignedint(unsigned int value, int *len);
void    ft_puthexadecimal(int value, char c, int *len);

#endif