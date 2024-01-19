/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xroca-pe <xroca-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:07:41 by xroca-pe          #+#    #+#             */
/*   Updated: 2024/01/10 09:42:01 by xroca-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	printf("%d\n",ft_isascii('1'));
	printf("%d\n\n",isascii('1'));
	printf("%d\n",ft_isascii('a'));
	printf("%d\n\n",isascii('a'));
	printf("%d\n",ft_isascii('Z'));
	printf("%d\n\n",isascii('Z'));
	printf("%d\n",ft_isascii('$'));
	printf("%d\n",isascii('$'));
	return (0);
}
*/