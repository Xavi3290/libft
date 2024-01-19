/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xroca-pe <xroca-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 10:56:08 by xroca-pe          #+#    #+#             */
/*   Updated: 2024/01/19 11:28:13 by xroca-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst && f)
	{
		while (lst != NULL)
		{
			f(lst->content);
			lst = lst->next;
		}
	}
}
/*
La función ft_lstiter recibe una lista lst y una función f. Itera
sobre cada nodo de la lista y aplica la función f al contenido de
cada nodo. Se asegura de manejar casos en los que la lista o la
función son nulas para evitar errores. La iteración se realiza
actualizando el puntero al siguiente nodo en cada paso.
*/
/*
#include <stdio.h>

void ft_f(void *content)
{
	printf("%s ", content);
}

int main(void)
{
	t_list *t = ft_lstnew(ft_strdup("hola"));
	t_list *t2 = ft_lstnew(ft_strdup("mundo"));
	ft_lstadd_back(&t, t2);
	ft_lstiter(t,ft_f);
		
	return (0);
}
*/