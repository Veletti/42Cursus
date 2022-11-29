/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvela-fe <rvela-fe@student.barcel>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 23:12:04 by rvela-fe          #+#    #+#             */
/*   Updated: 2022/11/29 23:41:25 by rvela-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_del(char const *s, char c)
{
	int	i;
	int	del;

	i = 0;
	del = 0;
	while (s && s[i])
	{
		if (s[i] != c)
		{
			while (s[i] != c && s[i])
			{
				i++;
			}
			del++;
		}
		else
		{
			i++;
		}
	}
	return (del);
}

static char	**ft_free(char **str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		free (str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**srcs;
	size_t	i;
	size_t	count;
	size_t	pos;

	i = 0;
	count = 0;
	srcs = (char **)malloc(sizeof(char *) * (ft_count_del(s, c) + 1));
	if (!srcs)
		return (0);
	while (i < ft_count_del(s, c) && s[count] != '\0')
	{
		while (s[count] == c)
			count++;
		pos = count;
		while (s[count] != c && s[count] != '\0')
			count++;
		srcs[i] = ft_substr(s, pos, count - pos);
		if (srcs[i] == NULL)
			return (ft_free(srcs));
		i++;
	}
	srcs[i] = 0;
	return (srcs);
}
