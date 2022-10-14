/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvela-fe <rvela-fe@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 19:16:00 by rvela-fe          #+#    #+#             */
/*   Updated: 2022/10/13 13:31:06 by rvela-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*src;

	i = 0;
	src = s;
	while (n > 0)
	{
		src[i] = '\0';
		i++;
		n--;
	}
}

/*La función bzero() pone a cero los n primeros bytes de la
  cadena de bytes s. Si n es cero, bzero() no hace nada. */
