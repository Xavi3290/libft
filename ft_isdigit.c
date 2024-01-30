/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xroca-pe <xroca-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:28:02 by xroca-pe          #+#    #+#             */
/*   Updated: 2024/01/30 10:15:42 by xroca-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	printf("%d\n",ft_isdigit('1'));
	printf("%d\n\n",isdigit('1'));
	printf("%d\n",ft_isdigit('a'));
	printf("%d\n\n",isdigit('a'));
	printf("%d\n",ft_isdigit('Z'));
	printf("%d\n",isdigit('Z'));
	return (0);
}
*/