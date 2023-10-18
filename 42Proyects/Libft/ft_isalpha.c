/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertga <albertga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:03:44 by albertga          #+#    #+#             */
/*   Updated: 2023/10/11 15:49:33 by albertga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*isalpha es una función en el lenguaje de programación C (y en muchos otros
lenguajes de programación que proporcionan una biblioteca estándar similar) 
que se utiliza para verificar si un carácter (un byte) es una letra alfabética 
o no. Retorna un valor diferente de cero (verdadero) si el carácter es una letra 
y cero (falso) si no lo es.*/

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
