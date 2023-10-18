/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertga <albertga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 19:14:16 by albertga          #+#    #+#             */
/*   Updated: 2023/10/11 15:55:51 by albertga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Crea un nuevo nodo utilizando malloc(3). La variable miembro ’content’ se 
inicializa con el contenido del parámetro ’content’. La variable ’next’, con 
NULL*/

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (new);
	new->content = content;
	new->next = NULL;
	return (new);
}
