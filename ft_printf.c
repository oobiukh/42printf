/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oobiukh <oobiukh@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 19:45:42 by oobiukh           #+#    #+#             */
/*   Updated: 2025/01/29 19:46:51 by oobiukh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	formatter(va_list arg, const char *format)
{
	int	count;

	count = 0;
	if (*format == 'c')
		count += ft_putchar(va_arg(arg, int));
	if (*format == 's')
		count += ft_putstr(va_arg(arg, char *));
	if (*format == 'p')
		count += ft_putptr(va_arg(arg, void *), count);
	if (*format == 'd' || *format == 'i')
		count += ft_putnbr(va_arg(arg, int), count);
	if (*format == 'u')
		count += ft_putnbr__unsigned(va_arg(arg, unsigned int), count);
	if (*format == 'x')
		count += ft_putnbr__hex(va_arg(arg, unsigned int), 0, count);
	if (*format == 'X')
		count += ft_putnbr__hex(va_arg(arg, unsigned int), 1, count);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	va_start(args, format);
	count = 0;
	while (*format != '\0')
	{
		if (*format == '%' && *(format + 1) != '%')
		{
			format++;
			count += formatter(args, format++);
		}
		else
		{
			count += ft_putchar(*format);
			if (*format == '%' && *(format + 1) == '%')
				count += 1;
			format++;
		}
	}
	va_end(args);
	return (count);
}

// #include <stdio.h>
// int	main() {
// 	char caracter = 'Y';
// 	char cadena[] = "new stringz";
// 	void *puntero = (void *)4560;
// 	int entero = 34;
// 	int decimal = -9600;
// 	unsigned int sin_signo = 1456;
// 	int hexadecimal = 254;
// 	printf("ft: %d\n", ft_printf("%c", caracter));
// 	printf("f: %d\n", printf("%c", caracter));
// 	// printf("ft: %d\n", ft_printf("Cadena: %s heello %s =====", cadena, "hola"));
// 	// printf("ft: %d\n", printf("Cadena: %s heello %s =====", cadena, "hola"));
// 	// printf("f: %d \n", ft_printf("%p =====", puntero));
// 	// printf("f: %d \n", printf("%p =====", puntero));
// 	// printf("ft: %d\n", ft_printf("Puntero: %p =====", puntero));
// 	// printf("f: %d\n", printf("Puntero: %p =====", puntero));
// 	// printf("ft: %d\n", ft_printf("%d =====", decimal));
// 	// printf("f: %d\n", printf("%d =====", decimal));
// 	// printf("ft: %d\n", ft_printf("Decimal: %d =====", decimal));
// 	// printf("f: %d\n", printf("Decimal: %d =====", decimal));
// 	// printf("ft: %d\n", ft_printf("Entero: %i =====", entero));
// 	// printf("f: %d\n", printf("Entero: %i =====", entero));
// 	// printf("ft: %d\n", ft_printf("Sin signo: %u =====", sin_signo));
// 	// printf("f: %d\n", printf("Sin signo: %u =====", sin_signo));
// 	// printf("ft: %d \n", 
// 	// 	ft_printf("Hexadecimal (minúsculas): %x =====", hexadecimal));
// 	// printf("f: %d\n", printf("Hexadecimal (minúsculas): %x =====", hexadecimal));
// 	// printf("ft: %d\n", 
// 	// 	ft_printf("Hexadecimal (mayúsculas): %X =====", hexadecimal));
// 	// printf("f: %d\n", printf("Hexadecimal (mayúsculas): %X =====", hexadecimal));
// 	// printf("ft: %d\n", ft_printf("Símbolo del porcentaje: %% ====="));
// 	// printf("f: %d\n",     printf("Símbolo del porcentaje: %% ====="));
// 	return 0;
// }