/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xroca-pe <xroca-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 10:07:10 by xroca-pe          #+#    #+#             */
/*   Updated: 2024/01/30 10:14:02 by xroca-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (i < len && haystack[i] != '\0')
	{
		j = 0;
		while (haystack[i + j] == needle[j] && i + j < len)
		{
			j++;
			if (needle[j] == '\0')
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (0);
}
/*
La función strnstr se utiliza para buscar la primera aparición de una subcadena
dentro de una cadena principal, pero con una restricción de longitud. Esto 
significa que buscará la subcadena dentro de la cadena principal, pero no 
buscará más allá de cierta longitud especificada.
*/
/*
#include <string.h>

int main(void)
{
	char *s = "hola mundo";
	printf("%s", ft_strnstr(s,"la", 5));
	printf("%s\n", strnstr(s,"la", 5));
	printf("%s", ft_strnstr(s,"yu", 5));
	printf("%s\n", strnstr(s,"yu", 5));
	printf("%s", ft_strnstr(s,"do", 5));
	printf("%s\n", strnstr(s,"do", 5));
	
	return (0);
}
*/