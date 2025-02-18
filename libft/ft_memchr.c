/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbriand <tbriand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:59:33 by tbriand           #+#    #+#             */
/*   Updated: 2025/01/22 13:52:47 by tbriand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Search in memory area "s" of size n for the first occurence of c. 
 * @param s Memory pointer.
 * @param c Char to search.
 * @param n Size of the memory area.
 * @return void* Pointer to the location of c in s.
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s + i) == (unsigned char) c)
		{
			return ((void *) s + i);
		}
		i++;
	}
	return (NULL);
}
