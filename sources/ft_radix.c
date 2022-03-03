/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_radix.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 13:42:15 by agouet            #+#    #+#             */
/*   Updated: 2022/03/03 12:13:40 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_max(int *stack, int size)
{
	int	max;
	int	i;

	max = stack[0];
	i = 1;
	while (i < size)
	{
		if (max < stack[i])
			max = stack[i];
		i++;
	}
	return (max);
}

int	find_max_bits(int *stack, int size)
{
	int	max;
	int	max_bits;

	max_bits = 0;
	max = find_max(stack, size);
	while (max >> max_bits != 0)
		max_bits ++;
	return (max_bits);
}

void	push_back(int *stack_b, int *stack_a, int size)
{
	int	i;

	i = 0;
	while (stack_a[i] == 0 && i < size)
		i++;
	while (i > 0)
	{
		ft_pa(&stack_a, &stack_b, size, i - 1);
		i--;
	}
}

int	*ft_radix(int *stack_a, int *stack_b, int size)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	while (i < find_max_bits(stack_a, size))
	{
		j = 0;
		count = 0;
		while (j < size && count < size)
		{
			if (((stack_a[j] >> i) & 1) == 1)
				ft_ra(stack_a, size, j--);
			else
				ft_pb(&stack_a, &stack_b, size, j);
			j++;
			count++;
		}
		i++;
		push_back(stack_b, stack_a, size);
		if ((!check_order(stack_a, size)))
			return (stack_a);
	}
	return (stack_a);
}
