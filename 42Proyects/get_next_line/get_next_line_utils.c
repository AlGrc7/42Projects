/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertga <albertga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:49:00 by albertga          #+#    #+#             */
/*   Updated: 2023/11/18 21:48:18 by albertga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Funciones auxiliares de get_next_line*/

#include "get_next_line.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (s)
	{
		while (s[i] != '\0')
		{
			if (s[i] == (char)c)
				return ((char *)(s + i));
			i++;
		}
		if (s[i] == (char)c)
			return ((char *)(s + i));
	}
	return (NULL);
}

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char *prev_line, char *buffer)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!prev_line)
	{
		prev_line = (char *)ft_calloc(1, sizeof(char));
		prev_line[0] = '\0';
	}
	if (!prev_line || !buffer)
		return (free(prev_line), NULL);
	str = malloc(sizeof(char) * ((ft_strlen(prev_line)
					+ ft_strlen(buffer)) + 1));
	if (str == NULL)
		return (NULL);
	i = -1;
	j = 0;
	if (prev_line)
		while (prev_line[++i] != '\0')
			str[i] = prev_line[i];
	while (buffer[j] != '\0')
		str[i++] = buffer[j++];
	str[ft_strlen(prev_line) + ft_strlen(buffer)] = '\0';
	free(prev_line);
	return (str);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, (count * size));
	return (ptr);
}

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;

	str = s;
	while (n--)
		str[n] = 0;
}
