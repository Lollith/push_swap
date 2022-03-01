/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 12:00:50 by agouet            #+#    #+#             */
/*   Updated: 2021/12/02 14:09:38 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*to_find)
		return ((char *)str);
	j = 0;
	while (str[j])
	{
		i = 0;
		while (str[j + i] == to_find[i] && i + j < len)
			i++;
		if (!to_find[i])
			return ((char *)str + j);
		j++;
	}
	return (NULL);
}
