/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_isascii.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: kisella <kisella@student.42lehavre.fr>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/19 15:44:32 by kisella          #+#    #+#              */
/*   Updated: 2026/11/06 09:59:32 by kisella         ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
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
// 	printf("teste %d", ft_isascii(-1));
// 	return (0);
// }
