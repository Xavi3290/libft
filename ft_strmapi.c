/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xroca-pe <xroca-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:08:25 by xroca-pe          #+#    #+#             */
/*   Updated: 2024/01/30 10:14:09 by xroca-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	i = ft_strlen(s);
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
Esta función ft_strmapi toma una cadena de caracteres s y un
puntero a una función f como argumentos. Utiliza la función f
para aplicar una operación a cada carácter de la cadena s.
Luego, crea y devuelve una nueva cadena de caracteres con los
resultados de estas operaciones. La función verifica la validez
de los punteros de entrada y utiliza malloc para asignar memoria
dinámica para la nueva cadena. Además, la función copia el
carácter nulo al final de la cadena resultante para garantizar
que sea una cadena de caracteres válida.
*/
/*
#include <stdio.h>

static char	fft_toupper(unsigned int index, char c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

int	main(void)
{
	char	*o;

	o = "hello";
	printf("%s\n", ft_strmapi(o, &fft_toupper));
	return (0);
}
*/