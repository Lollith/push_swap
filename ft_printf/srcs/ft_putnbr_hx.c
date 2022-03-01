/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 10:50:45 by agouet            #+#    #+#             */
/*   Updated: 2022/01/14 10:48:16 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putnbr_hx(unsigned long int number, const char Min_Maj)
{
	int	len;

	len = 1;
	if (number >= 16)
	{
		len += ft_putnbr_hx(number / 16, Min_Maj);
		ft_putnbr_hx((number % 16), Min_Maj);
	}
	else
	{
		if (number <= 9)
			ft_putchar(number + '0');
		else
		{
			if (ft_islower(Min_Maj))
				ft_putchar(number - 10 + 'a');
			else if (ft_isupper(Min_Maj))
				ft_putchar(number - 10 + 'A');
		}
	}
	return (len);
}
