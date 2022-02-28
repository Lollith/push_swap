/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 11:58:31 by agouet            #+#    #+#             */
/*   Updated: 2022/02/28 13:08:36 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>  //printf
#include "push_swap.h"

void	ft_putchar(int a )
{
	write (1, &a, 1);
}

size_t	ft_strlen(const char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
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
int ft_isdigit(char c) // libft
{
	return (c >= '0' && c <= '9');
}


int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] == s2[i]) && s1[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int	ft_parsing( int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	if (ac <= 2)
		return(0);
	while ( i < ac)
	{
		j = 0;
		if (av[i][j] == '-' || av[i][j] == '+')
			j++;
		while (av[i][j])
		{

				if (!ft_isdigit(av[i][j]))
				{
					printf("Error\n"); //ft_printf
					return 0;
				}
				j++;
		}
		i++;
	}
	return (1);
}

int	check_double(char **av)
{
	int		i;
	int		j;

	i = 0;
	while (av[i])
	{
		j = i + 1;
		while (av[j])
		{
			if (!ft_strcmp(av[i], av[j]))
			{
				printf("error\n"); // ft_printf
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	check_max(char **av)
{
	int	i;
	char	*max;

	
	i = 1;

	while (av[i])
	{
		if (av[i][0] == '-')
			max = "-2147483648";
		else
			max = "2147483647";
		if (ft_strlen(av[i]) == ft_strlen(max))
		{
			if (ft_strcmp(av[i], max) > 0)
			{
				printf("error\n"); // ft_printf
				return (0);
			}
		}
		else if (ft_strlen(av[i]) > ft_strlen(max))
		{
			printf("error\n"); // ft_printf
			return (0);
		}
		i++;
	}
	return (1);
}

int	main(int argc, char *argv[])
{
	int	stack_a[argc - 1];
	int	stack_b[argc - 1];
	int	input[argc - 1];
	int	i;
	int	save[3];
	
	i = 1;
	if ((ft_parsing(argc, argv) == 0) || check_double( argv) == 0 || check_max(argv)==0)
		return (0);
	while(argv[i] && i < argc)// recup arg ds input
	{
		input[i - 1] = ft_atoi(argv[i]);
		i++;
	}

	if ((!check_order(input, argc - 1)))
		return (0);
	else
		ft_indexing(input, stack_a, argc - 1);
	if (argc == 3) // 2 chiffres		
		printf("sa\n"); // change
	if (argc == 4) // 3 chiffres	
	{
		ft_memcpy(save, stack_a, sizeof(int) * 3);
		ft_3_sort(stack_a, save);
	}
	if ((argc == 5)||(argc == 6)) // 4 et 5
		ft_5_sort(stack_a, stack_b, argc -1);	
	if (argc >= 7)//6 chiffres
		ft_radix(stack_a, stack_b, argc - 1);
}
