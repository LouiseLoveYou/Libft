/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strchr.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/23 13:13:17 by username         #+#    #+#              */
/*   Updated: 2026/10/23 14:10:15 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

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

int	main(void)
{
	printf("%s\n", ft_strchr("hello", 'l'));
	return (0);
}
