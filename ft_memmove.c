/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kisella <kisella@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 17:28:42 by kisella           #+#    #+#             */
/*   Updated: 2026/10/25 17:46:31 by kisella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*tmp_dst;
	const unsigned char	*tmp_src;
	size_t				i;

	if (dst == NULL || src == NULL)
		return (NULL);
	tmp_dst = (unsigned char *) dst;
	tmp_src = (const unsigned char *) src;
	if (tmp_dst > tmp_src)
	{
		while (len > 0)
		{
			len--;
			tmp_dst[len] = tmp_src[len];
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			tmp_dst[i] = tmp_src[i++];
		}
		return (dst);
	}
}

int	main(void)
{
}
