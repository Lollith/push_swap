/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 16:32:02 by agouet            #+#    #+#             */
/*   Updated: 2021/12/08 01:42:50 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static	int	ft_count(char const *s, char c)
{
	int	i;
	int	count_w;

	i = 0;
	count_w = 0;
	while (s[i])
	{	
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			count_w++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count_w);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		i;
	int		j;
	int		start;

	i = 0;
	j = 0;
	array = (char **) malloc (sizeof (char *) * (ft_count(s, c) + 1));
	if (!array)
		return (NULL);
	while (j < ft_count(s, c))
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		array[j] = ft_substr(s, start, i - start);
		j++;
	}
	array[j] = NULL;
	return (array);
}
