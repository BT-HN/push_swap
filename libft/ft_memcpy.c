/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbriand <tbriand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 14:12:31 by tbriand           #+#    #+#             */
/*   Updated: 2025/01/22 14:04:51 by tbriand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Copy an area of memory from a place to another.
 * 
 * @param dest Destination of the copy.
 * @param src Source of the copy.
 * @param n Size of the copy.
 * @return void* Pointer to the location where is copied.
 */
void	*ft_memcpy(void	*dest,	const void *src, size_t n)
{
	unsigned char	*strd;
	const char		*strc;

	strd = (unsigned char *) dest;
	strc = (const char *) src;
	if (!dest && !src)
		return (0);
	while (n--)
	{
		*strd++ = *strc++;
	}
	return (dest);
}
