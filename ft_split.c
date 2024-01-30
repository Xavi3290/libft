/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xroca-pe <xroca-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 13:30:03 by xroca-pe          #+#    #+#             */
/*   Updated: 2024/01/30 10:14:42 by xroca-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	ft_wordcounter(char const *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			j++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (j);
}

static size_t	ft_wordsize(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

static void	ft_free(char **str)
{
	size_t	i;

	i = 0;
	while (str[i] != NULL)
	{
		free(str[i]);
		i++;
	}
	free(str);
}

static char	**ft_memorymaker(char **str, char *s, char c)
{
	size_t	len;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			len = ft_wordsize(&s[i], c);
			str[j] = ft_substr(&s[i], 0, len);
			if (str[j] == NULL)
			{
				ft_free(str);
				return (NULL);
			}
			i += len;
			j++;
		}
		else
			i++;
	}
	str[j] = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**words;

	words = malloc(sizeof(char *) * (ft_wordcounter(s, c) + 1));
	if (!words || !s)
		return (NULL);
	return (ft_memorymaker(words, (char *)s, c));
}
/*
La función ft_split divide una cadena (s) en palabras utilizando el 
delimitador c y devuelve un array de strings. Primero, se cuenta la 
cantidad de palabras en la cadena (ft_wordcounter). Luego, se 
asigna memoria para el array (words) y se llena con las palabras 
encontradas utilizando funciones auxiliares (ft_memorymaker). La 
función utiliza memoria dinámica, y si ocurre un error durante la 
asignación o la creación de las subcadenas, libera la memoria y 
devuelve NULL.
*/
/*
#include <stdio.h>

int main(void)
{
	const char *o = "hola que tal";
	char **sp;
	int i = 0;
	const char *o2 = "       hola hola hola";
	char **sp2;
	

	sp = ft_split(o, ' ');

	while (sp[i] != NULL)
	{
		printf("%s\n", sp[i]);
		i++;
	}

	sp2 = ft_split(o2, ' ');
	i = 0;

	while (sp2[i] != NULL)
	{
		printf("%s\n", sp2[i]);
		i++;
	}
	
	return (0);
}
*/