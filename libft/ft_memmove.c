/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbriand <tbriand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:58:19 by tbriand           #+#    #+#             */
/*   Updated: 2025/01/22 14:06:05 by tbriand          ###   ########.fr       */
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
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*cdest;
	char	*csrc;

	cdest = (char *) dest;
	csrc = (char *) src;
	if (!dest && !src)
		return (0);
	if (dest <= src)
		while (n--)
			*cdest++ = *csrc++;
	else if (dest > src)
	{
		cdest += n - 1;
		csrc += n - 1;
		while (n--)
			*cdest-- = *csrc--;
	}
	return (dest);
}
