/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strncmp.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: kisella <kisella@student.42lehavre.fr>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/20 16:30:15 by kisella          #+#    #+#              */
/*   Updated: 2026/10/21 11:59:53 by kisella         ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)

{
	int	i;

	i = 0;
	if (n == '\0')
	{
		return (0);
	}
	while (s1[i] == s2[i] && s1[i] != '\0' && i < (n - 1))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

// int	main(void)
// {
// 	char			s1[] = "aa";
// 	char			s2[] = "Aa";
// 	unsigned int	n = 1;

// 	printf("%d", ft_strncmp(s1, s2, n));
// 	return (0);
// }
