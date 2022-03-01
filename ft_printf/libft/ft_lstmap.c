/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 15:33:53 by agouet            #+#    #+#             */
/*   Updated: 2021/12/09 16:35:32 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first;
	t_list	*new_elemt;

	first = NULL;
	if (!lst)
		return (NULL);
	while (lst)
	{
		new_elemt = ft_lstnew((*f)(lst->content));
		if (!new_elemt)
		{
			ft_lstclear(lst->content, (*del));
			return (NULL);
		}
		ft_lstadd_back(&first, new_elemt);
		lst = lst->next;
	}
	return (first);
}
