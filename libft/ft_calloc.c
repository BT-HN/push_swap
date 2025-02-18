/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbriand <tbriand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:04:32 by tbriand           #+#    #+#             */
/*   Updated: 2025/01/22 13:50:55 by tbriand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Allocate memory and use bzero
 * 
 * @param nmemb Number of Allocation
 * @param size Size of the type
 * @return void* Allocated address
 */
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*arr;

	if (nmemb != 0 && size > 65535 / nmemb)
		return (NULL);
	if (nmemb < 1 || size < 1)
		arr = malloc(0);
	else
		arr = malloc(nmemb * size);
	if (!arr)
		return (NULL);
	ft_bzero (arr, size * nmemb);
	return (arr);
}
