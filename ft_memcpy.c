/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xroca-pe <xroca-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:18:43 by xroca-pe          #+#    #+#             */
/*   Updated: 2024/01/30 10:14:52 by xroca-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	i = 0;
	d = dst;
	s = src;
	if (!d && !s)
		return (0);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
/*
La función memcpy en C se utiliza para copiar un bloque de memoria desde
una ubicación de origen a una ubicación de destino.
*/
/*
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	char	*origen;
	char	*destino;
	char	*origen2;
	char	*destino2;
	size_t	longitud;

	origen = "hola mundo";
	destino = (char *)malloc(strlen(origen) + 1);
	origen2 = "hola mundo";
	destino2 = (char *)malloc(strlen(origen2) + 1);
	longitud = 11;
	if (destino && destino2) {
		memcpy(destino, origen, longitud);
		ft_memcpy(destino2, origen2, longitud);
		printf("Cadena de destino 1: %s\n", destino);
		printf("Cadena de destino 2: %s\n", destino2);
		free(destino);
		free(destino2);
	} else {
		printf("Error al asignar memoria.\n");
	}
	return (0);
}
*/