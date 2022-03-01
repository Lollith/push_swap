/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 10:53:17 by agouet            #+#    #+#             */
/*   Updated: 2022/01/12 10:13:18 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_putstr(char const *s);
int	ft_putchar(int c);
int	ft_putnbr(int n);
int	ft_putnbr_hx(unsigned long int number, const char Min_Maj);
int	ft_putnbr_unsigned(unsigned int number);
int	ft_isupper(int c);
int	ft_islower(int c);

#endif
