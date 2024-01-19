/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xroca-pe <xroca-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:59:22 by xroca-pe          #+#    #+#             */
/*   Updated: 2024/01/10 13:15:48 by xroca-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*p;

	i = 0;
	p = s;
	while (i < n)
	{
		if (p[i] == (unsigned char)c)
			return ((void *)&p[i]);
		i++;
	}
	return (0);
}
/*
La función memchr en C se utiliza para buscar la primera aparición de un
valor específico en un bloque de memoria. Y lo devuelve en void la direccion
del punntero donde encuentra la coincidencia.
*/
/*
#include <string.h>

int main(void)
{
	printf("%s", ft_memchr("holamundo",'a', 10));
	printf("%s\n", memchr("holamundo",'a', 10));
	printf("%s", ft_memchr("holamundo",'z', 10));
	printf("%s\n", memchr("holamundo",'z', 10));

	return (0);
}
*/