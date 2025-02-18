/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbriand <tbriand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:28:41 by tbriand           #+#    #+#             */
/*   Updated: 2025/01/22 15:05:27 by tbriand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Find the first occurence of a char in a string.
 * 
 * @param s String to search.
 * @param c Char to find.
 * @return char* First occucence of the char in the string or NULL if none.
 */
char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	s_len;

	s_len = ft_strlen(s);
	i = 0;
	while (i <= s_len)
	{
		if (s[i] == (char) c)
		{
			return ((char *) s + i);
		}
		i++;
	}
	return (NULL);
}
