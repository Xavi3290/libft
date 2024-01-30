/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xroca-pe <xroca-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 11:52:44 by xroca-pe          #+#    #+#             */
/*   Updated: 2024/01/30 10:14:45 by xroca-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;
	size_t			i;

	p = b;
	i = 0;
	while (i < len)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (p);
}
/*
La función memset se utiliza en C para llenar un bloque de
memoria con un valor específico.Es especialmente útil para
inicializar arrays y estructuras de datos con un valor
predefinido o para borrar áreas de memoria asignada. Por ejemplo,
puedes usar memset para llenar un array con ceros o para
establecer ciertas partes de una estructura en un valor
específico antes de utilizarla.
*/
/*
#include <string.h>

int main(void)
{
	char b1[5];
	char b2[5];
	char b3[3];
	char b4[3];

	ft_memset(b1, '0', sizeof(b1));
	memset(b2, '0', sizeof(b2));
	ft_memset(b3, 'A', sizeof(b3));
	memset(b4, 'A', sizeof(b4));

	for (int i = 0; i < (int)sizeof(b1); ++i) {
        printf("%c ", b1[i]);
    }
	printf("\n");
	for (int i = 0; i < (int)sizeof(b2); ++i) {
        printf("%c ", b2[i]);
    }
	printf("\n");
	for (int i = 0; i < (int)sizeof(b3); ++i) {
        printf("%c ", b3[i]);
    }
	printf("\n");
	for (int i = 0; i < (int)sizeof(b4); ++i) {
        printf("%c ", b4[i]);
    }

	return (0);
}
*/