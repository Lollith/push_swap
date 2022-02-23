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

//tri a bulle
void    bubble_sort(int *tab, int size)
{
    int i;
    int tmp;

    while(size > 0)
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

int find_max_bits(int *stack, int size)
{
    int max;
    int max_bits;

    max_bits = 0;
    max = find_max(stack, size);
    while (max >> max_bits!= 0)
        max_bits ++;
    return (max_bits);
}


//envoi tuout le b en a apres tri

void  push_ba (int *stack_b, int *stack_a, int size)
{
    int i;
    i = 0;

    while (stack_a[i] == 0 && i < size)
        i++;
    //printf("i:%d", i);
    while (i - 1  < size)
    {
        ft_push(&stack_b, &stack_a, size, i-1 );
        write(1, "pa\n", 3);
        i++;
        //printf("stacka %d\n", stack_a[i]);
    }
}

int	*ft_radix(int *stack_a, int *stack_b, int size)
{
    int i;
    int j;
    int max_bits;
    int count;
    max_bits = find_max_bits( stack_a, size);
    i = 0;
        while(i < max_bits)
        {   
            j = 0;
            count =  0;
            while (j < size && count < size)
            {
                if((( stack_a[j] >> i) & 1) == 1)
                {
                    stack_a = ft_r (stack_a, size, j );
                    write (1, "ra\n", 3);
                    j--;
                }
                else
                {
                    ft_push(&stack_a, &stack_b, size, j);
                    write (1, "pb\n",3); // envoi top a en b
                }
                j++;
                count++;
 /*       printf("stacka %d\n", stack_a[0]);
        printf("stacka %d\n", stack_a[1]);
        printf("stacka %d\n", stack_a[2]);
        printf("stacka %d\n", stack_a[3]);
        printf("stacka %d\n\n", stack_a[4]);

        printf("stackb %d\n", stack_b[0]);
        printf("stackb %d\n", stack_b[1]);
        printf("stackb %d\n", stack_b[2]);
        printf("stackb %d\n", stack_b[3]);
        printf("stackb %d\n\n", stack_b[4]);
  */
            }
            i++;
            push_ba (stack_b, stack_a, size);
            if((!check_order(stack_a, size))) 
                    return (stack_a);
    /*    printf("stacka %d\n", stack_a[0]);
        printf("stacka %d\n", stack_a[1]);
        printf("stacka %d\n", stack_a[2]);
        printf("stacka %d\n", stack_a[3]);
        printf("stacka %d\n\n", stack_a[4]);

        printf("stackb %d\n", stack_b[0]);
        printf("stackb %d\n", stack_b[1]);
        printf("stackb %d\n", stack_b[2]);
        printf("stackb %d\n", stack_b[3]);
        printf("stackb %d\n\n", stack_b[4]);
     */
        }

      /* printf("stacka %d\n", stack_a[0]);
        printf("stacka %d\n", stack_a[1]);
        printf("stacka %d\n", stack_a[2]);
        printf("stacka %d\n", stack_a[3]);

        printf("stacka %d\n", stack_a[4]);

        printf("stackb %d\n", stack_b[0]);
        printf("stackb %d\n", stack_b[1]);
        printf("stackb %d\n", stack_b[2]);
        printf("stackb %d\n", stack_b[3]);
        printf("stackb %d\n", stack_a[4]);
*/
        return (stack_a);
}
