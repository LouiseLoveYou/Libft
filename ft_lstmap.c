/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kisella <kisella@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 15:37:43 by kisella           #+#    #+#             */
/*   Updated: 2026/11/04 11:48:56 by kisella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	t_list	*newlst;
	void	*content;

	newlst = NULL;
	node = NULL;
	if (!lst || !del || !f)
		return (NULL);
	while (lst)
	{
		content = f(lst->content);
		node = ft_lstnew(content);
		if (!node)
		{
			del(content);
			ft_lstclear(&newlst, del);
			return (NULL);
		}
		ft_lstadd_back(&newlst, node);
		lst = lst->next;
	}
	return (newlst);
}

// void	*f(void *content)
// {
// 	return (content);
// }

// void	del(void *content)
// {
// 	(void) content;
// }

// int	main(void)
// {
// 	t_list	*lst;
// 	t_list	*res;

// 	lst = ft_lstnew("A");
// 	ft_lstadd_back(&lst, ft_lstnew("B"));
// 	res = ft_lstmap(lst, f, del);
// 	printf("%s\n", (char *) res->content);
// 	printf("%s\n", (char *) res->next->content);
// 	return (0);
// }
