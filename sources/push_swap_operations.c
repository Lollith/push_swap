/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_operations.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 11:17:48 by agouet            #+#    #+#             */
/*   Updated: 2022/03/03 13:00:41 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*ft_s(int *stack, int size, int i)
{
	int		tmp;

	(void) size;
	(void) i;
	tmp = stack[0];
	stack[0] = stack[1];
	stack[1] = tmp;
	return (stack);
}

int	*ft_r(int *stack, int size, int i)
{	
	int	tmp;

	tmp = stack[i];
	while (i < size - 1)
	{
		stack [i] = stack[i + 1];
		i++;
	}
	stack[i] = tmp;
	return (stack);
}

int	*ft_rr(int *stack, int size, int i)
{
	int	tmp;

	tmp = stack[size - 1];
	while (i < size - 1)
	{
		stack[size - 1 - i] = stack[size - 2 - i];
		i++;
	}
	stack[0] = tmp;
	return (stack);
}
