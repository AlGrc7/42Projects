/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertga <albertga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 19:54:12 by albertga          #+#    #+#             */
/*   Updated: 2023/10/11 15:53:04 by albertga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*A cada carácter de la string ’s’, aplica la función ’f’ dando como parámetros 
el índice de cada carácter dentro de ’s’ y la dirección del propio carácter, 
que podrá modificarse si es necesario.*/

/*#include <stdio.h>
#include <string.h>
#include <stdlib.h>*/
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int		i;

	i = -1;
	if (s != NULL || f != NULL)
		while (s[++i] != '\0')
			f(i, &s[i]);
}
