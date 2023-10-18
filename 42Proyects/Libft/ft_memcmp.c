/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertga <albertga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 20:28:23 by albertga          #+#    #+#             */
/*   Updated: 2023/10/11 15:55:33 by albertga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Memcmp compara byte por byte los dos bloques de memoria, comenzando desde la
dirección apuntada por ptr1 y ptr2, y compara sus valores en orden. Cuando 
encuentra una diferencia entre los bytes en los dos bloques de memoria, 
devuelve un valor que indica si el primer bloque es menor, igual o mayor que el
segundo bloque, dependiendo de la diferencia encontrada*/

#include "libft.h"
/*#include <stdio.h>
#include <string.h>*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}
/*int main()
{
    char str1[] = "aaaaa";
    char str2[] = "aaa\0a";
	int result1;
    int result2;
	
	result1 = memcmp(str1, str2, 5);
	result2 = memcmp(str1, str2, 5);

    if (result1 == 0)
      printf("Original: Los bloques de memoria son iguales.\n");
    else if (result1 < 0)
        printf("Original: str1 es menor que str2.\n");
    else
        printf("Original: str1 es mayor que str2.\n");
        
    if (result2 == 0)
      printf("Mi función: Los bloques de memoria son iguales.\n");
    else if (result2 < 0)
        printf("Mi función: str1 es menor que str2.\n");
    else
        printf("Mi función: str1 es mayor que str2.\n");

    return 0;
}*/