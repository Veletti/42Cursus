/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvela-fe <rvela-fe@student.barcel>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 01:08:31 by rvela-fe          #+#    #+#             */
/*   Updated: 2023/03/18 19:10:26 by rvela-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

void	arg_list(va_list va, char type);
void	ft_hexadecimal(unsigned long long int num, char type);
void	ft_pointer(unsigned long long int ptr);
void	ft_putunsignednb(unsigned int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
int		ft_printf(char const *str, ...);
int		arg_count(va_list va, char type, int len);
int		ft_len_hexadecimal(unsigned long long int num);
int		ft_len_char(char *s);
int		ft_len_number(int n);


#endif
