/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oobiukh <oobiukh@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 19:44:24 by oobiukh           #+#    #+#             */
/*   Updated: 2025/01/29 20:14:23 by oobiukh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s);
int	ft_putchar(char c);

int	ft_putnbr__unsigned(int n, int count)
{
	if (n >= 10)
		count += ft_putnbr__unsigned(n / 10, count);
	return (count += ft_putchar((n % 10) + '0'));
}

int	ft_putnbr__hex(unsigned int n, int uppercase, int count)
{
	char	hex_digit;

	if (n >= 16)
		count = ft_putnbr__hex((n / 16), uppercase, count);
	if ((n % 16) < 10)
		hex_digit = (n % 16) + '0';
	else
	{
		hex_digit = (n % 16) - 10 + 'a';
		if (uppercase)
			hex_digit -= 32;
	}
	return (count += ft_putchar(hex_digit));
}

int	ft_putptr(void *ptr, int count)
{
	unsigned long	addr;

	if (ptr == NULL)
		return (ft_putstr("(nil)"));

	addr = (unsigned long)ptr;
	count += ft_putstr("0x");
	return (ft_putnbr__hex(addr, 0, count));
}
