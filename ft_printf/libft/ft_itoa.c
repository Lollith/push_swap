/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 18:06:04 by agouet            #+#    #+#             */
/*   Updated: 2021/11/29 13:15:49 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_len(int n)
{
	int				len;
	unsigned int	long_n;

	long_n = n;
	len = 1;
	if (n < 0)
	{
		len ++;
		long_n = (-long_n);
	}
	while (long_n > 9)
	{
		long_n = long_n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{	
	char			*s;
	int				len;
	unsigned int	number;

	if (n < 0)
		number = (-n);
	else
		number = n;
	len = ft_len(n);
	s = (char *)ft_calloc(len + 1, sizeof(char));
	while (len > 0)
	{
		s[len - 1] = number % 10 + '0';
		number = number / 10;
		len--;
	}
	if (n < 0)
		s[0] = '-';
	return (s);
}
