/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvela-fe <rvela-fe@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 23:14:39 by rvela-fe          #+#    #+#             */
/*   Updated: 2023/05/27 00:32:12 by rvela-fe         ###   ########.fr       */
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

static int	ft_while(char const *src, char *str, size_t j)
{
	int	i;

	i = 0;
	while (src[i])
	{
		str[j] = src[i];
		i++;
		j++;
	}
	return (j);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		len_s1;
	int		len_s2;
	int		j;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (!str)
	{
		return (NULL);
	}
	j = 0;
	j = ft_while(s1, str, j);
	j = ft_while(s2, str, j);
	str[j] = '\0';
	return (str);
}