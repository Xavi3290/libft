/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xroca-pe <xroca-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:49:08 by xroca-pe          #+#    #+#             */
/*   Updated: 2024/01/30 10:15:23 by xroca-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
	}
}
/*
La función ft_lstdelone elimina un nodo de una lista enlazada simple.
Primero verifica que el nodo y la función de eliminación sean válidos.
Luego, utiliza la función de eliminación (del) para liberar la memoria
del contenido del nodo y finalmente libera la memoria del nodo en sí.
*/
/*
#include <stdlib.h>

void	ft_del(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*t;

	t = ft_lstnew(ft_strdup("hola"));
	ft_lstdelone(t, ft_del);
	return (0);
}
*/