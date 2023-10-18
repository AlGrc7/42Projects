/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertga <albertga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:45:59 by albertga          #+#    #+#             */
/*   Updated: 2023/10/11 15:49:38 by albertga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Isalnum se utiliza para verificar si un carácter (un byte) es alfanumérico.
Retorna un valor diferente de cero (verdadero) si el carácter es alfanumérico 
y cero (falso) si no lo es.*/

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
