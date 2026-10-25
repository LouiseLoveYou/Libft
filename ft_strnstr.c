/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kisella <kisella@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 14:12:34 by kisella           #+#    #+#             */
/*   Updated: 2026/10/25 18:00:33 by kisella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *full_str, const char *str2, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (str2[i] == '\0')
	{
		return ((char *) full_str);
	}
	while (i < len)
	{
		j = 0;
		while (full_str[i + j] == str2[j] && full_str[i + j] != '\0' && i + j < len)
		{
			j++;
		}
		if (str2[j] == '\0')
		{
			return ((char *)(full_str + i));
		}
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	printf("%s\n", ft_strnstr("banane", "ane", 10));
// 	return (0);
// }
