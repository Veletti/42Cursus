/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvela-fe <rvela-fe@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 00:52:38 by rvela-fe          #+#    #+#             */
/*   Updated: 2023/03/18 01:42:02 by rvela-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

void	ft_pointer(unsigned long long int ptr)
{
	write(1, "0x", 2);
	if (ptr == 0)
		write(1, "0", 1);
	else
	{
		ft_hexadecimal(ptr, 'x');
	}
}
