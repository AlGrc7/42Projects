/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertga <albertga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 21:37:49 by albertga          #+#    #+#             */
/*   Updated: 2023/10/11 15:55:16 by albertga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Envía el carácter ’c’ al file descriptor especificado.*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
