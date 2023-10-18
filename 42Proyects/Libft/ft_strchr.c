/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertga <albertga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 18:03:41 by albertga          #+#    #+#             */
/*   Updated: 2023/10/11 15:54:36 by albertga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Strchr se utiliza para buscar la primera aparición de un carácter específico
en una cadena de caracteres (string) y devuelve un puntero a la ubicación de 
ese carácter dentro de la cadena. Si el carácter no se encuentra en la cadena,
la función devuelve un puntero nulo (NULL).*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)(s + i));
	return (NULL);
}
