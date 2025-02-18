/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbriand <tbriand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:09:46 by tbriand           #+#    #+#             */
/*   Updated: 2024/10/30 13:20:12 by tbriand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	s_len;

	s_len = ft_strlen(s);
	i = -1;
	while (s_len > i)
	{
		if (s[s_len] == (char) c)
		{
			return ((char *) s + s_len);
		}
		s_len--;
	}
	return (NULL);
}
