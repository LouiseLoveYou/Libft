/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strrchr.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: kisella <kisella@student.42lehavre.fr>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/25 10:24:55 by kisella          #+#    #+#              */
/*   Updated: 2026/10/25 17:41:49 by kisella         ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	x;

	i = 0;
	x = (char) c;
	while (s[i] != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		if (s[i] == x)
		{
			return ((char *) & s[i]);
		}
		i--;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	*res;

// 	res = ft_strrchr("salope", 'a');
// 	printf("%s\n", res);
// 	return (0);
// }
