/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 11:59:41 by agouet            #+#    #+#             */
/*   Updated: 2021/11/30 17:03:16 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	while (*s && len >= 0)
	{
		if ((char) *(s + len) == (char) c)
			return ((char *)(s + len));
		len--;
	}
	if (c == 0)
		return ((char *)s);
	return (NULL);
}
