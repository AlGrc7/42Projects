/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertga <albertga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:57:46 by albertga          #+#    #+#             */
/*   Updated: 2023/10/11 15:49:26 by albertga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Isascii se utiliza para verificar si un carácter (un byte) es un carácter 
ASCII o no. Retorna un valor diferente de cero (verdadero) si el carácter es 
un carácter ASCII y cero (falso) si no lo es.*/

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
