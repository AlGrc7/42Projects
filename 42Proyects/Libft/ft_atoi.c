/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertga <albertga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 18:10:44 by albertga          #+#    #+#             */
/*   Updated: 2023/10/11 15:43:13 by albertga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Atoi se utiliza para convertir una cadena de caracteres que representa un 
número entero en su equivalente en formato de tipo de datos int.*/

/*#include <stdio.h>
#include <string.h>
#include <stdlib.h>*/
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	res = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	if (str[i] < 48 || str[i] > 57)
		return (0);
	while (str[i] >= 48 && str[i] <= 57)
	{
		res = res * 10 + str[i] - 48;
		i++;
	}
	return (res * sign);
}

/*int	main(void)
{
	char	strint[13];
	int		resultado;
	int		resultado2;

	strint[13] = "   1 2 3 -4 5";
	resultado = atoi(strint);
	resultado2 = ft_atoi(strint);
	printf("Función original: %d", resultado);
	printf("Función propia: %d", resultado2);
	return (0);
}*/