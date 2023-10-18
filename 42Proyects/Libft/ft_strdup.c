/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertga <albertga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 17:08:27 by albertga          #+#    #+#             */
/*   Updated: 2023/10/11 15:54:24 by albertga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Strdup se utiliza para duplicar una cadena de caracteres (string). A 
diferencia de strcpy, que simplemente copia una cadena a otra, strdup asigna 
dinámicamente memoria para la nueva cadena duplicada utilizando malloc.*/

/*#include <stdio.h>
#include <string.h>
#include <stdlib.h>*/
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	char	*m;

	ptr = (char *)s1;
	m = (char *)malloc(ft_strlen(ptr) + 1);
	if (m == NULL)
		return (NULL);
	ft_strlcpy(m, ptr, (ft_strlen(ptr) + 1));
	return (m);
}
