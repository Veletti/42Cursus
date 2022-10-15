/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvela-fe <rvela-fe@student.barcel>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 22:03:53 by rvela-fe          #+#    #+#             */
/*   Updated: 2022/10/15 18:45:53 by rvela-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	len_x(const char *haystack, const char *needle, size_t len, size_t i)
{
	size_t	x;

	x = 0;
	while (haystack[i + x] != '\0' && needle[x] != '\0'
		&& haystack[i + x] == needle[x] && i + x < len)
	{
		x++;
	}
	return (x);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		x;
	size_t		count;

	i = 0;
	count = ft_strlen(needle);
	if (needle[0] == '\0' || haystack == needle)
	{
		return ((char *) haystack);
	}
	while (haystack[i] != '\0' && i < len)
	{
		x = len_x(haystack, needle, len, i);
		if (x == count)
		{
			return ((char *) haystack + i);
		}
		i++;
	}
	return (NULL);
}
