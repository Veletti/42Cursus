/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvela-fe <rvela-fe@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 20:36:26 by rvela-fe          #+#    #+#             */
/*   Updated: 2022/09/22 16:21:57 by rvela-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include<unistd.h>
# include<stdlib.h>
# include<stdio.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size);
int	ft_strlen(const char *str);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
#endif
