/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvela-fe <rvela-fe@student.barcel>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 21:42:31 by rvela-fe          #+#    #+#             */
/*   Updated: 2022/10/04 21:48:28 by rvela-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* Devuelve un puntero en la última ocurrencia del carácter c en la string s. */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;

	i = ft_strlen(s);
	if ((unsigned char)c == '\0')
	{
		return ((char *)s + i);
	}
	while (i > 0)
	{
		i--;
		if (*(s + i) == (unsigned char) c)
		{
			return ((char *)s + i);
		}
	}
	return ((char *) '\0');
}
