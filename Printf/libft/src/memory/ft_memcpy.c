/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvela-fe <rvela-fe@student.barcel>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:46:49 by rvela-fe          #+#    #+#             */
/*   Updated: 2022/12/04 19:21:39 by rvela-fe         ###   ########.fr       */
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
	if (sorc == NULL && dest == NULL)
	{
		return (NULL);
	}
	while (i < n)
	{
		dest[i] = sorc[i];
		i++;
	}
	return (dest);
}
