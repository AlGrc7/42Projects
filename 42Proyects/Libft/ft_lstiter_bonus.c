/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertga <albertga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 22:40:54 by albertga          #+#    #+#             */
/*   Updated: 2023/10/12 00:18:02 by albertga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Itera la lista ’lst’ y aplica la función ’f’ en el contenido de cada nodo.*/

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*aux;
	int		i;

	i = ft_lstsize(lst);
	aux = lst;
	while (aux && i != 0)
	{
		f(aux->content);
		aux = aux->next;
		i--;
	}
}
