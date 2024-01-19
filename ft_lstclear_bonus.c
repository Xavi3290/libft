/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xroca-pe <xroca-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 09:36:05 by xroca-pe          #+#    #+#             */
/*   Updated: 2024/01/19 16:08:22 by xroca-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*next;

	if (*lst && lst && del)
	{
		temp = *lst;
		while (temp != NULL)
		{
			next = temp->next;
			del(temp->content);
			free(temp);
			temp = next;
		}
		*lst = NULL;
	}
}
/*
Esta función elimina y libera todos los nodos de la lista, utilizando 
la función del para liberar el contenido de cada nodo. Luego, establece 
el puntero al primer nodo (*lst) en NULL para indicar que la lista 
está vacía.
*/
/*
#include <stdlib.h>

void    ft_del(void *content)
{
    free(content);
}

int main(void)
{
	t_list *t = ft_lstnew(ft_strdup("hola"));
	t_list *t2 = ft_lstnew(ft_strdup("mundo"));
	ft_lstadd_back(&t, t2);
	ft_lstclear(&t, ft_del);
		
	return (0);
}
*/