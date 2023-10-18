/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertga <albertga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 18:06:00 by albertga          #+#    #+#             */
/*   Updated: 2023/10/14 22:49:52 by albertga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Lstmap itera la lista ’lst’ y aplica la función ’f’ al contenido de cada 
nodo. Crea una lista resultante de la aplicación correcta y sucesiva de la 
función ’f’ sobre cada nodo. La función ’del’ se utiliza para eliminar el 
contenido de un nodo, si hace falta.*/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newnode;
	t_list	*lstnew;

	lstnew = NULL;
	while (lst)
	{
		newnode = ft_lstnew(0);
		if (!newnode)
		{
			ft_lstclear(&lstnew, del);
			return (NULL);
		}
		newnode->content = f(lst->content);
		ft_lstadd_back(&lstnew, newnode);
		lst = lst->next;
	}
	return (lstnew);
}
