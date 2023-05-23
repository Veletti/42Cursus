/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvela-fe <rvela-fe@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 22:27:43 by rvela-fe          #+#    #+#             */
/*   Updated: 2023/04/05 22:46:47 by rvela-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer(unsigned long long str, int len)
{
	write(1, "0x", 2);
	len = 2;
	if (str == 0)
		len = len + write(1, "0", 1);
	else
		ft_hexa_converter(str, 'x');
		len = len + ft_hexa_len(str);
	return (len);
}

int	ft_hexa_len(unsigned long long num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}
