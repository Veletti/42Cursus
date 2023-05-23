/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvela-fe <rvela-fe@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 22:30:16 by rvela-fe          #+#    #+#             */
/*   Updated: 2023/05/23 21:47:22 by rvela-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	int_negative_min(void)
{
	if (write(1, "-2147483648", 11) != 11)
		return (-1);
	return (11);
}

int	ft_putnbr(int n, int len)
{
	if (n == -2147483648)
		return (int_negative_min());
	if (n < 0)
	{
		n = -n;
		if (write (1, "-", 1) != 1)
			return (-1);
		len++;
	}
	if (n > 9)
	{
		len += ft_putnbr(n / 10, len);
		if (len == -1)
			return (-1);
		n = n % 10;
	}
	if (n <= 9)
	{
		if (ft_putchar((n + '0')) == -1)
			return (-1);
		len++;
	}
	return (len);
}
