/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xroca-pe <xroca-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 09:06:04 by xroca-pe          #+#    #+#             */
/*   Updated: 2024/01/30 10:14:14 by xroca-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
/*
#include <string.h>

int main(void)
{
	printf("%zu\n",ft_strlen("123"));
	printf("%zu\n\n",strlen("123"));
	printf("%zu\n",ft_strlen("Hola Mundo"));
	printf("%zu\n\n",strlen("Hola Mundo"));
	printf("%zu\n",ft_strlen(" a"));
	printf("%zu\n\n",strlen(" a"));
	printf("%zu\n",ft_strlen(""));
	printf("%zu\n\n",strlen(""));

	return (0);
}
*/