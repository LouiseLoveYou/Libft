/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_bzero.c                                        :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: kisella <kisella@student.42lehavre.fr>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/21 15:41:49 by kisella          #+#    #+#              */
/*   Updated: 2026/10/21 17:16:40 by kisella         ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*tmp;

	i = 0;
	tmp = (unsigned char *) s;
	while (n > i)
	{
		tmp[i] = 0;
		i++;
	}
}

int	main(int argc, char **argv)
{
	char	*str;

	argc = argc;
	str = argv[1];
	printf("Before %s\n", str);
	ft_bzero(str, 1);
	printf("After %s\n", str);
	return (0);
}
