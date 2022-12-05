/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvela-fe <rvela-fe@student.barcel>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:12:47 by rvela-fe          #+#    #+#             */
/*   Updated: 2022/12/05 22:07:06 by rvela-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_strcpy(void *dst, const void *src, size_t len)
{
	char	*dest;
	char	*sorc;
	size_t	i;

	dest = (char *)dst;
	sorc = (char *)src;
	i = 0;
	if (dst < src)
	{
		while (i < len)
		{
			dest[i] = sorc[i];
			i++;
		}
	}
	if (src < dst)
	{
		while (len > 0)
		{
			dest[len - 1] = sorc[len - 1];
			len--;
		}
	}
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (dst == src || !len)
	{
		return (dst);
	}
	ft_strcpy(dst, src, len);
	return (dst);
}
