/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kisella <kisella@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 16:45:52 by kisella           #+#    #+#             */
/*   Updated: 2026/10/25 18:01:30 by kisella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*res;

	i = 0;
	res = malloc(sizeof(char)*ft_strlen(s1) + 1);
	if (!res)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		res[i] = s1[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

// int	main(void)
// {
// 	printf("%s\n", ft_strdup("Charlie kirk"));
// 	return (0);
// }
