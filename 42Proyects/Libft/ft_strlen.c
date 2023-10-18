/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertga <albertga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:09:13 by albertga          #+#    #+#             */
/*   Updated: 2023/10/11 15:53:43 by albertga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Strlen se utiliza para calcular la longitud de una cadena de caracteres.
Esta función cuenta el número de caracteres en una cadena hasta que encuentra
el carácter nulo ('\0'), que marca el final de la cadena.*/

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
