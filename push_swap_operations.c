/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_operations.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 11:17:48 by agouet            #+#    #+#             */
/*   Updated: 2022/02/15 13:59:45 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*ft_s(int *stack, int size)
{
	int	tmp;
    (void) size;

	tmp = stack[0];
	stack[0] = stack[1]; 
	stack[1] = tmp;
	//write(1, "sa", 2);
	return (stack);
}

int	*ft_r(int *stack,int size)
{	
	int	tmp;
	int	i;
	
	i = 0;
	tmp = stack[i];
	while (i < size - 1)
    {
        stack [i] = stack[i + 1];
        i++;
    }
	stack[i] = tmp;
//	write(1, "ra", 2);
	return (stack);
}

int 	*ft_rr(int *stack, int size)
{
	int	tmp;
	int	i;

	i = 0;
	tmp = stack[size - 1];
	while (i < size - 1)
    {
        stack[size - 1 - i] = stack[size -2 - i];
        i++;
    }
	stack[0] = tmp;
//	write(1, "rra", 3);
	return (stack);
}
//push stack1 ds debut stack 2
int	ft_push(int *stack1, int *stack2, int size)
{
	static int	compt;
	
	stack1[compt] = stack2[size - 1 - compt];
	return (0);	
}


