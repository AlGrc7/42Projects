/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertga <albertga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 18:25:44 by albertga          #+#    #+#             */
/*   Updated: 2023/10/11 15:51:49 by albertga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Substr toma como entrada una cadena de texto y devuelve una subcadena que 
comienza en una posición específica y tiene una longitud determinada.*/

/*#include <stdio.h>
#include <string.h>
#include <stdlib.h>*/
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;

	if (!s)
		return (NULL);
	if ((size_t)start > ft_strlen(s))
		return (ft_strdup (""));
	if (len > (ft_strlen(s) - start))
		len = (ft_strlen(s) - start);
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s + start, len + 1);
	return (ptr);
}
