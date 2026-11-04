/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kisella <kisella@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 09:52:45 by kisella           #+#    #+#             */
/*   Updated: 2026/11/02 16:26:07 by kisella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(long n)
{
	int	len;

	len = (n <= 0);
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	j;

	j = n;
	len = ft_count(j);
	str = malloc(len * sizeof(char) + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (j < 0)
	{
		j = -j;
		str[0] = '-';
	}
	if (j == 0)
	{
		str[0] = '0';
	}
	while (j > 0)
	{
		str[--len] = j % 10 + '0';
		j /= 10;
	}
	return (str);
}

// int	main(void)
// {
// 	printf("%s\n", ft_itoa(42));
// 	printf("%s\n", ft_itoa(-42));
// 	return (0);
// }
