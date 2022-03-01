/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 16:08:55 by agouet            #+#    #+#             */
/*   Updated: 2021/11/29 13:14:21 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	int		len_s1;
	int		len_s2;
	int		i;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	s = (char *) malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (!s)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		s[i] = s1[i];
		i ++;
	}
	i = 0;
	while (s2[i])
	{
		s[len_s1] = s2[i];
		i++;
		len_s1++;
	}
	s[len_s1] = '\0';
	return (s);
}
