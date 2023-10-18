/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertga <albertga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:37:41 by albertga          #+#    #+#             */
/*   Updated: 2023/10/11 15:51:32 by albertga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Toupper toma un carácter como argumento y devuelve el mismo carácter en
mayúscula si era una letra minúscula. Si el carácter no era una letra
minúscula, se devuelve el mismo carácter sin cambios.*/

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c = c - 32;
	return (c);
}
