/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertga <albertga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:21:18 by albertga          #+#    #+#             */
/*   Updated: 2023/10/11 15:56:37 by albertga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Lstdelone toma como parámetro un nodo ’lst’ y libera la memoria del contenido
utilizando la función ’del’ dada como parámetro, además de liberar el nodo. La 
memoria de ’next’ no debe liberarse*/

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst)
	{
		del(lst->content);
		free(lst);
	}
}
