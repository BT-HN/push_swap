/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbriand <tbriand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 12:10:55 by tbriand           #+#    #+#             */
/*   Updated: 2025/01/24 12:14:53 by tbriand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_get_line(char *str)
{
	char	*line;
	int		i;
	int		len;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	len = i + 1;
	line = malloc(sizeof(char) * (len + 1));
	if (!line)
		return (NULL);
	i = 0;
	while (i < len)
	{
		line[i] = str[i];
		i++;
	}
	line[len] = 0;
	return (line);
}

char	*ft_gnlstrchr(const char *str)
{
	while (*str)
	{
		if (*str == '\n')
			return ((char *) str + 1);
		str++;
	}
	return (NULL);
}

char	*ft_free_stash(char **stash, char **buffer, int res)
{
	if (*stash && res >= 0)
		free(*stash);
	*stash = NULL;
	if (*buffer && res >= 0)
		free(*buffer);
	*buffer = NULL;
	return (*stash);
}
