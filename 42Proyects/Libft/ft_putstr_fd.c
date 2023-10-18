/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertga <albertga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 19:30:17 by albertga          #+#    #+#             */
/*   Updated: 2023/10/11 15:54:48 by albertga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Envía la string ’s’ al file descriptor especificado.*/

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(s);
	while (len-- > 0)
	{
		write(fd, &s[i], 1);
		i++;
	}
}
