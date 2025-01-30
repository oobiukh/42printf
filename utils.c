/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oobiukh <oobiukh@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 19:44:33 by oobiukh           #+#    #+#             */
/*   Updated: 2025/01/30 19:22:18 by oobiukh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++ ;
	return (i);
}

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *s)
{
	if (!s)
		return (ft_putstr("(null)"));

	return (write (1, s, ft_strlen(s)));
}

int	ft_putnbr(int n, int count)
{
	if (n == -2147483648)
		return (ft_putstr("-2147483648"));

	if (n < 0)
	{
		count += ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
		count = ft_putnbr(n / 10, count);
	return (count += ft_putchar((n % 10) + '0'));
}
