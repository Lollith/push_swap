/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 11:51:03 by agouet            #+#    #+#             */
/*   Updated: 2022/02/04 17:10:54 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_operations(int *stack, char *operation)
{
	int tmp;

	if (operation == "sa")
	{	
		tmp = stack[0];
		stack[0] = stack[1]; 
		stack[1] = tmp;
	}

	//tableau de fonction plutot que foret de if?
