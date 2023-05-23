/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvela-fe <rvela-fe@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 22:12:11 by rvela-fe          #+#    #+#             */
/*   Updated: 2023/05/23 21:46:46 by rvela-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(char const *str, ...);
int		arg_list(va_list va, char type);
int		ft_putchar(char c);
int		ft_putstr(char *s, int len);
int		ft_pointer(unsigned long long ptr, int len);
void	ft_hexa_converter(unsigned long long num, char type);
int		ft_putnbr(int n, int len);
int		ft_putunsignednb(unsigned int n, int len);
int		ft_hexa_len(unsigned long long nb);
int		ft_hexadecimal(unsigned int num, char type);
int		int_negative_min(void);

#endif