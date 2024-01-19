/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xroca-pe <xroca-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 10:09:52 by xroca-pe          #+#    #+#             */
/*   Updated: 2024/01/19 16:05:29 by xroca-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static size_t	ft_numlen(long num)
{
	size_t	len;

	len = 0;
	if (num == 0)
	{
		len++;
		return (len);
	}
	if (num < 0)
	{
		num *= -1;
		len++;
	}
	while (num > 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;
	long	num;

	num = n;
	len = ft_numlen(num);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	len--;
	if (n == 0)
		str[0] = '0';
	if (num < 0)
	{
		str[0] = '-';
		num *= -1;
	}
	while (num > 0)
	{
		str[len] = (num % 10) + '0';
		num /= 10;
		len--;
	}
	return (str);
}
/*

La función ft_itoa convierte un número entero n en 
una cadena de caracteres. Primero, determina la 
longitud necesaria para la cadena mediante la función 
auxiliar ft_numlen, que cuenta los dígitos del número. 
Luego, asigna memoria para la cadena y realiza la 
conversión de los dígitos del número a caracteres, 
teniendo en cuenta el signo. Finalmente, devuelve la 
cadena resultante, con el último elemento establecido 
como el carácter nulo.
*/
/*
#include <stdio.h>

int main(void)
{
	printf("%s\n", ft_itoa(123));
	printf("%s\n", ft_itoa(99999));
	printf("%s\n", ft_itoa(232323));
	printf("%s\n", ft_itoa(-12));
	
	
	return (0);
}
*/