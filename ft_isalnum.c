/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kisella <kisella@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 15:33:50 by kisella           #+#    #+#             */
/*   Updated: 2026/10/20 15:41:27 by kisella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalnum(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	printf("teste %d", ft_isalnum("kdwfkdas87akjsdflaf"));
// 	return (0);
// }
