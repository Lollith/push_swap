/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 12:55:46 by agouet            #+#    #+#             */
/*   Updated: 2021/12/13 16:53:32 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*piece_s;

	if (len > ft_strlen(s))
		len = ft_strlen(s);
	if (ft_strlen(s) < start)
		len = 0;
	piece_s = (char *) malloc (sizeof (char) * (len + 1));
	if (!piece_s)
		return (NULL);
	i = 0;
	while (i < len)
	{
		piece_s[i] = s[start + i];
		i++;
	}
	piece_s[i] = '\0';
	return (piece_s);
}
