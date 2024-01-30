/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xroca-pe <xroca-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:08:29 by xroca-pe          #+#    #+#             */
/*   Updated: 2024/01/30 10:09:47 by xroca-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}
/*
La función ft_putstr_fd imprime la cadena de caracteres s en el
descriptor de archivo fd.
*/
/*
#include <stdio.h>

int	main(void)
{
	ft_putstr_fd("hola", -1);
	ft_putstr_fd("hola", 0);
	ft_putstr_fd("hola", 1);
	ft_putstr_fd("hola", 2);
	ft_putstr_fd("hola", 50);
	ft_putstr_fd(NULL, 1);
	return (0);
}
*/