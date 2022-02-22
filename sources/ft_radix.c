/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_radix.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 13:42:15 by agouet            #+#    #+#             */
/*   Updated: 2022/02/21 16:35:29 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
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
*/
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



//envoi tuout le b en a apres tri

void  push_ba (int *stack_b, int *stack_a, int size)
{
	int i;
	i = 0;

	while (stack_a[i] == 0)
		i++;
	//printf("i:%d", i);
	while (i < size)
	{
		ft_push(&stack_b, &stack_a, size, i );
		i++;
     	//printf("stacka %d\n", stack_a[i]);
	}
}

int	*ft_radix(int *stack_a, int *stack_b, int size)
{
   	int i;
	int count;
  	 i = 0;
	 count = 0;
    while (count < size)
    {
        if(ft_nbr_unit_bin(stack_a[i]) == 1)
        {
            stack_a = ft_r (stack_a, size, i );
            write (1, "ra\n", 3);
			i--;
			
		    // printf("stackaa %d\n", stack_a[i]);
     	//	printf("stackbb %d\n", stack_b[size -1]);
        }
        else
        {
             ft_push(&stack_a, &stack_b, size, i);

		  //   printf("stackaa %d\n", stack_a[i]);
     	//	printf("stackbb %d\n", stack_b[size -1]);
            write (1, "pb\n",3); // envoi top a en b
        }
		count ++;
        i++;
	}
		push_ba (stack_b, stack_a, size);	

	
     printf("stacka %d\n", stack_a[0]);
     printf("stacka %d\n", stack_a[1]);
     printf("stacka %d\n", stack_a[2]);
     printf("stacka %d\n", stack_a[3]);
    
    
     printf("stackb %d\n", stack_b[0]);
     printf("stackb %d\n", stack_b[1]);
     printf("stackb %d\n", stack_b[2]);
     printf("stackb %d\n", stack_b[3]);
    
    

    return (stack_a);
}

