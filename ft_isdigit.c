/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_isdigit.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: kisella <kisella@student.42lehavre.fr>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/19 15:04:06 by kisella          #+#    #+#              */
/*   Updated: 2026/10/25 17:17:41 by kisella         ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
	}
	else
	{
		return (0);
	}
	return (1);
}

// int	main(void)
// {
// 	printf("teste %d", ft_isdigit('8'));
// 	return (0);
// }
