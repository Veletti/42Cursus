/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvela-fe <rvela-fe@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 00:16:50 by rvela-fe          #+#    #+#             */
/*   Updated: 2023/03/18 01:42:08 by rvela-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

void	arg_list(va_list va, char type);
int		arg_count(va_list va, char type, int len);

int	ft_printf(char const *str, ...)
{
	int		len;
	va_list	va;
	va_list	copy;

	len = 0;
	va_start(va, str);
	va_copy(copy, va);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			arg_list(va, *str);
			len += arg_count(copy, *str, 1);
			str++;
		}
		else
		{
			write(1, str, 1);
			len += 1;
			str++;
		}
	}
	va_end(va);
	return (len);
}

void	arg_list(va_list va, char type)
{
	if (type == 'c')
		ft_putchar_fd(va_arg(va, int), 1);
	else if (type == 's')
		ft_putstr_fd(va_arg(va, char *), 1);
	else if (type == 'p')
		ft_pointer(va_arg(va, unsigned long long int));
	else if (type == 'i' || type == 'd')
		ft_putnbr_fd(va_arg(va, int), 1);
	else if (type == 'u')
		ft_putunsignednb(va_arg(va, unsigned int));
	else if (type == 'x')
		ft_hexadecimal(va_arg(va, unsigned long long int), 'x');
	else if (type == 'X')
		ft_hexadecimal(va_arg(va, unsigned long long int), 'X');
	else if (type == '%')
		ft_putchar_fd('%', 1);
}

int	arg_count(va_list va, char type, int len)
{
	if (type == 'c' || type == '%')
		len = 1;
	else if (type == 's')
		len = ft_len_char(va_arg(va, char *));
	else if (type == 'p')
		len = ft_len_hexadecimal(va_arg(va, unsigned long long int)) + 2;
	else if (type == 'i' || type == 'd')
		len = ft_len_number(va_arg(va, unsigned int));
	else if (type == 'u')
		len = ft_len_number(va_arg(va, int));
	else if (type == 'x' || type == 'X')
		len = ft_len_hexadecimal(va_arg(va, unsigned long long int));
	return (len);
}
