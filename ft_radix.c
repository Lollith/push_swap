/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_radix.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 13:42:15 by agouet            #+#    #+#             */
/*   Updated: 2022/02/15 16:59:59 by agouet           ###   ########.fr       */
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
    //printf("%d", max);
    return (max);
}

int	find_divider(int max)
{
    int	count_unit;

    count_unit = 1;

    while (max > 9)
    {
        max = max / 10;
        count_unit ++;
    }
    //	printf("%d", count_unit);
    return(count_unit);
}

int	ft_nbr_unit_bin(int nbr)
{
    int	 nbr_u_b;	
    nbr_u_b = 0;
    if (nbr > 9)
    {
        nbr_u_b = ft_nbr_unit_bin( nbr % 10);
    }
    //printf("unit:%d\n", nbr_u_b);

    else    
    {
        nbr_u_b = nbr;
        nbr_u_b = nbr_u_b % 2;
    }
    printf("bin:%d\n", nbr_u_b);

    return (nbr_u_b);
}

int	*ft_radix(int *stack_a, int *stack_b, int size)
{
    int i;

    i = 0;
    while (stack_a[i])
    {
        if(ft_nbr_unit_bin(stack_a[i] == 1))
            ft_r (stack_a, size);
        else
            ft_push(stack_a, stack_b, size);
        i++;
    }

    i = 0;
    while (stack_a[i])
    {
        printf("stacka %d", stack_a[i]);
        i++;
    }
    return (stack_a);
}

