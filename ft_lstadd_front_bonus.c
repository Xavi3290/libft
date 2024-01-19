/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xroca-pe <xroca-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 12:15:13 by xroca-pe          #+#    #+#             */
/*   Updated: 2024/01/19 09:57:53 by xroca-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}
/*
La función ft_lstadd_front agrega el nodo new al principio de la lista
*lst. Primero, actualiza el puntero next del nuevo nodo para que apunte
al antiguo primer nodo, luego actualiza el puntero *lst para que apunte
al nuevo nodo, convirtiéndolo así en el primer nodo de la lista.
*/
/*
#include <stdlib.h>

int	main(void)
{
	t_list	*t;
	t_list	*t2;
	t_list	*temp;

	t = ft_lstnew("hola");
	t2 = ft_lstnew("mundo");
	ft_lstadd_front(&t, t2);
	while (t != NULL)
	{
		printf("%s ", t -> content);
		t = t -> next;
	}

	return (0);
}
*/