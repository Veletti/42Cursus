/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvela-fe <rvela-fe@student.barcel>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 21:42:31 by rvela-fe          #+#    #+#             */
/*   Updated: 2022/10/15 18:41:03 by rvela-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	if ((char)c == '\0')
	{
		return ((char *)s + i);
	}
	while (i > 0)
	{
		i--;
		if (*(s + i) == (char) c)
		{
			return ((char *)s + i);
		}
	}
	return (NULL);
}

/* Devuelve un puntero en la última ocurrencia del carácter c en la string s. */
