
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>  //write



char	*ft_s(char *stack, int size);
char	*ft_r(char *stack, int size);
char	*ft_rr(char *stack, int size);

void	ft_sort_3(int *stack, int size);

//int	ft_atoi(const char *nptr);
void	*ft_memcpy(void *dest, const void *src, size_t n);

int	check_order(char *tab, int size);


#endif
