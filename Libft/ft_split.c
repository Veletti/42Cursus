/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvela-fe <rvela-fe@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 18:45:31 by rvela-fe          #+#    #+#             */
/*   Updated: 2022/11/27 13:20:25 by rvela-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_del(char const *s, char c)
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

static int	ft_size_word(char const *s, char c, int i)
{
	int	size;

	size = 0;
	while (s[i] != c && s[i])
	{
		size++;
		i++;
	}
	return (size);
xs}

static void	ft_free(char **str, int i)
{
	while (i > 0)
	{
		free (str[i]);
		i--;
	}	
	free(str);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		size;
	char	**srcs;

	i = 0;
	j = -1;
	srcs = (char **)malloc(sizeof(char *) * (ft_count_del(s, c) + 1));
	if (!srcs)
		return (0);
	while (++j < ft_count_del(s, c))
	{
		while (s[i] == c)
			i++;
		size = ft_size_word(s, c, i);
		srcs[j] = ft_substr(s, i, size);
		if (!srcs[j])
		{
			ft_free(srcs, i);
			return (NULL);
		}
		i += size;
	}
	srcs[j] = 0;
	return (srcs);
}
