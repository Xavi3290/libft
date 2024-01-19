/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xroca-pe <xroca-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:52:11 by xroca-pe          #+#    #+#             */
/*   Updated: 2024/01/17 16:45:20 by xroca-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s)
	{
		if (fd >= 0)
		{
			ft_putstr_fd(s, fd);
			ft_putchar_fd('\n', fd);
		}
	}
}
/*
Te escribe un string con un salto de línea. Utilizando 
ft_putstr_fd y ft_putchar_fd.
*/
/*
#include <stdio.h>

int main(void)
{
	ft_putendl_fd("hola", -1);
	ft_putendl_fd("hola", 1);
	ft_putendl_fd("hola", 50);
	ft_putendl_fd(NULL, 1);

	return (0);
}
*/