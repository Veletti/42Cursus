/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvela-fe <rvela-fe@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 01:08:31 by rvela-fe          #+#    #+#             */
/*   Updated: 2023/03/18 01:42:32 by rvela-fe         ###   ########.fr       */
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
int		ft_printf(char const *str, ...);
int		arg_count(va_list va, char type, int len);
int		ft_len_hexadecimal(unsigned long long int num);
int		ft_len_char(char *s);
int		ft_len_number(int n);

#endif
