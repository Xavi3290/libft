/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xroca-pe <xroca-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:12:14 by xroca-pe          #+#    #+#             */
/*   Updated: 2024/01/30 10:15:32 by xroca-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!*lst)
		*lst = new;
	else if (lst && new)
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
}
/*
Esta función agrega el nodo new al final de la lista lst. Primero,
verifica si lst y new son válidos. Luego, obtiene el último nodo de
la lista usando ft_lstlast y enlaza el nuevo nodo al final
estableciendo el puntero next del último nodo en el nuevo nodo.
*/
/*
#include <stdlib.h>

int	main(void)
{
	t_list	*t;
	t_list	*t2;
	t_list	*t3;

	t = ft_lstnew("hola");
	t2 = ft_lstnew("mundo");
	t3 = ft_lstnew("ultimo");
	ft_lstadd_front(&t, t2);
	ft_lstadd_back(&t, t3);
	while (t != NULL)
	{
		printf("%s ", t->content);
		t = t -> next;
	}
	printf("\n");
	return (0);
}
*/