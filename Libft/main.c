/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veletti <veletti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 20:33:35 by rvela-fe          #+#    #+#             */
/*   Updated: 2022/12/07 22:50:08 by veletti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include "libft.h"

static void	ft_toupper_teri(unsigned int i,char *c)
{
	if ( *c >= 'a' && *c <= 'z')
	{
		*c = *c - 32;
	}
}

static char	ft_toupper_mapi(unsigned int i,char c)
{
	if ( c >= 'a' && c <= 'z')
	{
		c = c - 32;
	}
	return (c);
}

int	main(void)
{
	int		fd;
	fd = open("test_putchar", O_RDWR | O_CREAT);
	char	s1[] = "Me gusta programar en 42 Barcelona";
	char	s2[] = "Me gusta programar en 42 Barcelona";
	char	s[] = "Me gusta programar en 42 Barcelona";
	char	src[] = "Me gusta programar en 42 Barcelona";
	char	dst[] = "Me gusta programar en 42 Barcelona";
	char	set[] = "Me gusta programar en 42 Barcelona";
	char	haystack[] = "Me gusta programar en 42 Barcelona";
	char	needle[] = "42 Barcelona";
	
	/*ft_atoi*/
	char atoi[] = "	-12345645665";
	printf("%s\n",(ft_atoi(atoi), "ft_atoi OK"));
	/*ft_bzero*/
	char bzero[] = "Me gusta programar en 42 Barcelona";
	printf("%s\n",(ft_bzero(bzero, 10), "ft_bzero OK"));
	/*ft_calloc*/
	printf("%s\n",(ft_calloc(5, 2), "ft_calloc OK"));
	/*ft_isalnum*/
	printf("%s\n",(ft_isalnum(5), "ft_isalnum OK"));
	/*ft_isalpha*/
	printf("%s\n",(ft_isalpha('t'), "ft_isalpha OK"));
	/*ft_isascii*/
	printf("%s\n",(ft_isascii(8), "ft_isascii OK"));
	/*ft_isdigit*/
	printf("%s\n",(ft_isdigit(6), "ft_isdigit OK"));
	/*ft_isprint*/
	printf("%s\n",(ft_isprint(4), "ft_isprint OK"));
	/*ft_itoa*/
	printf("%s\n",(ft_itoa(1234567890), "ft_itoa OK"));
	/*ft_memcmp*/
	printf("%s\n",(ft_memcmp(s1, s2, 35), "ft_memcmp OK"));
	/*ft_memcpy*/
	printf("%s\n", (ft_memcpy(dst, src, 9), "ft_memcpy OK"));
	/*ft_memchr*/
	printf("%s\n", (ft_memchr(s, '4', 35), "ft_memchr OK"));
	/*ft_memmove*/
	printf("%s\n", (ft_memmove(dst, src, 12), "ft_memmove OK"));
	/*ft_memset*/
	printf("%s\n", (ft_memset(set, 'g', 7), "ft_memset OK"));
	/*ft_putchar_fd*/
	printf("%s\n", (ft_putchar_fd('T', fd), "ft_putchar_fd OK"));
	/*ft_putendl_fd*/
	printf("%s\n", (ft_putendl_fd(src, fd), "ft_putendl_fd OK"));
	/*ft_putnbr_fd*/
	printf("%s\n", (ft_putnbr_fd(4546, fd), "ft_putnbr_fd OK"));
	/*ft_putstr_fd*/
	printf("%s\n", (ft_putstr_fd(src, fd), "ft_putstr_fd OK"));
	/*ft_split*/
	char const split[] = "ENERO, FEBRERO, MARZO, ABRIL, MAYO, JUNIO";
	printf("%s\n", (ft_split(split, ','), "ft_split OK"));
	/*ft_strchr*/
	printf("%s\n", (ft_strchr(s1, 'g'), "ft_strchr OK"));
	/*ft_strdup*/
	printf("%s\n", (ft_strdup(s1), "ft_strdup OK"));
	/*ft_striteri*/
	printf("%s\n", (ft_striteri(s1, ft_toupper_teri), "ft_striteri OK"));
	/*ft_strjoin*/
	printf("%s\n", (ft_strjoin(s1, s2), "ft_strjoin OK"));
	/*ft_strlcat*/
	printf("%s\n", (ft_strlcat(dst, src, sizeof(dst)), "ft_strlcat OK"));
	/*ft_strlcpy*/
	printf("%s\n", (ft_strlcpy(dst, src, 3), "ft_strlcpy OK"));
	/*ft_strlen*/
	printf("%s\n", (ft_strlen(s), "ft_strlen OK"));
	/*ft_strmapi*/
	printf("%s\n", (ft_strmapi(s1, ft_toupper_mapi), "ft_strmapi OK"));
	/*ft_strncmp*/
	printf("%s\n", (ft_strncmp(s1, s2, 15), "ft_strncmp OK"));
	/*ft_strnstr*/
	printf("%s\n", (ft_strnstr(haystack, needle, 35), "ft_strnstr OK"));
	/*ft_strtrim*/
	char	cadena[] = "xyzHolaxyzAdiosxyz";
	char	search[] = "xyz";
	printf("%s\n", (ft_strtrim(cadena, search), "ft_strtrim OK"));
	/*ft_strrchr*/
	printf("%s\n", (ft_strrchr(s1, 'g'), "ft_strrchr OK"));
	/*ft_substr*/
	int	start = 22;
	int	len = 13;
	printf("%s\n", (ft_substr(s, start, len), "ft_substr OK"));
	/*ft_tolower*/
	printf("%s\n", (ft_tolower('A'), "ft_tolower OK"));
	/*ft_toupper*/
	printf("%s\n", (ft_toupper('a'), "ft_toupper OK"));
	return (0);
}
