/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_operations.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 11:17:48 by agouet            #+#    #+#             */
/*   Updated: 2022/02/24 13:49:55 by agouet           ###   ########.fr       */
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
}

//push pa
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
}
