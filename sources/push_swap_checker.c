/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_checker.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 14:21:13 by agouet            #+#    #+#             */
/*   Updated: 2022/03/03 14:34:49 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_print_error(void)
{	
	ft_printf("Error\n");
	return (0);
}

int	ft_check_digit( int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	while (i < ac)
	{
		j = 0;
		if (av[i][j] == '-' || av[i][j] == '+')
			j++;
		while (av[i][j])
		{
			if (!ft_isdigit(av[i][j]))
				ft_print_error();
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
				ft_print_error();
			j++;
		}
		i++;
	}
	return (1);
}

int	check_max(char **av)
{
	int		i;
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
				ft_print_error();
		}
		else if (ft_strlen(av[i]) > ft_strlen(max))
			ft_print_error();
		i++;
	}
	return (1);
}