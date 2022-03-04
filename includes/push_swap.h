/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 11:59:59 by agouet            #+#    #+#             */
/*   Updated: 2022/03/04 12:52:49 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "ft_printf.h" 
# include "libft.h"

int		ft_check_digit( int ac, char **av);
int		check_double(char **av);
int		check_double(char **av);
int		check_max(char **av);
int		parsing(int ac, char **av);
int		*assignment(int ac, char **av);
int		*ft_s(int *stack, int size, int i);
int		*ft_r(int *stack, int size, int i);
int		*ft_rr(int *stack, int size, int i);
void	ft_pb(int **stack1, int **stack2, int size, int count);
void	push_back(int *stack_b, int *stack_a, int size);
void	ft_pa(int **stack1, int **stack2, int size, int count);
int		ft_atoi(const char *nptr);
void	*ft_memcpy(void *dest, const void *src, size_t n);
int		ft_strcmp(const char *s1, const char *s2);
int		check_order(int *tab, int size);
void	bubble_sort(int *tab, int size);
int		*ft_indexing(int *input, int *stack_a, int size);
int		*ft_tab_ft(int k, int *stack_a);
void	ft_3_sort(int *stack_a, int *save);
void	ft_3_sort_print(int i, int j, int e);
void	ft_5_sort(int *stack_a, int *stack_b, int size);
int		find_max(int *stack, int size);
int		ft_nbr_unit_bin(int nbr);
void	ft_ra(int *stack, int size, int i);
int		*ft_radix(int *stack_a, int *stack_b, int size);
int		find_max_bits(int *stack_a, int size);

#endif
