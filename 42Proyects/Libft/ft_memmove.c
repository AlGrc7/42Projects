/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertga <albertga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 19:39:48 by albertga          #+#    #+#             */
/*   Updated: 2023/10/11 15:55:21 by albertga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Memmove se utiliza para copiar un bloque de memoria desde una ubicación de 
origen a una ubicación de destino, incluso si estas áreas de memoria se 
superponen. Esto significa que memmove es capaz de manejar situaciones en las 
que los bloques de memoria de origen y destino se solapan*/

/*#include <stdio.h>
#include <string.h>
#include <stdlib.h>*/
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	i = -1;
	if (d == s || len == 0)
		return (dst);
	if (d > s)
	{
		while (len--)
		d[len] = s[len];
	}
	else
	{
		while (++i < len)
			d[i] = s[i];
	}
	return (dst);
}

/*int main()
{
    char str[] = "Jelou ma fren";
    char buffer[20];
    char buffer1[20];
    memset(buffer, 0, sizeof(buffer));
    memset(buffer1, 0, sizeof(buffer));
    memmove(buffer, str, 5);
    ft_memmove(buffer1, str, 5);
    printf("Función original: buffer: %s\n", buffer);
    printf("Función propia: buffer: %s\n", buffer1);
    memmove(buffer + 1, buffer, strlen(buffer) + 1);
    ft_memmove(buffer1 + 1, buffer1, strlen(buffer) + 1);
    buffer[0] = ' ';
    buffer1[0] = ' ';
    printf("Función original: buffer después de la inserción: %s\n", buffer);
    printf("Función propia: buffer después de la inserción: %s\n", buffer);
    return 0;
}*/