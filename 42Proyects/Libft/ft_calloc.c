/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertga <albertga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 19:18:27 by albertga          #+#    #+#             */
/*   Updated: 2023/10/11 15:48:48 by albertga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Calloc se utiliza para asignar un bloque de memoria para un conjunto 
específico de elementos, donde cada elemento tiene un tamaño conocido y se 
inicializan todos los bits de la memoria asignada a cero. Calloc devuelve un 
puntero al bloque de memoria asignado, o NULL en caso de que la asignación de 
memoria falle.*/

/*#include <stdio.h>
#include <stdlib.h>*/
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, (count * size));
	return (ptr);
}
/*Malloc asigna memoria en bytes, y necesitas especificar cuántos bytes deseas 
reservar. Por ejemplo, si size es 5 y sizeof(int) es 4 en tu sistema (lo cual es 
común en muchos sistemas), entonces size * sizeof(int) sería 20 bytes (5 enteros 
de 4 bytes cada uno). Así, malloc reservará un bloque de memoria de 20 bytes.*/