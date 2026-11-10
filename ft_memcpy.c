/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memcpy.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: kisella <kisella@student.42lehavre.fr>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/22 11:49:58 by kisella          #+#    #+#              */
/*   Updated: 2026/11/06 09:59:57 by kisella         ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*tmp_dst;
	unsigned char	*tmp_src;
	size_t			i;

	i = 0;
	if (dst == NULL && src == NULL)
	{
		return (dst);
	}
	tmp_dst = (unsigned char *) dst;
	tmp_src = (unsigned char *) src;
	while (n > i)
	{
		tmp_dst[i] = tmp_src[i];
		i++;
	}
	return (dst);
}

// int	main(void)
// {
// 	char	src[] = "abc";
// 	char	dst[4];

// 	ft_memcpy(dst, src, 4);
// 	printf("%s\n", dst);
// 	return (0);
// }
