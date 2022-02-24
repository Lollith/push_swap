/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:00:21 by agouet            #+#    #+#             */
/*   Updated: 2022/02/24 12:42:38 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>  //write
#include <stdio.h> //printf

int	*ft_s(int *stack, int size, int i);
int	*ft_r(int *stack, int size, int i);
int	*ft_rr(int *stack, int size, int i);
void ft_push(int **stack1, int **stack2, int size, int count);
void push_ba (int *stack_b, int *stack_a, int size);
void	ft_pa(int **stack1, int **stack2, int size, int count);

//void	ft_sort_3(int *stack, int size);

int	ft_atoi(const char *nptr);
void	*ft_memcpy(void *dest, const void *src, size_t n);

int	check_order(int *tab, int size);

void bubble_sort( int *tab, int size);
int	find_max(int *stack, int size);
int	ft_nbr_unit_bin(int nbr);
int    *ft_radix(int *stack_a, int *stack_b, int size); 
int find_max_bits(int *stack_a, int size);

#endif
