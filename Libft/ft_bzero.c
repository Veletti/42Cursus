/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvela-fe <rvela-fe@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 19:16:00 by rvela-fe          #+#    #+#             */
/*   Updated: 2022/10/07 20:22:23 by rvela-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = s;
	if (n > 0)
	{
		while ((char *)s && i != n)
		{
			str[i] = '\0';
			i++;
		}
	}
}

/*La función bzero() pone a cero los n primeros bytes de la
  cadena de bytes s. Si n es cero, bzero() no hace nada. */
