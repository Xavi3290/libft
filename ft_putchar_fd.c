/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xroca-pe <xroca-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 13:29:35 by xroca-pe          #+#    #+#             */
/*   Updated: 2024/01/17 17:02:37 by xroca-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	if (fd >= 0)
		write(fd, &c, 1);
}
/*
fd :
0: Entrada estándar (stdin): normalmente asociado al teclado.
1: Salida estándar (stdout): normalmente asociado a la pantalla.
2: Error estándar (stderr): normalmente asociado a la pantalla para
mensajes de error.
El segundo argumento (&c) es la dirección de memoria del carácter c.
El tercer argumento (1) es la cantidad de bytes que se van a escribir,
que en este caso es solo un carácter.
*/
/*
#include <stdio.h>

int	main(void)
{
	ft_putchar_fd('a', -1);
	ft_putchar_fd('a', 0);
	ft_putchar_fd('a', 1);
	ft_putchar_fd('a', 2);
	ft_putchar_fd('a', 50);
	ft_putchar_fd('\0', 1);
	return (0);
}
*/