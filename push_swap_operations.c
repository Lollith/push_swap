#include "push_swap.h"
int	*ft_s(int *stack, char *operation)
{
	int	tmp;

	tmp = stack[0];
	stack[0] = stack[1]; 
	stack[1] = tmp;
	return (stack);
}

int	*ft_r(int stack[n], char *operation)
{	
	int	tmp;
	int	i;
	
	i = 0;
	tmp = stack[i];
	while (i < n)
		stack [i] = stack[i + 1];
	stack[i] = tmp;
	return (stack);
}

int 	*ft_rr(int stack[n], char *operation)
{
	int	tmp;
	int	i;

	i = 0;
	tmp = stack[n];
	while (i < n)
		stack[n] = stack[n-i];
	stack[0] = tmp;
	return (stack);
}

