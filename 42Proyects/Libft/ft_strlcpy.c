/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertga <albertga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 17:29:29 by albertga          #+#    #+#             */
/*   Updated: 2023/10/11 15:53:50 by albertga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Strlcpy copia una cadena de origen en una cadena de destino, asegurándose de 
que la cadena de destino no se desborde. Toma como argumentos la cadena de 
destino, la cadena de origen y el tamaño máximo de la cadena de destino. La 
función copia caracteres desde la cadena de origen a la cadena de destino hasta 
que se alcanza el tamaño máximo o se encuentra un carácter nulo (el carácter de 
terminación de cadena '\0') en la cadena de origen, lo que ocurra primero.*/

/*#include <stdio.h>
#include <string.h>
#include <stdlib.h>*/
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	j = ft_strlen((char *)src);
	i = 0;
	if (dstsize)
	{
		while (i < dstsize - 1 && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (j);
}
/*int main()
{
	char  origen[] = "qwertyuiop";
	char  dest[20];
	char  dest2[20];
	strlcpy(dest, origen, 20);
	ft_strlcpy(dest2, origen, 20);
	printf("Función original: %s\n", dest);
	printf("Función propia: %s", dest2);
  return (0);
}*/