/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertga <albertga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 20:07:50 by albertga          #+#    #+#             */
/*   Updated: 2023/10/11 15:55:05 by albertga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Memset se utiliza para llenar un bloque de memoria con un valor específico.
Es una función muy útil para inicializar rápidamente un bloque de memoria con 
un valor específico, como poner todos los bytes de un array a cero o llenarlos 
con un valor específico. */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;

	p = (unsigned char *)b;
	while (len > 0)
	{
		*p = (unsigned char)c;
		p++;
		len--;
	}
	return (b);
}
