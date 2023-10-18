/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertga <albertga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 17:46:59 by albertga          #+#    #+#             */
/*   Updated: 2023/10/11 15:52:44 by albertga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Strnstr es una función específica de FreeBSD, y su propósito es buscar la 
primera ocurrencia de una cadena terminada en null (needle) dentro de otra 
cadena (haystack), con la limitación de buscar no más de len caracteres. 
Además, esta función no buscará caracteres que aparezcan después de un carácter
\0 nulo en la cadena haystack*/

/*#include <stdio.h>
#include <string.h>
#include <stdlib.h>*/
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char		*p1;
	const char		*p2;
	size_t			i;

	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack != '\0' && len > 0)
	{
		p1 = haystack;
		p2 = needle;
		i = len;
		if (*haystack == *needle)
		{
			while (*p1 != '\0' && *p2 != '\0' && *p1 == *p2 && i-- > 0)
			{
				p1++;
				p2++;
			}
			if (*p2 == '\0')
				return ((char *)haystack);
		}
		haystack++;
		len--;
	}
	return (NULL);
}
