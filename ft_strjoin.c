/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kisella <kisella@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 13:15:40 by kisella           #+#    #+#             */
/*   Updated: 2026/10/29 16:46:24 by kisella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	len_s1;
	char	len_s2;
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	str = ft_calloc(len_s1 + len_s2 + 1, sizeof(char));
	if (!str)
		return (NULL);
	if (!s1 && !s2)
		return (NULL);
	ft_strlcpy(str, s1, len_s1 + 1);
	ft_strlcat(str, s2, len_s1 + len_s2 + 1);
	return (str);
}

// int	main(void)
// {
// 	char	*res;

// 	res = ft_strjoin("Hello ", "World");
// 	printf("%s\n", res);
// 	free(res);
// 	return (0);
// }
