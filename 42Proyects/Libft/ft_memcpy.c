/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertga <albertga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 16:04:43 by albertga          #+#    #+#             */
/*   Updated: 2023/10/11 15:55:27 by albertga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Memcpy se utiliza para copiar un bloque de memoria desde una ubicación de 
origen a una ubicación de destino. Memcpy realiza una copia exacta de los datos,
independientemente de su tipo. No realiza ningún tipo de comparación o 
procesamiento de datos; simplemente copia una cantidad específica de bytes desde
la ubicación de origen a la ubicación de destino*/

/*#include <stdlib.h>
#include <string.h>*/
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	i = -1;
	if (d == s || n == 0)
		return (dst);
	while (++i < n)
		d[i] = s[i];
	return (dst);
}

/*int main()
{
    char s[] = "abcdefghijklmnopqrstuvwxyz";
    char d[27];
    char d2[27];
    
    memcpy(d, s, sizeof(char) * 27);
    ft_memcpy(d2, s, sizeof(char) * 27);
    
    printf("Función original: %s\n", d);
    printf("Función propia: %s", d2);
    return 0;
}*/