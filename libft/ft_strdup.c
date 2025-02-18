/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbriand <tbriand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 15:17:29 by tbriand           #+#    #+#             */
/*   Updated: 2025/01/22 15:07:21 by tbriand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Allocates memory for a copy of a string.
 * 
 * @param src String to dupplicate.
 * @return char* Pointer to the allocated string or NULL if error.
 */
char	*ft_strdup(char	*src)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)malloc(ft_strlen(src) + 1);
	if (str == NULL)
		return (0);
	while (src[i] != '\0')
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
