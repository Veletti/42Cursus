/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvela-fe <rvela-fe@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 22:11:19 by rvela-fe          #+#    #+#             */
/*   Updated: 2023/05/23 23:21:25 by rvela-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char const *str, ...)
{
	int		len;
	va_list	va;

	len = 0;
	va_start(va, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			len += arg_list(va, *str);
			str++;
		}
		else
		{
			if (write(1, str, 1) == -1)
				return (-1);
			len += 1;
			str++;
		}
	}
	va_end(va);
	return (len);
}

int	arg_list(va_list va, char type)
{
	if (type == 'c')
		return (ft_putchar(va_arg(va, int)));
	else if (type == 's')
		return (ft_putstr(va_arg(va, char *), 0));
	else if (type == 'p')
		return (ft_pointer(va_arg(va, unsigned long long), 0));
	else if (type == 'i' || type == 'd')
		return (ft_putnbr(va_arg(va, int), 0));
	else if (type == 'u')
		return (ft_putunsignednb(va_arg(va, unsigned int), 0));
	else if (type == 'x')
		return (ft_hexadecimal(va_arg(va, unsigned long long), 'x'));
	else if (type == 'X')
		return (ft_hexadecimal(va_arg(va, unsigned long long), 'X'));
	else if (type == '%')
		return (ft_putchar('%'));
	return (0);
}
