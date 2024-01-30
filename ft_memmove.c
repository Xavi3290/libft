/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xroca-pe <xroca-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:28:51 by xroca-pe          #+#    #+#             */
/*   Updated: 2024/01/30 10:14:49 by xroca-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;
	size_t	i;

	d = (char *)dst;
	s = (char *)src;
	i = 0;
	if (!d && !s)
		return (0);
	if (d < s)
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		while (len-- > 0)
		{
			d[len] = s[len];
		}
	}
	return (dst);
}
/*
La función memmove en C se utiliza para copiar un bloque de memoria de una
ubicación de origen a una ubicación de destino, incluso si las dos ubicaciones
se superponen.
La función memmove se diferencia de memcpy en que es segura para copiar datos
incluso si las ubicaciones de origen y destino se superponen. Esto significa que
puedes utilizar memmove cuando no estás seguro de que las ubicaciones de memoria
sean completamente independientes.
*/
/*
#include <string.h>

int main(void)
{
	//solape
	char b1[] = "holamundo";
    ft_memmove(b1 + 2, b1, 4);
    printf("%s\n", b1);

    char b2[] = "holamundo";
    memmove(b2 + 2, b2, 4);
   	printf("%s\n", b2);
    

	//diferentes bloques de memoria
	char s[] = "holamundo";
    char d[20];
    ft_memmove(d, s + 3, 5);
    printf("%s\n", d);

    char s2[] = "holamundo";
    char d2[20];
    memmove(d2, s + 3, 5);
    printf("%s\n", d2);

	//diferentes bloques de memoria con solape
	char s3[] = "holamundo";
    char d3[20];
    ft_memmove(d3 + 5, s3, 8);
    printf("%s\n", d3);

    char s4[] = "holamundo";
    char d4[20];
    memmove(d4 + 5, s4, 8);
    printf("%s\n", d4);

	//diferentes bloques de memoria sin solape
	char s5[] = "holamundo";
    char d5[20];
    ft_memmove(d5 + 5, s5 + 7, 6);
    printf("%s\n", d5);

    char s6[] = "holamundo";
    char d6[20];
    memmove(d6 + 5, s6 + 7, 6);
    printf("%s\n", d6);
	
	//las dos ultimas cogen letras nuevas por el
	//puntero ser mas grande, entonces cogen las
	// que hay

	return (0);
}
*/