/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xroca-pe <xroca-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:30:59 by xroca-pe          #+#    #+#             */
/*   Updated: 2024/01/30 10:15:12 by xroca-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst2;
	t_list	*new;
	void	*aux;

	if (!lst || !f || !del)
		return (NULL);
	lst2 = NULL;
	while (lst != NULL)
	{
		aux = f(lst->content);
		new = ft_lstnew(aux);
		if (!new)
		{
			ft_lstclear(&lst2, del);
			del(aux);
			return (NULL);
		}
		ft_lstadd_back(&lst2, new);
		lst = lst->next;
	}
	return (lst2);
}
/*
La función ft_lstmap toma una lista lst y aplica la función f a cada
elemento, creando una nueva lista con los resultados. Si hay algún
error durante el proceso (por ejemplo, falla la reserva de memoria),
la función libera cualquier memoria asignada previamente y retorna NULL.
Además, verifica que los punteros a funciones f y del no sean nulos
antes de comenzar.
*/
/*
void	ft_del(void *content)
{
	free(content);
}

void	*ft_ff(void *content)
{
	printf("%s ", content);
	return(content);
}

int	main(void)
{
	t_list	*t;
	t_list	*t2;
	t_list	*t3;

	t = ft_lstnew(ft_strdup("hola"));
	t2 = ft_lstnew(ft_strdup("mundo"));
	ft_lstadd_back(&t, t2);
	t3 = ft_lstmap(t,ft_ff, ft_del);
	while (t3 != NULL)
	{
		printf("%s ", t3->content);
		t3 = t3->next;
	}
	return (0);
}
*/