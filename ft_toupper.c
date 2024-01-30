/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xroca-pe <xroca-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:17:43 by xroca-pe          #+#    #+#             */
/*   Updated: 2024/01/30 10:13:09 by xroca-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
/*
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	printf("%d\n",ft_toupper('1'));
	printf("%d\n\n",toupper('1'));
	printf("%d\n",ft_toupper('a'));
	printf("%d\n\n",toupper('a'));
	printf("%d\n",ft_toupper('Z'));
	printf("%d\n\n",toupper('Z'));
	printf("%d\n",ft_toupper('$'));
	printf("%d\n",toupper('$'));
	return (0);
}
*/