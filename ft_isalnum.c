/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xroca-pe <xroca-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:42:34 by xroca-pe          #+#    #+#             */
/*   Updated: 2024/01/30 10:15:51 by xroca-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0'
			&& c <= '9'))
		return (1);
	return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	printf("%d\n",ft_isalnum('1'));
	printf("%d\n\n",isalnum('1'));
	printf("%d\n",ft_isalnum('a'));
	printf("%d\n\n",isalnum('a'));
	printf("%d\n",ft_isalnum('Z'));
	printf("%d\n\n",isalnum('Z'));
	printf("%d\n",ft_isalnum('$'));
	printf("%d\n",isalnum('$'));	

	return (0);
}
*/