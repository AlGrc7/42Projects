/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Variables_estáticas.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertga <albertga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:57:34 by albertga          #+#    #+#             */
/*   Updated: 2023/10/23 12:23:19 by albertga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Una variable estática es una variable que mantiene su valor entre llamadas 
sucesivas a una función o que persiste a lo largo de la vida útil del programa. 
Se declara utilizando la palabra clave static.*/

#include <stdio.h>

void	static_plus(int i)
{
	static int	s;

	printf("\nLa variable estática empieza en: %d\n", s);
	while (i > 0)
	{
		s++;
		printf("La variable estática ha cambiado a: %d\n", s);
		i--;
	}
	printf("La variable estática finalmente vale: %d\n\n", s);
}

int	main(void)
{
	static_plus(1);
	static_plus(2);
	static_plus(3);
	static_plus(5);
	static_plus(8);
	return (0);
}
