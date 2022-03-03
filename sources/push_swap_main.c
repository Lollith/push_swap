/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 11:58:31 by agouet            #+#    #+#             */
/*   Updated: 2022/03/03 14:24:04 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	parsing(int ac, char **av)
{
	if (ac <= 2)
		return (0);
	if ((ft_check_digit(ac, av) == 0))
		return (0);
	if (check_double(av) == 0)
		return (0);
	if (check_max(av) == 0)
		return (0);
	return (1);
}

int	*assignment(int ac, char **av)
{
	int	i;
	int	*input;
	int	*stack_a;

	input = ft_calloc (ac - 1, sizeof(int));
	stack_a = ft_calloc (ac - 1, sizeof(int));
	i = 1;
	while (av[i] && i < ac)
	{
		input[i - 1] = ft_atoi(av[i]);
		i++;
	}
	if ((!check_order(input, ac - 1)))
		return (0);
	else
		ft_indexing(input, stack_a, ac - 1);
	free(input);
	return (stack_a);
}

int	main(int argc, char *argv[])
{
	int	*stack_a;
	int	stack_b[argc - 1];
	int	save[3];	

	if (parsing(argc, argv) == 0)
		return (0);
	stack_a = assignment(argc, argv);
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
	free(stack_a);
}
