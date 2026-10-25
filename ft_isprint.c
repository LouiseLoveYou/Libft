/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_isprint.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: kisella <kisella@student.42lehavre.fr>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/19 17:00:46 by kisella          #+#    #+#              */
/*   Updated: 2026/10/25 17:21:38 by kisella         ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
	}
	else
	{
		return (0);
	}
	return (1);
}

// int	main(void)
// {
// 	printf("teste %d", ft_isprint("kdwfkdas87akjsdflaf"));
// 	return (0);
// }
