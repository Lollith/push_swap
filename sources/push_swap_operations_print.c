/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_operations_print.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 11:51:49 by agouet            #+#    #+#             */
/*   Updated: 2022/03/03 13:01:28 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(int *stack, int size, int i)
{	
	int	tmp;

	tmp = stack[i];
	while (i < size - 1)
	{
		stack [i] = stack[i + 1];
		i++;
	}
	stack[i] = tmp;
	ft_printf("ra\n");
}

void	ft_pa(int **pt_stack1, int **pt_stack2, int size, int count)
{
	int	*stack1;
	int	*stack2;

	stack1 = *pt_stack1;
	stack2 = *pt_stack2;
	stack1[count] = stack2[size - 1 - count];
	stack2[size - 1 - count] = 0;
	*pt_stack1 = stack1;
	*pt_stack2 = stack2;
	ft_printf("pa\n");
}

void	ft_pb(int **pt_stack1, int **pt_stack2, int size, int count)
{
	int	*stack1;
	int	*stack2;

	stack1 = *pt_stack1;
	stack2 = *pt_stack2;
	stack2[size - 1 - count] = stack1[count];
	stack1[count] = 0;
	*pt_stack1 = stack1;
	*pt_stack2 = stack2;
	ft_printf("pb\n");
}
