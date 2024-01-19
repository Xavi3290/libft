/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xroca-pe <xroca-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:13:13 by xroca-pe          #+#    #+#             */
/*   Updated: 2024/01/10 09:00:32 by xroca-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	printf("%d\n",ft_isprint('1'));
	printf("%d\n\n",isprint('1'));
	printf("%d\n",ft_isprint('a'));
	printf("%d\n\n",isprint('a'));
	printf("%d\n",ft_isprint('Z'));
	printf("%d\n\n",isprint('Z'));
	printf("%d\n",ft_isprint('$'));
	printf("%d\n",isprint('$'));
	return (0);
}
*/