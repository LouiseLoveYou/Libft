/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kisella <kisella@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 17:11:58 by kisella           #+#    #+#             */
/*   Updated: 2026/11/02 17:44:09 by kisella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*newstr;

	if (!s || !f)
		return (NULL);
	newstr = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!newstr)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		newstr[i] = f(i, s[i]);
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}

// char	f(unsigned int i, char c)
// {
// 	(void) i;
// 	return (c + 1);
// }

// int	main(void)
// {
// 	char	*s;

// 	s = ft_strmapi("abc", f);
// 	printf("%s\n", s);
// 	free(s);
// 	return (0);
// }
