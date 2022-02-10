/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 11:58:31 by agouet            #+#    #+#             */
/*   Updated: 2022/02/10 15:13:35 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>  //printf
#include "push_swap.h"
void ft_putchar(int a )
{
	write(1,&a ,1);
}



// libft a ajouter/ atoi a supprimer
int	ft_atoi(const char *nptr)
{
	int	i;
	int	neg;
	int	result;

	i = 0;
	neg = 1;
	result = 0;
	while (((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == ' ') && nptr[i])
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			neg = (-neg);
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	result = (result * neg);
	return (result);
}

int	main (int argc, char **argv)
{
	int	stack_a[argc - 1];
	int 	stack_input[argc - 1];
	//	int	stack_b[argc - 1];
	int	i;
	int	j;

	i = 1;

//	int stack_a[3]; //
//	int stack_input[]= {3, 2, 1}; //pour test
//	ft_memcpy (stack_a, stack_input, sizeof(int) * 3);//test


	if (argc < 2 )
		return (0);

	//recup arg ds tableau a
	while(argv[i] && i < argc)
	{
		stack_a[i - 1] = ft_atoi(argv[i]);
		stack_input[i -1] =ft_atoi(argv[i]);
		i++;
	}
	/// si 1 chiffre ou aucun chiffre?

	//si 2 chiffres
	if (argc == 3)		
	{
		if (check_order(stack_a, argc - 1))   
			write(1, "sa\n", 3);
		else 
			return (0);	
	}   

	//  si 3 cHiffres
	i = 0;
	j = 0;
	if (argc == 4)
	{
		int	*(*tab_ft[3])(int *, int);
		tab_ft[0] = &ft_s;
		tab_ft[1] = &ft_r;
		tab_ft[2] = &ft_rr;

		char	*tab_name[3];
		tab_name [0] = "sa\n";
		tab_name [1] = "ra\n";
		tab_name [2] = "rra\n";
		
		while ((check_order(stack_a, 3)) && i < 3 )
		{
			ft_memcpy (stack_a, stack_input, sizeof(int) * 3);
			((*tab_ft[i])(stack_a, 3));
			
			ft_putchar(stack_a[0] + '0');
			ft_putchar(stack_a[1] + '0');
			ft_putchar(stack_a[2] + '0');
			j ++;
			if(check_order(stack_a, 3) && j < 3)
			{
					
				((*tab_ft[j])(stack_a, 3));
				
				ft_putchar(stack_a[0] + '0');
				ft_putchar(stack_a[1] + '0');
				ft_putchar(stack_a[2] + '0');
				
				i--;
			}
			i++;
		}
		printf("%s", tab_name[i]); // libft => ft_printf
//		if (j != i)
//		{	
//			i = j;
			printf("%s", tab_name[j]); // libft => ft_printf
//		}
		return 0;
		//ft_rr(stack_a, 3);
		// ft_sort_3(stack_a, 3);
	}
	else
		return (1);


	//si 4 ou 5 chiffres


	//affiche stack [a]//a supprimer
	//	i = 0;
	//	while(i < argc - 1)
	//	{
	//		printf("%d ", stack_a[i]);
	//		i++;
	//	}	return (0);
	return (0);
}
