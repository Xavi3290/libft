/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xroca-pe <xroca-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:11:41 by xroca-pe          #+#    #+#             */
/*   Updated: 2024/01/19 09:58:40 by xroca-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	if (!lst)
		return (0);
	i = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
/*
Esta función ft_lstsize calcula y devuelve la cantidad de nodos
en una lista enlazada simple. Comienza inicializando un contador
(i) en cero y verifica si la lista está vacía. Luego, recorre la
lista nodo por nodo, incrementando el contador, hasta llegar al
final. Finalmente, devuelve el contador que representa el tamaño
de la lista.
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
	printf("%d ", ft_lstsize(t));
	ft_lstadd_front(&t, t2);
	printf("%d ", ft_lstsize(t));
	while (t != NULL)
	{
		printf("%s ", t -> content);
		t = t -> next;
	}

	return (0);
}
*/