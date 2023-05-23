/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsignednb.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvela-fe <rvela-fe@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 22:32:01 by rvela-fe          #+#    #+#             */
/*   Updated: 2023/05/23 21:50:57 by rvela-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsignednb(unsigned int n, int len)
{
	if (n > 9)
	{
		len = ft_putunsignednb((n / 10), len);
		if (len == -1)
			return (-1);
		n = n % 10;
	}
	if (n <= 9)
	{
		if (ft_putchar(n + '0') == -1)
			return (-1);
		len ++;
	}
	return (len);
}
