/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xroca-pe <xroca-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:26:37 by xroca-pe          #+#    #+#             */
/*   Updated: 2024/01/17 16:46:26 by xroca-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	totalen;
	size_t	i;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	totalen = ft_strlen(s1) + ft_strlen(s2);
	str = malloc((totalen + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (i < totalen)
	{
		if (i < ft_strlen(s1))
			str[i] = s1[i];
		else
			str[i] = s2[i - ft_strlen(s1)];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
strjoin() crea una cadena formada por str1 en combinación con str2.
La cadena devuelta se asigna fuera de la memoria temporal y, por lo
tanto, sólo es válida durante la duración de la cláusula. Si no hay
suficiente espacio temporal disponible, strjoin no se ejecuta y se
genera un error.
*/
/*
#include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_strjoin("hola,", " mundo!"));
	printf("%s\n", ft_strjoin("", " mundo!"));
	printf("%s\n", ft_strjoin("hola,", ""));
	printf("%s\n", ft_strjoin(NULL, "mundo!"));
	printf("%s\n", ft_strjoin("hola,", NULL));
	return (0);
}
*/