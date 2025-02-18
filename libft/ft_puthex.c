/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbriand <tbriand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 15:35:56 by tbriand           #+#    #+#             */
/*   Updated: 2025/01/20 12:00:54 by tbriand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_puthex(unsigned int n, int is_upper)
{
	char	*base;
	char	*str;
	int		i;
	int		res;

	i = 0;
	if (is_upper == 0)
		base = "0123456789abcdef";
	if (is_upper == 1)
		base = "0123456789ABCDEF";
	if (n == 0)
		return (write(1, "0", 1));
	str = ft_calloc(ft_strlennum(n, 16) + 1, 1);
	if (!str)
		return (0);
	while (n != 0)
	{
		str[i] = base[n % 16];
		n = n / 16;
		i++;
	}
	str = ft_reverse(str);
	res = ft_putstr(str);
	free(str);
	return (res);
}
