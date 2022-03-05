/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjosua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 18:16:23 by hjosua            #+#    #+#             */
/*   Updated: 2021/10/27 18:31:52 by hjosua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	param;
	int		res;

	if (str == NULL)
		return (0);
	res = 0;
	va_start(param, str);
	while (*str)
	{
		if (*str != '%')
			res += ft_putchar(*str);
		else
		{
			str++;
			res += ft_conv_proc(param, str);
		}
		str++;
	}
	va_end(param);
	return (res);
}
