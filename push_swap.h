/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:00:21 by agouet            #+#    #+#             */
/*   Updated: 2022/02/15 16:51:32 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>  //write
#include <stdio.h> //printf

int	*ft_s(int *stack, int size);
int	*ft_r(int *stack, int size);
int	*ft_rr(int *stack, int size);
int	ft_push(int *stack1, int *stack2, int size);

//void	ft_sort_3(int *stack, int size);

int	ft_atoi(const char *nptr);
void	*ft_memcpy(void *dest, const void *src, size_t n);

int	check_order(int *tab, int size);


int	find_max(int *stack, int size);
int	find_divider(int max);
int	ft_nbr_unit_bin(int nbr);

#endif
