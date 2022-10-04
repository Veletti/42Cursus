/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvela-fe <rvela-fe@student.barcel>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 20:13:34 by rvela-fe          #+#    #+#             */
/*   Updated: 2022/10/04 21:05:33 by rvela-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*La función memchr() localiza la primera aparición de c
  (convertido en char sin signo) en la cadena s.
  Devuelve un puntero al byte ubicado, o NUL si no existe
  tal byte dentro de n bytes.*/

#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*src;
	size_t			i;

	src = (unsigned char *)s;
	i = 0;
	while (i != n)
	{
		if (src[i] == ((unsigned char)c))
		{
			return (src + i);
		}
		i++;
	}
	return (0);
}
