/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xroca-pe <xroca-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 10:12:38 by xroca-pe          #+#    #+#             */
/*   Updated: 2024/01/10 10:47:27 by xroca-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (0);
}
/*
La función strchr en el lenguaje de programación C se utiliza para buscar
la primera aparición de un carácter específico en una cadena (string) y
devolver un puntero al primer carácter encontrado. Si el carácter no se
encuentra en la cadena, la función devuelve un puntero nulo (NULL).
*/
/*
#include <string.h>
#include <stdio.h>

int main(void)
{
	printf("%s\n",ft_strchr("123", '2'));
	printf("%s\n\n",strchr("123", '2'));
	printf("%s\n",ft_strchr(" Hola Mundo", 'M'));
	printf("%s\n\n",strchr(" Hola Mundo", 'M'));
	printf("%s\n",ft_strchr("  0  $ a", 'b'));
	printf("%s\n\n",strchr("  0  $ a", 'b'));

	return (0);
}
 */