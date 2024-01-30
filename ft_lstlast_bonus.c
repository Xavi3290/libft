/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xroca-pe <xroca-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:32:18 by xroca-pe          #+#    #+#             */
/*   Updated: 2024/01/30 10:15:16 by xroca-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last;

	if (!lst)
		return (NULL);
	while (lst != NULL)
	{
		last = lst;
		lst = lst->next;
	}
	return (last);
}
/*
Esta función ft_lstlast devuelve el último nodo de una 
lista enlazada. Verifica si la lista está vacía y, si no lo está, 
recorre la lista hasta que llega al último nodo, actualizando 
continuamente el puntero last al nodo actual. Finalmente, retorna 
el puntero al último nodo.
*/
/*
#include <stdlib.h>

int main(void)
{
	t_list *t = ft_lstnew("hola");
	t_list *t2 = ft_lstnew("mundo");
	//printf("%d ", ft_lstsize(t));
	ft_lstadd_front(&t, t2);
	printf("%d ", ft_lstsize(t));
	t_list *t3 = ft_lstlast(t);
	while (t != NULL)
	{
		printf("%s ", t->content);
		t = t -> next;
	}
	printf("\n");
	while (t3 != NULL)
	{
		printf("%s ", t3-> content);
		t3 = t3->next;
	}
		
	return (0);
}
*/