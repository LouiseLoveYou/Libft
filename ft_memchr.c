/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memchr.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: kisella <kisella@student.42lehavre.fr>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/25 12:48:55 by kisella          #+#    #+#              */
/*   Updated: 2026/11/06 09:59:52 by kisella         ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t				i;
	const unsigned char	*x;
	unsigned char		y;

	i = 0;
	x = (const unsigned char *) str;
	y = (unsigned char) c;
	while (n > i)
	{
		if (x[i] == y)
		{
			return ((void *) & x[i]);
		}
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	*res;

// 	res = ft_memchr("salope", 'l', 6);
// 	printf("%s\n", res);
// 	return (0);
// }
