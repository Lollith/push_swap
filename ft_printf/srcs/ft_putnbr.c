/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 10:50:45 by agouet            #+#    #+#             */
/*   Updated: 2022/01/14 10:48:00 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	unsigned int	number;
	int				len;

	len = 1;
	if (n < 0)
	{
		len += ft_putchar('-');
		number = (-n);
	}
	else
		number = n;
	if (number > 9)
	{
		len += ft_putnbr(number / 10);
		ft_putnbr(number % 10);
	}
	else
		ft_putchar(number + '0');
	return (len);
}	
