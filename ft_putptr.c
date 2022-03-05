/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjosua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 18:32:41 by hjosua            #+#    #+#             */
/*   Updated: 2021/10/27 18:33:08 by hjosua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(unsigned long long n)
{
	char	*alph;
	int		res;

	alph = "0123456789abcdef";
	res = 1;
	if (n / 16 > 0)
		res += ft_putptr(n / 16);
	else
	{
		write(1, "0x", 2);
		res += 2;
	}
	write(1, &alph[n % 16], 1);
	return (res);
}
