/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvela-fe <rvela-fe@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 17:41:26 by rvela-fe          #+#    #+#             */
/*   Updated: 2022/10/29 19:50:13 by rvela-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*src;
	int		i;
	int		count;

	i = 0;
	if (!s)
	{
		return (NULL);
	}
	count = ft_strlen(s);
	src = (char *)malloc(sizeof(char) * (count + 1));
	if (!src)
	{
		return (NULL);
	}
	while (i < count)
	{
		src[i] = f(i, s[i]);
		i++;
	}
	src[i] = '\0';
	return (src);
}
