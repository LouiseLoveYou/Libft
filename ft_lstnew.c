/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kisella <kisella@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 10:40:04 by kisella           #+#    #+#             */
/*   Updated: 2026/11/03 11:04:11 by kisella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node1;

	node1 = malloc(sizeof(t_list));
	if (!node1)
		return (NULL);
	node1->content = content;
	node1->next = NULL;
	return (node1);
}

// int	main(void)
// {
// 	t_list	*node;

// 	node = ft_lstnew("hello");
// 	if (!node)
// 		return (1);
// 	printf("content : %s\n", (char *) node->content);
// 	printf("next    : %p\n", (void *) node->next);
// 	free(node);
// 	return (0);
// }
