/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xroca-pe <xroca-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 10:35:02 by xroca-pe          #+#    #+#             */
/*   Updated: 2024/01/30 10:13:44 by xroca-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(s) - start < len)
	{
		len = ft_strlen(s) - start;
	}
	subs = malloc((len + 1) * sizeof(char));
	if (!subs)
		return (NULL);
	while (i < len)
	{
		subs[i] = s[start + i];
		i++;
	}
	subs[i] = '\0';
	return (subs);
}
/*
La función substr (abreviatura de "substring") generalmente se usa
para extraer una porción de una cadena (string) más grande.
*/
/*
#include <stdio.h>

int	main(void)
{
	const char	*o = "hola, mundo!";
	const char	*o2 = NULL;

	printf("%s\n", ft_substr(o, 6, 6));
	printf("%s\n", ft_substr(o, 15, 5));
	printf("%s\n", ft_substr(o, 6, 10));
	printf("%s\n", ft_substr(o2, 0, 5));
	return (0);
}
*/