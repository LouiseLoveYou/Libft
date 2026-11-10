/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strchr.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: kisella <kisella@student.42lehavre.fr>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/23 13:13:17 by kisella          #+#    #+#              */
/*   Updated: 2026/11/06 10:00:11 by kisella         ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	i;
	char	x;

	i = 0;
	x = (char) c;
	while (str[i] != '\0')
	{
		if (str[i] == x)
		{
			return ((char *) & str[i]);
		}
		i++;
	}
	if (str[i] == x)
		return ((char *) & str[i]);
	return (NULL);
}

// int	main(void)
// {
// 	printf("%s\n", ft_strchr("banane", 'a'));
// 	return (0);
// }
