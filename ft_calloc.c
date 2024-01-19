/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xroca-pe <xroca-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 09:15:45 by xroca-pe          #+#    #+#             */
/*   Updated: 2024/01/17 16:48:27 by xroca-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*memory;

	memory = malloc(size * count);
	if (memory == 0)
		return (0);
	ft_bzero(memory, (size * count));
	return (memory);
}
/*
La función calloc es una función de la biblioteca estándar de C
que se utiliza para asignar memoria dinámicamente para un bloque
de datos y la inicializa a cero. Es especialmente útil cuando
necesitas trabajar con arreglos o estructuras de datos en tiempo
de ejecución y deseas asegurarte de que todos los elementos estén
inicializados en cero.
*/
/*
#include <stdio.h>

int main(void)
{
	int *p = ft_calloc(5, sizeof(int));
	int *p2 = calloc(5, sizeof(int));
    char *s = ft_calloc(5, sizeof(char));
	char *s2 =  calloc(5, sizeof(char));

	if(p || p2 || s || s2)
	{
		printf("%p ", p);
		printf("%p\n", p2);
		printf("%s ", s);
		printf("%s\n", s2);
	}
	free(p);
	free(p2);
	free(s);
	free(s2);

	return (0);
}
*/