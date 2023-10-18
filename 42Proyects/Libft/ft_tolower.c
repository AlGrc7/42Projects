/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertga <albertga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:52:07 by albertga          #+#    #+#             */
/*   Updated: 2023/10/11 15:51:43 by albertga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Tolower se utiliza para convertir un carácter en minúscula (si es una letra
mayúscula) y no afecta a otros caracteres.*/

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c = c + 32;
	return (c);
}
