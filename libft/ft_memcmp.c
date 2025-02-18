/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbriand <tbriand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 10:21:34 by tbriand           #+#    #+#             */
/*   Updated: 2025/01/22 13:52:49 by tbriand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Compare two area in memory to find a potential difference.
 * 
 * @param s1 Memory area 1.
 * @param s2 Memory area 2.
 * @param n Size of the area to search.
 * @return int Value of the first difference encountered, 0 if an exact copy. 
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned char		*str1;
	unsigned char		*str2;

	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	i = 0;
	while (i < n && str1[i] == str2[i])
	{
		i++;
	}
	if (i == n)
		return (0);
	return (str1[i] - str2[i]);
}
