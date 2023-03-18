/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvela-fe <rvela-fe@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 01:00:15 by rvela-fe          #+#    #+#             */
/*   Updated: 2023/03/18 01:43:33 by rvela-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_len_hexadecimal(unsigned long long int num);
int	ft_len_char(char *s);
int	ft_len_number(int n);

int	ft_len_hexadecimal(unsigned long long int num)
{
	int	i;

	i = 0;
	while (num)
	{
		num = num / 16;
		i++;
	}
	return (i);
}

int	ft_len_char(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (*s)
	{
		i++;
		s++;
	}
	return (i);
}

int	ft_len_number(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}
