/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvela-fe <rvela-fe@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 17:28:03 by rvela-fe          #+#    #+#             */
/*   Updated: 2022/12/03 18:15:01 by rvela-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	unsigned char	len;

	len = c;
	while (*str != '\0')
	{
		if (*str == len)
		{
			return ((char *) str);
		}
		str++;
	}
	if (len == '\0')
	{
		return ((char *) str);
	}
	return (NULL);
}
