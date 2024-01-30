/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xroca-pe <xroca-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 11:13:51 by xroca-pe          #+#    #+#             */
/*   Updated: 2024/01/30 10:14:06 by xroca-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}
/*
 * Descripción:

	*   La función strncmp compara los primeros 'n' caracteres 
    de las cadenas de caracteres apuntadas por 's1' y 's2'. La 
    comparación es sensible a mayúsculas y minúsculas.
 
* Parámetros:
    - s1: Puntero a la primera cadena de caracteres.
    - s2: Puntero a la segunda cadena de caracteres.
    - n: Número de caracteres a comparar.
 
 * Valor de Retorno:
    - Un valor entero menor que, igual a,
	o mayor que cero si los primeros 'n' caracteres
    de s1 son respectivamente menores que, iguales a,
	o mayores que los primeros 'n' caracteres de s2.
 
 * Notas:
   
	- La función utiliza punteros 'unsigned char *' para asegurar el 
    comportamiento definido al comparar caracteres, evitando problemas
     relacionados con la interpretación de caracteres con signo.
  
	- La comparación se detiene después de 'n' caracteres o al llegar
    al final de alguna de las cadenas, lo que ocurra primero.
 */
/*
#include <string.h>

int main(void)
{
	printf("%d\n",ft_strncmp("12323", "12323", 10));
	printf("%d\n\n",strncmp("12323", "12323", 10));
	printf("%d\n",ft_strncmp(" Hola Mundo Mundo", " Holamundo", 10));
	printf("%d\n\n",strncmp(" Hola Mundo Mundo", " Holamundo", 10));
	printf("%d\n",ft_strncmp("hola", "adios", 10));
	printf("%d\n\n",strncmp("hola", "adios", 10));
	printf("%d\n",ft_strncmp("holamundo", "holamundo", 3));
	printf("%d\n\n",strncmp("holamundo", "holamundo", 3));

	return (0);
}
*/