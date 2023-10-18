/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertga <albertga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 16:57:53 by albertga          #+#    #+#             */
/*   Updated: 2023/10/11 15:53:58 by albertga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Strlcat se utiliza para concatenar cadenas de caracteres de forma segura, 
evitando desbordamientos de búfer. La función devuelve la longitud total de 
la cadena resultante después de la concatenación.*/

/*#include <stdio.h>
#include <string.h>
#include <stdlib.h>*/
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t			i;
	size_t			j;

	j = 0;
	i = 0;
	while (dst[i] && i < dstsize)
		i++;
	while (src[j] && (i + j + 1) < dstsize)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < dstsize)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}
/*int main(void)
{
	char  origen[] = "asdfghjklñ";
	char  dest[40] = "qwertyuiop";
	char  dest2[40] = "qwertyuiop";
	strlcat(dest, origen, 20);
	ft_strlcat(dest2, origen, 20);
	printf("Función original: %s\n", dest);
	printf("Función propia: %s\n", dest2);
  return (0);
}*/
