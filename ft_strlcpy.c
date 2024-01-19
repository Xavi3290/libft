/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xroca-pe <xroca-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 09:10:03 by xroca-pe          #+#    #+#             */
/*   Updated: 2024/01/11 10:05:26 by xroca-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	i;

	src_len = 0;
	i = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (dstsize > 0)
	{
		while (i < dstsize - 1 && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (src_len);
}
/*
strlcpy es una función que se utiliza comúnmente en sistemas operativos tipo Unix
y es parte de la biblioteca de C estándar en algunas implementaciones. Su función
principal es copiar una cadena desde una ubicación de origen a una ubicación de
destino, asegurándose de que no se exceda un límite específico de longitud en el
destino. A diferencia de strcpy,que no verifica límites y puede provocar 
desbordamientos de búfer, strlcpy garantiza que el búfer de destino no se 
desborde.
*/
/*
#include <string.h>

int main(void)
{
	char d[10];

	const char *s1 = "hola";
	printf("%zu", ft_strlcpy(d, s1, sizeof(d)));
	printf("%zu\n", strlcpy(d, s1, sizeof(d)));
	const char *s2 = "hola mundo";
	printf("%zu", ft_strlcpy(d, s2, sizeof(d)));
	printf("%zu\n", strlcpy(d, s2, sizeof(d)));
	char d3[20];
	const char *s3 = "hola mundo";
	printf("%zu", ft_strlcpy(d3, s3, sizeof(d3)));
	printf("%zu\n", strlcpy(d3, s3, sizeof(d3)));
	//char *d4 = NULL;
	//const char *s4 = "hola";
	//printf("%zu", ft_strlcpy(d4, s4, sizeof(d4)));
	//printf("%zu\n", strlcpy(d4, s4, sizeof(d4)));
	//Dan segmentation fault

	return (0);
}
*/