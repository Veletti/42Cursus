/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvela-fe <rvela-fe@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 23:15:49 by rvela-fe          #+#    #+#             */
/*   Updated: 2023/05/27 00:25:27 by rvela-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h> //read, close
# include <stdlib.h> //malloc, free
# include <stdio.h> //printf, BUFFER_SIZE

char		*get_next_line(int fd);
char		*file_reader(int fd, char *buffer);
char		*line_isolator(char *buffer);
char		*next_line(char *buffer);
char		*ft_join_and_free(char *buffer, char *data);
void		*ft_calloc(size_t count, size_t size);
void		ft_bzero(void *s, size_t n);
char		*ft_strchr(const char *str, int c);
size_t		ft_strlen(const char *s);
char		*ft_strjoin(char const *s1, char const *s2);

#endif