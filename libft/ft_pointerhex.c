/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointerhex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbriand <tbriand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 10:59:25 by tbriand           #+#    #+#             */
/*   Updated: 2025/01/20 12:03:35 by tbriand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_phex(unsigned long long n)
{
	char	*base;
	char	*str;
	int		i;

	i = 0;
	base = "0123456789abcdef";
	str = malloc(ft_strlennum(n, 16) + 1);
	if (!str)
		return (NULL);
	if (n == 0)
		str[i++] = '0';
	while (n != 0)
	{
		str[i] = base[n % 16];
		n = n / 16;
		i++;
	}
	str[i] = '\0';
	str = ft_reverse(str);
	return (str);
}

int	ft_pointerhex(unsigned long long ptr)
{
	char	*str;
	int		res;

	if (!ptr)
		return (ft_putstr("(nil)"));
	str = ft_phex((unsigned long)ptr);
	if (!str)
		return (-1);
	res = ft_putstr("0x");
	res += ft_putstr(str);
	free(str);
	return (res);
}
