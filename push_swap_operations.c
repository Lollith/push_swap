#include "push_swap.h"

int	*ft_s(int *stack, int size)
{
	int	tmp;
    (void) size;

	tmp = stack[0];
	stack[0] = stack[1]; 
	stack[1] = tmp;
	return (stack);
}

int	*ft_r(int *stack,int size)
{	
	int	tmp;
	int	i;
	
	i = 0;
	tmp = stack[i];
	while (i < size - 1)
    {
        stack [i] = stack[i + 1];
        i++;
    }
	stack[i] = tmp;
	return (stack);
}

int 	*ft_rr(int *stack, int size)
{
	int	tmp;
	int	i;

	i = 0;
	tmp = stack[size - 1];
	while (i < size - 1)
    {
        stack[size - 1 - i] = stack[size -2 - i];
        i++;
    }
	stack[0] = tmp;
	return (stack);
}

