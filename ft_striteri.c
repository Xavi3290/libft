/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xroca-pe <xroca-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:44:39 by xroca-pe          #+#    #+#             */
/*   Updated: 2024/01/30 10:14:31 by xroca-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (s && f)
	{
		while (s[i] != '\0')
		{
			f(i, &s[i]);
			i++;
		}
	}
}
/*
La función ft_striteri itera sobre cada carácter de la cadena s
y aplica la función f a cada carácter junto con su índice
correspondiente. La función f toma como argumentos el índice y
una referencia al carácter en esa posición. Esta función permite
realizar operaciones específicas en cada elemento de la cadena,
utilizando su posición en el índice.
*/
/*
#include <stdio.h>

static void	ft_print(unsigned int index, char *c)
{
	printf("%d %s\n", index, c);
}

int	main(void)
{
	char	*o;

	o = "hello";
	ft_striteri(o, &ft_print);
	return (0);
}
*/