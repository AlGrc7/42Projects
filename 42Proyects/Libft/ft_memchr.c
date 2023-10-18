/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertga <albertga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 21:37:15 by albertga          #+#    #+#             */
/*   Updated: 2023/10/11 15:55:44 by albertga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Memchr busca el byte con valor c dentro del bloque de memoria apuntado por s
y busca hasta los primeros n bytes (o hasta que encuentre el byte buscado). Si 
encuentra el byte buscado, devuelve un puntero a la posición donde se encuentra 
el byte en el bloque de memoria. Si no se encuentra el byte después de buscar 
los primeros n bytes, la función devuelve un puntero nulo (NULL)*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n > 0)
	{
		if (*p == (unsigned char)c)
			return (p);
		p++;
		n--;
	}
	return (NULL);
}
