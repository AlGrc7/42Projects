/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertga <albertga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:57:12 by albertga          #+#    #+#             */
/*   Updated: 2023/10/11 15:49:20 by albertga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Isdigit se utiliza para verificar si un carácter (un byte) es un dígito 
decimal (0-9) o no. Retorna un valor diferente de cero (verdadero) si el 
carácter es un dígito y cero (falso) si no lo es.*/

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
