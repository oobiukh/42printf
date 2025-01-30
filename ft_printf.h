/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oobiukh <oobiukh@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 19:45:32 by oobiukh           #+#    #+#             */
/*   Updated: 2025/01/28 19:45:34 by oobiukh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_putnbr(int n, int count);
int		ft_putnbr__unsigned(int n, int count);
int		ft_putnbr__hex(unsigned int n, int uppercase, int count);
int		ft_putptr(void *ptr, int count);
size_t	ft_strlen(const char *s);
int		ft_printf(const char *format, ...);
#endif 