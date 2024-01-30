/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xroca-pe <xroca-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:38:22 by xroca-pe          #+#    #+#             */
/*   Updated: 2024/01/30 10:14:35 by xroca-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*dup;

	len = ft_strlen(s1);
	dup = malloc((len + 1) * sizeof(char));
	if (!dup)
		return (0);
	ft_strlcpy(dup, s1, len + 1);
	return (dup);
}
/*
La función strdup se utiliza para duplicar una cadena de
caracteres en una nueva área de memoria asignada dinámicamente.
*/
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	const char	*o = "hola mundo";
	char		*d1;
	char		*d2;
	const char	*o2 = "";
	char		*d3;
	char		*d4;
	const char	*o3 = NULL;
	char		*d5;
	char		*d6;

	d1 = ft_strdup(o);
	d2 = strdup(o);
	printf("%s ", d1);
	printf("%s\n", d2);
	free(d1);
	free(d2);
	d3 = ft_strdup(o);
	d4 = strdup(o);
	printf("%s ", d3);
	printf("%s\n", d4);
	free(d3);
	free(d4);
	d5 = ft_strdup(o);
	d6 = strdup(o);
	if (!d5 && !d6)
		printf("Funciona");
	else
		printf("No funciona");
	return (0);
}
*/