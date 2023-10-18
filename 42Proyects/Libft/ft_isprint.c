/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertga <albertga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:03:43 by albertga          #+#    #+#             */
/*   Updated: 2023/10/11 15:49:13 by albertga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Isprint se utiliza para verificar si un carácter (un byte) es un carácter 
imprimible o no. Retorna un valor diferente de cero (verdadero) si el carácter
es imprimible y cero (falso) si no lo es.*/

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
