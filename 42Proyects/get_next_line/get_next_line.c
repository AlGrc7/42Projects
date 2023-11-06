/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertga <albertga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:48:23 by albertga          #+#    #+#             */
/*   Updated: 2023/11/06 20:02:46 by albertga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Get_next_line */

#include "get_next_line.h"

char	*ft_read_prev_line(int fd, char *prev_line)
{
	char	*buffer;
	int		readbytes;

	buffer = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	readbytes = 1;
	if (!buffer)
		return (NULL);
	while (!(ft_strchr(prev_line, '\n')) && readbytes != 0)
	{
		readbytes = read(fd, buffer, BUFFER_SIZE);
		if (readbytes == -1)
		{
			free(buffer);
			return (NULL);
		}
		buffer[readbytes] = '\0';
		prev_line = ft_strjoin(prev_line, buffer);
	}
	free(buffer);
	return (prev_line);
}

char	*ft_new_prev_line(char *prev_line)
{
	int		i;
	int		j;
	char	*new_prev_line;

	i = 0;
	while (prev_line[i] && prev_line[i] != '\n')
		i++;
	if (!prev_line[i])
	{
		free(prev_line);
		return (NULL);
	}
	new_prev_line = (char *)malloc(sizeof(char)
			* (ft_strlen(prev_line) - i + 1));
	if (!new_prev_line)
		return (NULL);
	i++;
	j = 0;
	while (prev_line[i])
		new_prev_line[j++] = prev_line[i++];
	new_prev_line[j] = '\0';
	free(prev_line);
	return (new_prev_line);
}

char	*ft_get_line(char *prev_line)
{
	int		i;
	char	*next_line;

	i = 0;
	if (!prev_line)
		return (NULL);
	while (prev_line[i] && prev_line[i] != '\n')
		i++;
	next_line = (char *)ft_calloc(i + 1, sizeof(char));
	if (!next_line)
		return (NULL);
	i = 0;
	while (prev_line[i] && prev_line[i] != '\n')
	{
		next_line[i] = prev_line[i];
		i++;
	}
	if (prev_line[i] == '\n')
	{
		next_line[i] = prev_line[i];
		i++;
	}
	next_line[i] = '\0';
	return (next_line);
}

char	*get_next_line(int fd)
{
	char		*next_line;
	static char	*prev_line;

	if (fd < 0 || BUFFER_SIZE < 0)
		return (NULL);
	prev_line = ft_read_prev_line(fd, prev_line);
	if (!prev_line)
		return (NULL);
	next_line = ft_get_line(prev_line);
	prev_line = ft_new_prev_line(prev_line);
	return (next_line);
}

// int	main(void)
// {
// 	int		fd;
// 	char	*line;

// 	fd = open("file.txt", O_RDONLY);
// 	line = get_next_line(fd);
// 	printf("\nbufersize = %d\nbuf = %s", BUFFER_SIZE, line);
// 	free(line);
// 	return (0);
// }
