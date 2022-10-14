/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvela-fe <rvela-fe@student.barcel>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 21:56:53 by rvela-fe          #+#    #+#             */
/*   Updated: 2022/10/14 18:33:08 by rvela-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*src;
	size_t			i;

	src = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		*(src + i) = (unsigned char)c;
		i++;
	}
	return (b);
}

/*Copia el caracter c (un char sin signo) a los primeros n caracteres de (b).*/
