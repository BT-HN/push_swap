/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbriand <tbriand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 10:57:30 by tbriand           #+#    #+#             */
/*   Updated: 2025/02/25 16:42:32 by tbriand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

long	ft_atol(const char *str)
{
	int	i;
	int	signe;
	long	nb;

	i = 0;
	signe = 1;
	nb = 0;
	while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+')
		i++;
	if (str[i] == '-')
	{
		i++;
		signe = -1;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + str[i] - '0';
		i++;
	}
	return (nb * signe);
}
