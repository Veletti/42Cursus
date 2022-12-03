/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvela-fe <rvela-fe@student.barcel>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 21:42:31 by rvela-fe          #+#    #+#             */
/*   Updated: 2022/12/03 17:58:44 by rvela-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	if ((char)c == '\0')
	{
		return ((char *)s + len);
	}
	while (len > 0)
	{
		len--;
		if (*(s + len) == (char) c)
		{
			return ((char *)s + len);
		}
	}
	return (NULL);
}
