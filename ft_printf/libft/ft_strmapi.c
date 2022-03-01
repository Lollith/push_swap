/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 11:24:00 by agouet            #+#    #+#             */
/*   Updated: 2021/12/01 12:05:27 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*sf;

	sf = (char *) malloc (sizeof(char) * (ft_strlen (s) + 1));
	if (!sf)
		return (NULL);
	i = 0;
	while (s[i])
	{
		sf[i] = (*f)(i, (s[i]));
		i++;
	}
	sf[i] = '\0';
	return (sf);
}
