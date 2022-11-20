/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvela-fe <rvela-fe@student.barcel>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 20:32:57 by rvela-fe          #+#    #+#             */
/*   Updated: 2022/11/19 18:41:55 by rvela-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_while(char const *src, char *str, int i, size_t x)
{
	while (src[i])
	{
		str[x] = src[i];
		i++;
		x++;
	}
	return (x);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		count_s1;
	int		count_s2;
	int		i;
	int		j;

	count_s1 = ft_strlen(s1);
	count_s2 = ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (count_s1 + count_s2 + 1));
	if (!str)
	{
		return (NULL);
	}
	i = 0;
	j = 0;
	j = ft_while(s1, str, i, 0);
	j = ft_while(s2, str, i, j);
	str[j] = '\0';
	return (str);
}
