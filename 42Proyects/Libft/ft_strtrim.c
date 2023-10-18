/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertga <albertga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:16:43 by albertga          #+#    #+#             */
/*   Updated: 2023/10/11 15:52:20 by albertga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Elimina todos los caracteres de la string ’set’ desde el principio y desde 
el final de ’s1’, hasta encontrar un caracter no perteneciente a ’set’. 
La string resultante se devuelve con una reserva de malloc*/

/*#include <stdio.h>
#include <string.h>
#include <stdlib.h>*/
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		len;
	char	*trim;

	i = 0;
	j = ft_strlen(s1) - 1;
	while (s1[i] != '\0' && ft_strchr(set, s1[i]) != NULL)
		i++;
	while (j >= 0 && ft_strchr(set, s1[j]) != NULL)
		j--;
	len = j - i + 1;
	if (i > j)
		len = 0;
	trim = malloc(len + 1);
	if (trim == NULL)
		return (NULL);
	if (len > 0)
		ft_memcpy(trim, &s1[i], len);
	trim[len] = '\0';
	return (trim);
}

/*int main()
{
  char str[] = "     a,a,aaaaaNICEaaaaa,a,a     ";
  printf("La string: %s\npasa a ser: %s\n", str, ft_strtrim(str, " a,"));
  return 0;
}*/