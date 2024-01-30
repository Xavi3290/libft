/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xroca-pe <xroca-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 10:31:25 by xroca-pe          #+#    #+#             */
/*   Updated: 2024/01/30 10:14:23 by xroca-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;
	size_t	total;

	i = 0;
	dst_len = 0;
	src_len = 0;
	while (dst[dst_len] != '\0')
		dst_len++;
	while (src[src_len] != '\0')
		src_len++;
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	total = dstsize - dst_len - 1;
	while (src[i] != '\0' && i < total)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (src_len + dst_len);
}
/*
strlcat es una función que se utiliza comúnmente en sistemas tipo Unix y es
parte de la biblioteca C estándar en algunas implementaciones, como BSD. Su
función principal es concatenar una cadena fuente a una cadena destino,
asegurándose de que no se exceda un límite específico de longitud en la cadena
destino. A diferencia de strcat, que no verifica límites y puede provocar
desbordamientos de búfer, strlcat garantiza que el búfer de destino no se 
desborde.
*/
/*
#include <string.h>

int main(void)
{
	char d[20] = "Hola, ";
    const char *o = "mundo!";
    printf("%zu ", ft_strlcat(d, o, 15));
    printf(" %s \n", d);
    char d2[20] = "Hola, ";
    printf("%zu ", strlcat(d2, o, 15));
    printf(" %s \n", d2);

    char d3[10] = "Hola, ";
    printf("%zu ", ft_strlcat(d3, o, 8));
    printf(" %s \n", d3);
    char d4[10] = "Hola, ";
    printf("%zu ", strlcat(d4, o, 8));
    printf(" %s \n", d4);

	return (0);
}
*/
