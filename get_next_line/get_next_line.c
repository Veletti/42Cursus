/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvela-fe <rvela-fe@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 21:22:33 by rvela-fe          #+#    #+#             */
/*   Updated: 2023/06/02 22:59:49 by rvela-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char		*line;
	static char	*buffer = NULL;

	line = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
	{
		if (buffer != NULL)
		{
			free(buffer);
			buffer = NULL;
		}
		return (NULL);
	}
	buffer = file_reader(fd, buffer);
	if (!buffer)
		return (NULL);
	line = line_isolator(buffer);
	buffer = next_line(buffer);
	return (line);
}

char	*file_reader(int fd, char *buffer)
{
	char	*data;
	int		bytes;

	data = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!data)
		return (NULL);
	data[0] = '\0';
	bytes = 1;
	if (!buffer)
		buffer = ft_calloc(1, 1);
	while (bytes != 0 && !ft_strchr(buffer, '\n'))
	{
		bytes = read(fd, data, BUFFER_SIZE);
		if (bytes == -1)
		{
			free(data);
			return (NULL);
		}
		data[bytes] = '\0';
		buffer = ft_join_and_free(buffer, data);
	}
	free(data);
	return (buffer);
}

char	*line_isolator(char *buffer)
{
	char	*line;
	int		i;

	i = 0;
	if (!buffer[i])
		return (NULL);
	while (buffer[i] && buffer[i] != '\n')
		i++;
	line = (char *)malloc(sizeof(char) * (i + 2));
	if (!line)
		return (NULL);
	i = 0;
	while (buffer[i] && buffer[i] != '\n')
	{
		line[i] = buffer[i];
		i++;
	}
	if (buffer[i] == '\n')
	{
		line[i] = buffer[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

char	*next_line(char *buffer)
{
	int		i;
	int		j;
	char	*next_line;

	i = 0;
	while (buffer[i] && buffer[i] != '\n')
		i++;
	if (!buffer[i])
	{
		free(buffer);
		return (NULL);
	}
	next_line = (char *)malloc(sizeof(char) * (ft_strlen(buffer) -i + 1));
	if (!next_line)
		return (NULL);
	i++;
	j = 0;
	while (buffer[i])
		next_line[j++] = buffer[i++];
	next_line[j] = '\0';
	free(buffer);
	return (next_line);
}

char	*ft_join_and_free(char *buffer, char *data)
{
	char	*temp;

	temp = ft_strjoin(buffer, data);
	free (buffer);
	return (temp);
}
