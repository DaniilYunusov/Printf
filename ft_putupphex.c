/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putupphex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjosua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 18:36:50 by hjosua            #+#    #+#             */
/*   Updated: 2021/10/27 18:37:15 by hjosua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putupphex(unsigned int n)
{
	char	*alph;
	int		res;

	alph = "0123456789ABCDEF";
	res = 1;
	if (n / 16 > 0)
		res += ft_putupphex(n / 16);
	write(1, &alph[n % 16], 1);
	return (res);
}
