/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_operations.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 11:17:48 by agouet            #+#    #+#             */
/*   Updated: 2022/02/21 16:35:27 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*ft_s(int *stack, int size, int i)
{
	int	tmp;
    (void) size;
	(void) i;

	tmp = stack[0];
	stack[0] = stack[1]; 
	stack[1] = tmp;
	//write(1, "sa", 2);
	return (stack);
}

int	*ft_r(int *stack,int size , int i)
{	
	int	tmp;

	tmp = stack[i];
	while (i < size -1 )
    {
        stack [i] = stack[i + 1];
        i++;
    }
	stack[i] = tmp;
//	write(1, "ra", 2);
	return (stack);
}

int 	*ft_rr(int *stack, int size, int i)
{
	int	tmp;

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
void	ft_push(int **pt_stack1, int **pt_stack2, int size, int count)
{
	
	int *stack1;
	int *stack2;
	
	
	stack1 = *pt_stack1;
	stack2 = *pt_stack2;
//	printf("satck1:%d\n", stack1[count]);
    stack2[size - 1 - count] = stack1[count];
    stack1[count] = 0;
//	printf("satck1:%d\n", stack1[count]);
//	printf("satck2:%d\n", stack2[size - 1 - count]);
	*pt_stack1 = stack1;
	*pt_stack2 = stack2;
}


