/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 11:19:22 by agouet            #+#    #+#             */
/*   Updated: 2022/01/14 10:48:34 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_unsigned(unsigned int number)
{
	int	len;

	len = 1;
	if (number > 9)
	{
		len += ft_putnbr_unsigned(number / 10);
		ft_putnbr_unsigned(number % 10);
	}
	else
		ft_putchar(number + '0');
	return (len);
}
