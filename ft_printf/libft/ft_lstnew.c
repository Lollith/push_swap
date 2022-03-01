/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 11:36:55 by agouet            #+#    #+#             */
/*   Updated: 2021/12/06 15:23:20 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_elem;

	new_elem = (t_list *) malloc (sizeof(t_list) * 1);
	if (!new_elem)
		return (NULL);
	new_elem->content = (unsigned char *) content;
	new_elem->next = NULL;
	return (new_elem);
}
