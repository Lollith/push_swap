/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 11:58:31 by agouet            #+#    #+#             */
/*   Updated: 2022/02/04 16:59:50 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>  //printf
#include <unistd.h> //write

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


//check ordre
int	check_order(int *tab, int size)
{
	int	i;
	
	i = 0;
	while (i <= size)
	{
		if (tab[i + 1] < tab [i])
		{
			printf("besoin de trier");
			return (1);
		}
	}
	i++;
	return (0);
}




int	main (int argc, char **argv)
{
	int	stack_a[argc - 1];
//	int	stack_b[argc - 1];
	int	i;

	i = 1;

	if (argc < 2 )
		return (0);

//recup arg ds tableau a
	while(argv[i] && i < argc)
	{
		stack_a[i - 1] = ft_atoi(argv[i]);
		i++;
	}
	//si 2 chiffres
	if (argc - 1  < 3)		
		if (check_order(stack_a, argc - 1))
			write(1, "sa", 2);
		return (0);	
	//si 3 cHiffres

	else if (argc - 1 == 3)

	//si 4 ou 5 chiffres
	
	
	//affiche stack [a]//a supprimer
	i = 0;
	while(i < argc - 1)
	{
		printf("%d ", stack_a[i]);
		i++;
	}
}
