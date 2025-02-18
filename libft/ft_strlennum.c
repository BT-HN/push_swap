/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlennum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbriand <tbriand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 11:55:01 by tbriand           #+#    #+#             */
/*   Updated: 2025/01/22 15:24:12 by tbriand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Give the lenght of a int.
 * 
 * @param n Int that we need size of.
 * @param base Base in which is the int.
 * @return int Size of the int.
 */
int	ft_strlennum(unsigned long n, int base)
{
	int	len;

	len = 1;
	if (!n || !base)
		return (0);
	while (n >= (unsigned long)base)
	{
		n = n / base;
		len++;
	}
	return (len);
}
