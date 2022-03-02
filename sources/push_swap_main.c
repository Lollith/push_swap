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
#include "push_swap.h"

size_t	ft_strlen(const char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
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
		return (0);
	while (i < ac)
	{
		j = 0;
		if (av[i][j] == '-' || av[i][j] == '+')
			j++;
		while (av[i][j])
		{
			if (!ft_isdigit(av[i][j]))
			{
				ft_printf("Error\n");
				return (0);
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
				ft_printf("error\n");
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
			{
				ft_printf("error\n");
				return (0);
			}
		}
		else if (ft_strlen(av[i]) > ft_strlen(max))
		{
			ft_printf("error\n");
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
	if ((ft_parsing(argc, argv) == 0) || check_double(argv) == 0 || check_max(argv) == 0)
		return (0);
	while (argv[i] && i < argc)
	{
		input[i - 1] = ft_atoi(argv[i]);
		i++;
	}
	if ((!check_order(input, argc - 1)))
		return (0);
	else
		ft_indexing(input, stack_a, argc - 1);
	if (argc == 3)
		ft_printf("sa\n");
	if (argc == 4)
	{
		ft_memcpy(save, stack_a, sizeof(int) * 3);
		ft_3_sort(stack_a, save);
	}
	if ((argc == 5) || (argc == 6))
		ft_5_sort(stack_a, stack_b, argc - 1);
	if (argc >= 7)
		ft_radix(stack_a, stack_b, argc - 1);
}
