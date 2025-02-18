/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbriand <tbriand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:49:03 by tbriand           #+#    #+#             */
/*   Updated: 2024/10/17 14:16:11 by tbriand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_begin(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	j = 0;
	count = 0;
	while (s1[i] && set[j])
	{
		if (s1[i] == set[j])
		{
			i++;
			count++;
			j = 0;
		}
		else
			j++;
	}
	return (count);
}

int	ft_count_end(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	count;

	i = ft_strlen(s1)-1;
	j = 0;
	count = 0;
	while (set[j] && i)
	{
		if (s1[i] == set[j])
		{
			i--;
			count++;
			j = 0;
		}
		else
			j++;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		s1_len;
	int		begin;
	int		end;

	if (!s1 || !set)
		return (NULL);
	begin = ft_count_begin(s1, set);
	end = ft_count_end(s1, set);
	s1_len = ft_strlen(s1);
	str = ft_substr(s1, begin, (s1_len - (begin + end)));
	if (!str)
		return (NULL);
	return (str);
}
