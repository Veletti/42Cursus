/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsignednb.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvela-fe <rvela-fe@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 00:56:56 by rvela-fe          #+#    #+#             */
/*   Updated: 2023/03/18 01:43:30 by rvela-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

void	ft_putunsignednb(unsigned int n)
{
	if (n > 9)
	{
		ft_putunsignednb(n / 10);
		ft_putunsignednb(n % 10);
	}
	else
	{
		ft_putchar_fd((n + '0'), 1);
	}
}
