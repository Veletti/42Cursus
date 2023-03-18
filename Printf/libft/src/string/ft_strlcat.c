/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvela-fe <rvela-fe@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 20:59:20 by rvela-fe          #+#    #+#             */
/*   Updated: 2022/09/22 13:00:30 by rvela-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	res_a;
	size_t	res_b;

	i = ft_strlen(dst);
	j = 0;
	res_a = ft_strlen(dst);
	res_b = ft_strlen(src);
	if (dstsize < 1)
		return (res_b + dstsize);
	while (src[j] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	if (dstsize < res_a)
		return (res_b + dstsize);
	else
		return (res_a + res_b);
}
