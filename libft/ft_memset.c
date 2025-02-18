/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbriand <tbriand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 10:45:43 by tbriand           #+#    #+#             */
/*   Updated: 2025/01/22 14:08:46 by tbriand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Set a memory area with the params c.
 * 
 * @param s Memory area to set.
 * @param c What to set in the memory area.
 * @param n Size of the set in the memory area.
 * @return void* Memory area with the set.
 */
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *) s;
	while (n--)
	{
		*str++ = (unsigned char) c;
	}
	return (s);
}
