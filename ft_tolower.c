/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xroca-pe <xroca-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 09:00:18 by xroca-pe          #+#    #+#             */
/*   Updated: 2024/01/30 10:13:15 by xroca-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
/*
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	printf("%d\n",ft_tolower('1'));
	printf("%d\n\n",tolower('1'));
	printf("%d\n",ft_tolower('a'));
	printf("%d\n\n",tolower('a'));
	printf("%d\n",ft_tolower('Z'));
	printf("%d\n\n",tolower('Z'));
	printf("%d\n",ft_tolower('$'));
	printf("%d\n",tolower('$'));	

	return (0);
}*/