/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbriand <tbriand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:03:42 by tbriand           #+#    #+#             */
/*   Updated: 2025/01/24 11:59:47 by tbriand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_put_signed(long n)
{
	char	*str;
	int		res;

	str = ft_itoa(n);
	res = ft_putstr(str);
	free(str);
	return (res);
}

int	ft_put_unsigned(unsigned int n)
{
	char	*str;
	int		res;

	str = ft_itoa_unsigned((unsigned)n);
	res = ft_putstr(str);
	free(str);
	return (res);
}
