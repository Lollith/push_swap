
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>  //write

int	*ft_s(int *stack, int size);
int	*ft_r(int *stack, int size);
int	*ft_rr(int *stack, int size);

void	ft_sort_3(int *stack, int size);

int	ft_atoi(const char *nptr);
int	check_order(int *tab, int size);

#endif
