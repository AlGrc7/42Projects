/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertga <albertga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 19:55:20 by albertga          #+#    #+#             */
/*   Updated: 2023/10/18 14:54:07 by albertga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Strncmp sirve para comparar dos cadenas de caracteres durante n carácteres,
si las cadenas son iguales te devolverá un “0”, si la primer cadena es menor 
que la segunda devolverá un número negativo y finalmente si la primer cadena es 
mayor que la segunda devolverá un numero positivo.*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] == s2[i])
			i++;
		else if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	return (0);
}
