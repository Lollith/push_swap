/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 11:51:03 by agouet            #+#    #+#             */
/*   Updated: 2022/02/07 15:58:08 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h> // printf

// a suprimer avec libft
//void    ft_putchar(int a)
//{
 //   write (1,&a, 1);
//}
// a supprimer
//void ft_putstr(char *s)
//{

 //   while (*s)
  //  {
    //    ft_putchar(*s);
    ///    s++;
//    }
//}
//
//
//check ordre
int	check_order(int *tab, int size)
{
	int	i;
	
	i = 0;
	while (i < size)
	{
		if (tab[i + 1] < tab [i])
		{
			printf("besoin de trier");
			return (1);
		}
        i++;
	}
	return (0); // pas besoin de trier
}

	//tableau de fonction plutot que foret de if?
	
//void	ft_sort_3(int *stack, int size)
//{
 //   int i;

  //  i = 0;
//    int *(*tab_ft[3])(int *, int);

  //  tab_ft[0] = &ft_s;
//	tab_ft[1] = &ft_r;
//	tab_ft[2] = &ft_rr;
	    
  //  while ((check_order(stack, size))) //si 1 besoin de trier
//    {
  //      stack = ((*tab_ft[i])(stack)(size));
 //       ft_putchar(stack[0]+'0'); // a remplacer par double tableau 
    //     i++;
//	 }
        
	
//	printf("%ls",stack); // a remplacer par double tableau /
//}



