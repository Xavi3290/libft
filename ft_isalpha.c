/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xroca-pe <xroca-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:49:54 by xroca-pe          #+#    #+#             */
/*   Updated: 2024/01/09 16:04:33 by xroca-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("%d\n",ft_isalpha('1'));
	printf("%d\n\n",isalpha('1'));
	printf("%d\n",ft_isalpha('a'));
	printf("%d\n\n",isalpha('a'));
	printf("%d\n",ft_isalpha('Z'));
	printf("%d\n",isalpha('Z'));

	return (0);
}
*/