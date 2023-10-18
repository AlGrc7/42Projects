/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertga <albertga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:20:19 by albertga          #+#    #+#             */
/*   Updated: 2023/10/11 15:51:26 by albertga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Itoa genera una string que representa el valor entero recibido como argumento.
Itoa gestiona valores negativos.*/

#include "libft.h"

static int	nbrlen(int n)
{
	int			i;
	long int	nbr;

	nbr = (long int)n;
	i = 0;
	if (nbr == 0)
		i++;
	if (nbr < 0)
		i++;
	while (nbr != 0)
	{
		nbr = (nbr / 10);
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			len;
	long int	nbr;

	nbr = (long int)n;
	len = nbrlen(nbr);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len--] = '\0';
	if (nbr == 0)
		str[0] = '0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr *= -1;
	}
	while (nbr != 0)
	{
		str[len] = (nbr % 10) + 48;
		nbr /= 10;
		len--;
	}
	return (str);
}
