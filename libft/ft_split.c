/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbriand <tbriand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:04:45 by tbriand           #+#    #+#             */
/*   Updated: 2025/01/22 14:15:18 by tbriand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_parts_count(char *str, char sep)
{
	size_t	i;
	size_t	j;
	size_t	parts;

	i = 0;
	parts = 0;
	while (str[i] != '\0')
	{
		j = i + 1;
		if ((str[i] != sep) && (str[j] == sep))
			parts++;
		if ((str[i] != sep) && (str[j] == '\0'))
			parts++;
		i++;
	}
	return (parts);
}

static void	ft_free(char **res)
{
	size_t	i;

	i = 0;
	while (res[i] != NULL)
	{
		free(res[i]);
		i++;
	}
	free(res);
}

static int	ft_part_len(size_t start, char *str, char sep)
{
	size_t	i;

	i = start;
	while (str[i] != sep && str[i] != '\0')
	{
		i++;
	}
	return (i - start);
}

static char	**ft_table_fill(char **res, char *tmp, char sep)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (tmp[i] != '\0')
	{
		if (((i == 0) && (tmp[i] != sep))
			|| ((tmp[i - 1] == sep) && (tmp[i] != sep)))
		{
			res[j] = ft_substr(tmp, i, ft_part_len(i, tmp, sep));
			if (!res[j])
			{
				return (NULL);
			}
			j++;
		}
		i++;
	}
	return (res);
}

/**
 * @brief 
 * 
 * @param s 
 * @param c 
 * @return char** 
 */
char	**ft_split(char const *s, char c)
{
	char	**res;
	char	*tmp;

	if (!s)
		return (NULL);
	tmp = (char *)s;
	res = ft_calloc((ft_parts_count(tmp, c) + 1), sizeof(char *));
	if (!res)
		return (0);
	res = ft_table_fill(res, tmp, c);
	if (!res)
	{
		ft_free(res);
		return (NULL);
	}
	return (res);
}
