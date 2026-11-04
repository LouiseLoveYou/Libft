/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kisella <kisella@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 11:32:27 by kisella           #+#    #+#             */
/*   Updated: 2026/11/03 11:48:37 by kisella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = *lst;
	while (last->next)
		last = last->next;
	last->next = new;
}

// int	main(void)
// {
// 	t_list	*liste;
// 	t_list	*tmp;

// 	liste = NULL;
// 	ft_lstadd_back(&liste, ft_lstnew("A"));
// 	tmp = liste;
// 	while (tmp)
// 	{
// 		printf("%s\n", (char *) tmp->content);
// 		tmp = tmp->next;
// 	}
// 	return (0);
// }
