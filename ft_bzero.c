/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xroca-pe <xroca-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:41:50 by xroca-pe          #+#    #+#             */
/*   Updated: 2024/01/10 13:17:20 by xroca-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	size_t			i;

	i = 0;
	p = s;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}
/*
La funcion esta deprecada, se utiliza mas memset.
La función bzero se utiliza en C para establecer un bloque de memoria a cero
(es decir, rellenarlo con bytes de valor cero). Su principal uso es borrar o
inicializar una parte de la memoria.
*/
/*
#include <strings.h>

int	main(void)
{
	char	b1[5];
	char	b2[5];
	char	b3[3];
	char	b4[3];

	ft_bzero(b1, sizeof(b1));
	bzero(b2, sizeof(b2));
	ft_bzero(b3, sizeof(b3));
	bzero(b4, sizeof(b4));
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