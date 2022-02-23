/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 11:51:03 by agouet            #+#    #+#             */
/*   Updated: 2022/02/10 12:03:56 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h> // printf

void	*ft_memcpy(void	*dest, const void *src, size_t n)// remplacer par libft
{
	unsigned int	i;
	const unsigned char *s;
	unsigned char	*d;
	s=src;
	d=dest;
	i=0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
//
//
//check ordre
int	check_order(int *tab, int size)
{
	int	i;
	
	i = 0;
	while (i < size - 1)
	{
		if (tab[i + 1] < tab [i])
		{
	//		write(1, "besoin de trier\n",16);
			return (1);
		}
       		i++;
	}
	return (0); // pas besoin de trier
}



