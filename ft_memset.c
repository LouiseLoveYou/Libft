/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kisella <kisella@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 12:04:45 by kisella           #+#    #+#             */
/*   Updated: 2026/10/22 12:20:52 by kisella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>

void	*ft_memset(void *ptr, int c, size_t n)
{
	size_t			i;
	unsigned char	*tmp;

	tmp = (unsigned char *) ptr;
	i = 0;
	while (i < n)
	{
		tmp[i] = c;
		i++;
	}
	return (ptr);
}

int	main(int argc, char **argv)
{
	argc = argc;
	str = argv[1];
	printf("Before %s\n", str);
	ft_memset(str, 88, 2);
	printf("After %s\n", str);
	return (0);
}
