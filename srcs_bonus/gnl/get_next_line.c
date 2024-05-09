/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 14:18:29 by aelomari          #+#    #+#             */
/*   Updated: 2024/01/12 14:03:01 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*read_buffer(size_t fd, char *buf)
{
	char	*readed_buf;
	ssize_t	read_byte;
	char	*tmp;

	readed_buf = (char *)malloc((size_t)BUFFER_SIZE + 1);
	if (!readed_buf)
		return (NULL);
	while (1)
	{
		read_byte = read(fd, readed_buf, BUFFER_SIZE);
		if (read_byte == -1)
			return (free(readed_buf), free(buf), NULL);
		readed_buf[read_byte] = '\0';
		if (read_byte == 0)
			break ;
		tmp = ft_strjoin(buf, readed_buf);
		free(buf);
		buf = tmp;
		if (isnewline(buf))
			break ;
	}
	free(readed_buf);
	return (buf);
}

char	*extract_line(char *buf)
{
	char	*line;
	size_t	i;

	i = 0;
	if (!buf)
	{
		return (NULL);
	}
	if (!ft_strlen(buf))
	{
		return (NULL);
	}
	while (buf[i] && buf[i] != '\n')
		i++;
	line = ft_substr(buf, 0, i + 1);
	if (!line)
		return (NULL);
	return (line);
}

char	*new_buf(char *buf)
{
	char	*new;
	size_t	buf_lenght;
	size_t	i;

	if (!buf)
	{
		return (NULL);
	}
	buf_lenght = ft_strlen(buf);
	i = 0;
	while (buf[i] && buf[i] != '\n')
		i++;
	buf_lenght = 0;
	while (buf[buf_lenght + i])
	{
		buf_lenght++;
	}
	new = ft_substr(buf, i + 1, buf_lenght);
	free(buf);
	return (new);
}

size_t	isnewline(char *buf)
{
	size_t	i;

	i = 0;
	while (buf[i])
	{
		if (buf[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*buf;

	if (fd < 0 || BUFFER_SIZE < 0 || BUFFER_SIZE > INT_MAX)
		return (NULL);
	buf = read_buffer(fd, buf);
	if (buf == NULL)
		return (NULL);
	if (!*buf)
		return (free(buf), NULL);
	line = extract_line(buf);
	if (line == NULL)
		return (NULL);
	buf = new_buf(buf);
	return (line);
}
