/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbriand <tbriand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 10:50:15 by tbriand           #+#    #+#             */
/*   Updated: 2025/01/22 15:05:45 by tbriand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_check(char c, va_list args)
{
	if (c == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (c == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (c == 'p')
		return (ft_pointerhex(va_arg(args, unsigned long long)));
	if (c == 'i' || c == 'd')
		return (ft_put_signed(va_arg(args, long)));
	if (c == 'u')
		return (ft_put_unsigned(va_arg(args, unsigned long)));
	if (c == 'x')
		return (ft_puthex(va_arg(args, unsigned int), 0));
	if (c == 'X')
		return (ft_puthex(va_arg(args, unsigned int), 1));
	if (c == '%')
		return (ft_putchar('%'));
	else
		return (ft_putchar('%') + ft_putchar(c));
	return (0);
}

/**
 * @brief Literally a printf, nothing more to add.
 */
int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		res;
	int		i;

	res = 0;
	i = 0;
	if (!str)
		return (-1);
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1] == '\0')
			return (-1);
		if (str[i] == '%' && str[i + 1])
		{
			res += ft_check(str[i + 1], args);
			i++;
		}
		else
			res += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (res);
}
