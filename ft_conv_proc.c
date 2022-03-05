/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_proc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjosua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 18:37:48 by hjosua            #+#    #+#             */
/*   Updated: 2021/10/27 18:38:11 by hjosua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_conv_proc(va_list param, const char *str)
{
	if (*str == '%')
		return (ft_putchar('%'));
	if (*str == 'c')
		return (ft_putchar(va_arg(param, int)));
	if (*str == 's')
		return (ft_putstr(va_arg(param, char *)));
	if (*str == 'p')
		return (ft_putptr(va_arg(param, unsigned long long)));
	if (*str == 'd' || *str == 'i')
		return (ft_putdec(va_arg(param, int)));
	if (*str == 'u')
		return (ft_putudec(va_arg(param, unsigned int)));
	if (*str == 'x')
		return (ft_putlowhex(va_arg(param, unsigned int )));
	if (*str == 'X')
		return (ft_putupphex(va_arg(param, unsigned int )));
	return (1);
}
