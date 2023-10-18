/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertga <albertga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:34:39 by albertga          #+#    #+#             */
/*   Updated: 2023/10/11 22:37:06 by albertga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Elimina y libera el nodo ’lst’ dado y todos los consecutivos de ese nodo, 
utilizando la función ’del’ y free(3). Al final, el puntero a la lista debe 
ser NULL.*/

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*aux;

	while (*lst)
	{
		aux = *lst;
		*lst = (*lst)->next;
		ft_lstdelone(aux, del);
	}
}
