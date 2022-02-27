#include "push_swap.h"

int	*ft_tab_ft(int k, int *stack_a)
{
	int	*(*tab_ft[3])(int *, int, int);

	tab_ft[0] = &ft_s;
	tab_ft[1] = &ft_r;
	tab_ft[2] = &ft_rr;
	(*tab_ft[k])(stack_a, 3, 0);
	return (stack_a);
}

void	ft_3_sort(int *stack_a, int *save)
{
	int	e;
	int	i;
	int	j;

	i = 0;
	j = 1;
	while ((check_order(stack_a, 3)))
	{
		e = 0;
		ft_memcpy(stack_a, save, sizeof(int) * 3);
		ft_tab_ft(i, stack_a);
		if (check_order(stack_a, 3))
		{
			e++;
			ft_tab_ft(j, stack_a);
			if (j == 1)
				i--;
			else
				j--;
			j++;
		}
		i++;
	}
		ft_3_sort_print(i, j, e);
}

void	ft_3_sort_print(int i, int j, int e)
{
	char	*tab_name[3];

	tab_name[0] = "sa";
	tab_name[1] = "ra";
	tab_name[2] = "rra";
	if (e == 0)
	{
		if (i == 0)
			i++;
		printf("%s\n", tab_name[i - 1]); // libft => ft_printf
	}
	else if (e == 1 && i == 0)
		printf("%s\n%s\n", tab_name[i], tab_name[j - 1]); // libft => ft_printf
	else if (e == 1 && i == 1)
		printf("%s\n%s\n", tab_name[i - 1], tab_name[j]); // libft => ft_printf
}

void	ft_5_sort(int *stack_a, int *stack_b, int size)
{
	int save_3[3];;
	int save [3];
	while (stack_a[0] != 0)
	{
		ft_r(stack_a, size, 0);
		write(1, "ra\n", 3);
	}
	ft_push(&stack_a, &stack_b, size, 0);
	write (1, "pb\n", 3);
	while (stack_a[0] != 1)
	{
		ft_r(stack_a, size, 0);
		write(1, "ra\n", 3);
	}
	ft_push(&stack_a, &stack_b, size, 0);
	write (1, "pb\n", 3);
	save_3[0] = stack_a[2];
	save_3[1] = stack_a[3];
	save_3[2] = stack_a[4];
	write (1, &save_3[0],1);
	ft_3_sort(save_3,save);
	write(1, "pa\n", 3);
	write (1, "pa\n", 3);
}
