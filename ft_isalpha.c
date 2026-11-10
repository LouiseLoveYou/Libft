/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_isalpha.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: kisella <kisella@student.42lehavre.fr>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/06 09:59:10 by kisella          #+#    #+#              */
/*   Updated: 2026/11/06 09:59:29 by kisella         ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	}
	else if (c >= 'A' && c <= 'Z')
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
// 	printf("teste %d", ft_isalpha('7'));
// 	return (0);
// }
