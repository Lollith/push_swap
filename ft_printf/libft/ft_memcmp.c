/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 10:02:48 by agouet            #+#    #+#             */
/*   Updated: 2021/11/29 15:53:29 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*src1;
	const unsigned char	*src2;

	src1 = s1;
	src2 = s2;
	if (n == 0)
		return (0);
	while ((n - 1) && *src1 == *src2)
	{
		src1++;
		src2++;
		n--;
	}
	return (*src1 - *src2);
}
