/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xroca-pe <xroca-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 10:51:41 by xroca-pe          #+#    #+#             */
/*   Updated: 2024/01/30 10:13:57 by xroca-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*last;

	i = 0;
	last = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			last = (char *)&s[i];
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (last);
}
/*
La función strrchr en el lenguaje de programación C se utiliza para buscar
la ultima aparición de un carácter específico en una cadena (string) y
devolver un puntero al ultimo carácter encontrado. Si el carácter no se
encuentra en la cadena, la función devuelve un puntero nulo (NULL).
*/
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("%s\n",ft_strrchr("12323", '2'));
	printf("%s\n\n",strrchr("12323", '2'));
	printf("%s\n",ft_strrchr(" Hola Mundo Mundo", 'M'));
	printf("%s\n\n",strrchr(" Hola Mundo Mundo", 'M'));
	printf("%s\n",ft_strrchr("  0  $ a", 'b'));
	printf("%s\n\n",strrchr("  0  $ a", 'b'));
	return (0);
}
*/