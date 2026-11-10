/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_striteri.c                                     :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: kisella <kisella@student.42lehavre.fr>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/02 17:44:13 by kisella          #+#    #+#              */
/*   Updated: 2026/11/06 10:00:19 by kisella         ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

// char	f(unsigned int i, char c)
// {
// 	(void) i;
// 	return (c + 1);
// }

// int	main(void)
// {
// 	char	*s;

// 	s = ft_striteri("abc", f);
// 	printf("%s\n", s);
// 	return (0);
// }
