/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvela-fe <rvela-fe@student.barcel>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:46:49 by rvela-fe          #+#    #+#             */
/*   Updated: 2022/10/13 16:11:12 by rvela-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*sorc;
	char	*dest;
	size_t	i;

	sorc = (char *)src;
	dest = dst;
	i = 0;
	if (sorc == (char *)'\0' && dest == (char *)'\0')
	{
		return (0);
	}
	while (i < n)
	{
		dest[i] = sorc[i];
		i++;
	}
	return (dest);
}

/*Copia n caracteres del area de la memoria de src en el area de la memoria de dst.*/
