/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veletti <veletti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 17:28:03 by rvela-fe          #+#    #+#             */
/*   Updated: 2022/12/07 22:50:36 by veletti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	unsigned char	ch;

	ch = c;
	while (*str != '\0')
	{
		if (*str == ch)
		{
			return ((char *) str);
		}
		str++;
	}
	if (ch == '\0')
	{
		return ((char *) str);
	}
	return (NULL);
}
