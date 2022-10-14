/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvela-fe <rvela-fe@student.barcel>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:12:47 by rvela-fe          #+#    #+#             */
/*   Updated: 2022/10/13 17:02:54 by rvela-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest;
	char	*sorc;
	size_t	i;

	dest = dst;
	sorc = (char *)src;
	i = 0;
	if (dest == sorc || !len)
	{
		return (dest);
	}
	if (dest < sorc)
	{
		while (i < len)
		{
			dest[i] = sorc[i];
			i++;
		}
	}
	if (dest > sorc)
	{
		while (len > 0)
		{
			dest[len - 1] = sorc[len - 1];
			len--;
		}
	}
	return (dest);
}

/*
1. Puntero a una cadena de destino.
2. Puntero a una cadena de origen.
3. Numero de bytes que se copiarán.

Devuelve un puntero a la cadena dst.

Copia los primeros n caracteres del objeto apuntado por src al objeto apuntado
por dst. Sin embargo, se asegura de que no estén superpuestos.
*/
