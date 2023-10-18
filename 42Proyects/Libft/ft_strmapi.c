/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertga <albertga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:16:38 by albertga          #+#    #+#             */
/*   Updated: 2023/10/11 15:52:01 by albertga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Strmapi A cada carácter de la string ’s’, aplica la función ’f’ dando como 
parámetros el índice de cada carácter dentro de ’s’ y el propio carácter. 
Genera una nueva string con el resultado del uso sucesivo de ’f’*/

/*#include <stdio.h>
#include <string.h>
#include <stdlib.h>*/
#include "libft.h"

/*char ft_nextc(unsigned int i, char c)
{
    return (char *)(c + 1);
}*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ptr;
	int		i;

	i = -1;
	if (s == NULL || f == NULL)
		return (NULL);
	ptr = malloc(ft_strlen(s) + 1);
	if (!ptr)
		return (NULL);
	while (s[++i] != '\0')
		ptr[i] = f(i, s[i]);
	ptr[i] = '\0';
	return (ptr);
}
/*int main()
{
    const char *str = "abcdefghijk";
    char* res = ft_strmapi(str, ft_nextc);

    printf("Cadena original: %s\n", str);
    printf("Resultado: %s\n", res);

    free(res);
    return 0;
}*/