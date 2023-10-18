/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertga <albertga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:20:40 by albertga          #+#    #+#             */
/*   Updated: 2023/10/11 15:56:12 by albertga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Lstadd_back añade el nodo ’new’ al final de la lista ’lst’*/

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lastn;

	lastn = ft_lstlast(*lst);
	if (lastn && new)
		lastn->next = new;
	else
		*lst = new;
}
