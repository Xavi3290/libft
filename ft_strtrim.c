/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xroca-pe <xroca-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:48:34 by xroca-pe          #+#    #+#             */
/*   Updated: 2024/01/17 16:45:41 by xroca-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	len = ft_strlen(s1);
	while (s1[i] != '\0' && ft_strchr(set, s1[i]))
		i++;
	while (i < len && ft_strchr(set, s1[len - 1]))
		len--;
	str = ft_substr(s1, i, len - i);
	return (str);
}
/*
La función ft_strtrim elimina los caracteres especificados en set
del principio y el final de la cadena s1 y devuelve una nueva cadena
que representa la versión recortada de s1. Maneja punteros nulos y
utiliza funciones auxiliares como ft_strchr y ft_substr para realizar
el recorte.
*/
/*
#include <stdio.h>

int main(void)
{
	printf("%s\n", ft_strtrim("12AAABBB2121", "12"));
	printf("%s\n", ft_strtrim("AAABBBB", "12"));
	printf("%s\n", ft_strtrim("1AAABBBB", "12"));
	printf("%s\n", ft_strtrim("AAABBBB2", "12"));
	printf("%s\n", ft_strtrim("hola, mundo, adios, mundo", NULL));
	printf("%s\n", ft_strtrim(NULL, " "));

	return (0);
}
*/