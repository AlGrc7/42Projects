/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertga <albertga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 16:33:14 by albertga          #+#    #+#             */
/*   Updated: 2023/10/11 15:52:37 by albertga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Strrchr se utiliza para buscar la última aparición de un carácter específico
en una cadena de caracteres (string) y devuelve un puntero a la ubicación de 
ese carácter dentro de la cadena. Si el carácter no se encuentra en la cadena,
la función devuelve un puntero nulo (NULL).*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
