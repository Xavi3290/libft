/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xroca-pe <xroca-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 16:18:02 by xroca-pe          #+#    #+#             */
/*   Updated: 2024/01/30 10:08:39 by xroca-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else
	{
		if (n < 0)
		{
			n = -n;
			ft_putchar_fd('-', fd);
		}
		if (n >= 10)
			ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd((n % 10) + '0', fd);
	}
}
/*
La función ft_putnbr_fd imprime el número entero n en el descriptor
de archivo fd, manejando el caso especial del valor mínimo (-2147483648)
e imprimiendo cada dígito recursivamente. Si fd es un descriptor de
archivo válido, se formatea la salida de manera adecuada.
*/
/*
#include <stdio.h>

int	main(void)
{
	//ft_putnbr_fd(-2147483648, 1);
	ft_putnbr_fd(2147483647, 1);
	//ft_putnbr_fd(12, 1);
}
*/