/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wng <winniewing025@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 11:10:08 by wng               #+#    #+#             */
/*   Updated: 2025/02/12 11:38:43 by wng              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

static char	*read_line(int fd, char *buffer, char *remainder)
{
	int		bytes_read;
	char	*temp;

	bytes_read = 1;
	while (bytes_read != 0)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
			return (NULL);
		if (bytes_read == 0)
			break ;
		buffer[bytes_read] = '\0';
		if (!remainder)
			remainder = ft_strdup("");
		temp = remainder;
		remainder = ft_strjoin(temp, buffer);
		free(temp);
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	return (remainder);
}

static char	*extract_line(char *line)
{
	size_t	i;
	char	*remainder;

	i = 0;
	while (line[i] != '\n' && line[i] != '\0')
		i++;
	if (line[i] == '\0')
		return (NULL);
	remainder = ft_substr(line, i + 1, ft_strlen(line) - i);
	if (*remainder == '\0')
	{
		free(remainder);
		remainder = NULL;
	}
	line[i + 1] = '\0';
	return (remainder);
}

char	*get_next_line(int fd)
{
	static char	*remainder[1024];
	char		*line;
	char		*buffer;

	if (fd < 0 || BUFFER_SIZE <= 0 || fd > 1024)
		return (NULL);
	buffer = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	line = read_line(fd, buffer, remainder[fd]);
	free(buffer);
	if (!line)
		return (NULL);
	remainder[fd] = extract_line(line);
	return (line);
}

/*
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int	main(void)
{
	int		fd1, fd2;
	char	*line;

	fd1 = open("test1.txt", O_RDONLY);
	if (fd1 == -1)
	{
		printf("Could not open file 'test1.txt'!\n");
		return (1);
	}
    fd2 = open("test2.txt", O_RDONLY);
	if (fd2 == -1)
	{
		printf("Could not open file 'test2.txt'!\n");
        close(fd1);
		return (1);
	}
    printf("Reading from test1.txt\n");
	while ((line = get_next_line(fd1)) != NULL)
	{
		printf("%s", line);
		free(line);
	}
    printf("Reading from test2.txt\n");
    while ((line = get_next_line(fd2)) != NULL)
	{
		printf("%s", line);
		free(line);
	}
	close(fd1);
    close(fd2);
	return (0);
}
*/