/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertga <albertga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 21:13:47 by albertga          #+#    #+#             */
/*   Updated: 2023/10/11 15:47:34 by albertga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Bzero se utiliza para llenar un bloque de memoria con ceros (bytes de valor
0). La función bzero es especialmente útil cuando se necesita limpiar o 
inicializar una región de memoria a ceros, como en la gestión de buffers o
estructuras de datos.*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;

	str = s;
	while (n--)
		str[n] = 0;
}
