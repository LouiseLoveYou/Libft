/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strlcat.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: kisella <kisella@student.42lehavre.fr>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/23 12:05:57 by kisella          #+#    #+#              */
/*   Updated: 2026/10/25 17:40:32 by kisella         ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;
	size_t	j;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	j = dst_len;
	i = 0;
	if (dstsize <= dst_len)
	{
		return (dstsize + src_len);
	}
	while (src[i] != '\0' && j < dstsize - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (dst_len + src_len);
}

// int	main(void)
// {
// 	char	dst[10] = "abc";
// 	size_t	ret;

// 	ret = ft_strlcat(dst, "defghijklm", 10);
// 	printf("retour : %zu\n", ret);
// 	printf("dst    : %s\n", dst);
// 	return (0);
// }
