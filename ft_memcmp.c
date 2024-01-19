/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xroca-pe <xroca-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 14:43:27 by xroca-pe          #+#    #+#             */
/*   Updated: 2024/01/11 09:39:36 by xroca-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	size_t				i;

	i = 0;
	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	while (i < n)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}
/*
La función memcmp en C se utiliza para comparar dos bloques
de memoria y determinar si son iguales o cuál es el mayor o
menor en caso de que sean diferentes.
*/
/*
#include <string.h>

int	main(void)
{
	printf("%d", ft_memcmp("hola", "hola", 3));
	printf("%d\n", memcmp("hola", "hola", 3));
	printf("%d", ft_memcmp("adios", "hola", 3));
	printf("%d\n", memcmp("adios", "hola", 3));
	printf("%d", ft_memcmp("blablabla", "holahola", 6));
	printf("%d\n", memcmp("blablabla", "holahola", 6));
	printf("%d", ft_memcmp("holahola", "blablabla", 6));
	printf("%d\n", memcmp("holahola", "blablabla", 6));
	return (0);
}
*/