/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_split.c                                        :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: kisella <kisella@student.42lehavre.fr>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/02 09:35:06 by kisella          #+#    #+#              */
/*   Updated: 2026/11/06 09:56:43 by kisella         ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(char const *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != c && (i == 0 || str[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static char	**ft_free(char **strs, int count)
{
	while (count > 0)
		free(strs[--count]);
	free(strs);
	return (NULL);
}

static char	*word_dup(const char *str, char c)
{
	size_t	len;

	len = 0;
	while (str[len] && str[len] != c)
		len++;
	return (ft_substr(str, 0, len));
}

char	**ft_split(const char *s, char c)
{
	char	**strs;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	strs = ft_calloc(count_word(s, c) + 1, sizeof(char *));
	if (!strs)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			strs[j] = word_dup(s + i, c);
			if (!strs[j++])
				return (ft_free(strs, j - 1));
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (strs);
}

// int	main(void)
// {
// 	char	**strs;
// 	int		i;

// 	strs = ft_split("Hello world, ca va ?", ' ');
// 	if (!strs)
// 		return (1);
// 	i = 0;
// 	while (strs[i])
// 	{
// 		printf("[%s]\n", strs[i]);
// 		free(strs[i]);
// 		i++;
// 	}
// 	free(strs);
// 	return (0);
// }
