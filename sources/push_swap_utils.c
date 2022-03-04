/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 11:51:03 by agouet            #+#    #+#             */
/*   Updated: 2022/03/04 11:19:58 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] == s2[i]) && s1[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int	check_order(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i + 1] < tab [i])
			return (1);
		i++;
	}
	return (0);
}

void	bubble_sort(int *tab, int size)
{
	int	i;
	int	tmp;

	while (size > 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab [i + 1])
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
			}
			i++;
		}
		size --;
	}
}

int	*ft_indexing(int *input, int *stack_a, int size)
{
	int	*input_order;
	int	i;
	int	j;

	input_order = ft_calloc (size, sizeof(int));
	if (!input_order)
		return (0);
	ft_memcpy (input_order, input, sizeof(int) * (size));
	bubble_sort (input_order, size);
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (input[i] == input_order [j])
				stack_a[i] = j;
			j++;
		}
		i++;
	}
	free (input_order);
	return (stack_a);
}
