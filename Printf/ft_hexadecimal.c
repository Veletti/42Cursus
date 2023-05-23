/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvela-fe <rvela-fe@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 22:28:45 by rvela-fe          #+#    #+#             */
/*   Updated: 2023/04/05 22:47:01 by rvela-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hexa_converter(unsigned long long num, char type)
{
	if (num >= 16)
	{
		ft_hexa_converter(num / 16, type);
		ft_hexa_converter(num % 16, type);
	}
	else
	{
		if (num <= 9)
			ft_putchar(num + '0');
		else
		{
			if (type == 'x')
				ft_putchar(num - 10 + 'a');
			else
				ft_putchar(num - 10 + 'A');
		}
	}
}

int	ft_hexadecimal(unsigned int num, char type)
{
	if (num == 0)
		return (write(1, "0", 1));
	else
		ft_hexa_converter(num, type);
	return (ft_hexa_len(num));
}
