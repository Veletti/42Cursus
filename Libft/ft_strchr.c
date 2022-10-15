/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvela-fe <rvela-fe@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 17:28:03 by rvela-fe          #+#    #+#             */
/*   Updated: 2022/10/15 18:40:07 by rvela-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	unsigned char	i;

	i = c;
	while (*str != '\0')
	{
		if (*str == i)
		{
			return ((char *) str);
		}
		str++;
	}
	if (i == '\0')
	{
		return ((char *) str);
	}
	return (NULL);
}
