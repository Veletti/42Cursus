/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvela-fe <rvela-fe@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 23:14:39 by rvela-fe          #+#    #+#             */
/*   Updated: 2023/06/02 20:55:01 by rvela-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(sizeof(void) * (count * size));
	if (!ptr)
	{
		return (NULL);
	}
	else
	{
		ft_bzero(ptr, count * size);
		return (ptr);
	}
}

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

char	*ft_strchr(const char *str, int c)
{
	unsigned char	ch;

	ch = c;
	while (*str != '\0')
	{
		if (*str == ch)
		{
			return ((char *) str);
		}
		str++;
	}
	if (ch == '\0')
	{
		return ((char *) str);
	}
	return (NULL);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		j;

	i = ft_strlen(s1);
	j = ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (i + j + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}
