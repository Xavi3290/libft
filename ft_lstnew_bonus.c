/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xroca-pe <xroca-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:52:12 by xroca-pe          #+#    #+#             */
/*   Updated: 2024/01/30 10:15:09 by xroca-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
/*
La función ft_lstnew crea un nuevo nodo de tipo t_list, asigna la 
memoria necesaria, inicializa el contenido con el parámetro content,
establece el puntero next en NULL y devuelve un puntero al nuevo 
nodo. Si la asignación de memoria falla, devuelve NULL.
*/
/*
#include <stdio.h>

int main(void)
{
	t_list *t = ft_lstnew("hola");
	while (t != NULL)
	{
		printf("%s", t -> content);
		t = t -> next;
	}
	
	return (0);
}
*/