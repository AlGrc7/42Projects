/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertga <albertga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 18:04:23 by albertga          #+#    #+#             */
/*   Updated: 2023/10/11 15:54:04 by albertga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Strjoin reserva (con malloc(3)) y devuelve una nueva string, formada por la 
concatenación de ’s1’ y ’s2’.*/

/*#include <stdio.h>
#include <string.h>
#include <stdlib.h>*/
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*m;

	if (!s1 || !s2)
		return (NULL);
	m = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!m)
		return (NULL);
	ft_strlcpy(m, s1, ft_strlen(s1) + 1);
	ft_strlcat(m, s2, ft_strlen(s1) + ft_strlen(s2) + 1);
	return (m);
}
