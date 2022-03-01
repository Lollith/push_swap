/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 10:53:09 by agouet            #+#    #+#             */
/*   Updated: 2022/01/05 11:05:50 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format_s(va_list input)
{
	char	*va_next;
	int		len;

	va_next = va_arg(input, char *);
	if (va_next == NULL)
		len = ft_putstr("(null)");
	else
		len = ft_putstr(va_next);
	return (len);
}

int	ft_format( va_list input, const char *format1)
{
	int		len;

	len = 0;
	if (*(format1) == 'c')
		len = ft_putchar(va_arg(input, int));
	if (*(format1) == 's')
		len = ft_format_s (input);
	if (*(format1) == 'i' || *(format1) == 'd')
		len = ft_putnbr(va_arg(input, int));
	if (*(format1) == 'p')
	{
		len += ft_putstr("0x");
		len += ft_putnbr_hx(va_arg(input, unsigned long int), *(format1));
	}
	if ((*(format1) == 'x') || (*(format1) == 'X'))
		len = ft_putnbr_hx(va_arg(input, unsigned int), *(format1));
	if (*(format1) == 'u')
		len = ft_putnbr_unsigned(va_arg(input, unsigned int));
	if (*(format1) == '%')
		len = ft_putchar(*(format1));
	return (len);
}

int	ft_printf(const char *format, ...)
{
	int		len;
	va_list	input;

	len = 0;
	va_start(input, format);
	while (*format)
	{
		if (*format == '%')
		{
			len += ft_format(input, (format + 1));
			format++;
		}
		else
			len += ft_putchar(*format);
		format++;
	}
	va_end(input);
	return (len);
}
