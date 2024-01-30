/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xroca-pe <xroca-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 16:06:31 by xroca-pe          #+#    #+#             */
/*   Updated: 2024/01/30 10:16:01 by xroca-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	result = 0;
	sign = 1;
	while (str[i] == '\f' || str[i] == '\n' || str[i] == '\r' || str[i] == '\t'
		|| str[i] == '\v' || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
/*
La función atoi (que significa "ASCII to Integer") es una
función de la biblioteca estándar de C que convierte una
cadena de caracteres que representa un número entero en una
representación numérica de tipo int. Esta función es útil
cuando necesitas tomar un valor numérico de una cadena de
entrada, como un número ingresado por el usuario en forma
de texto. Y utiliza isspace para los espacios, etc.
*/
/*
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	printf("%d ", ft_atoi("12"));
	printf("%d\n", atoi("12"));
	printf("%d ", ft_atoi("-12"));
	printf("%d\n", atoi("-12"));
	printf("%d ", ft_atoi("  -12"));
	printf("%d\n", atoi("  -12"));
	printf("%d ", ft_atoi("  ab12"));
	printf("%d\n", atoi("  ab12"));
	printf("%d ", ft_atoi("  12ab"));
	printf("%d\n", atoi("  12ab"));

	return (0);
}
*/