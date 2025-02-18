/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbriand <tbriand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 12:43:06 by tbriand           #+#    #+#             */
/*   Updated: 2025/01/22 13:50:26 by tbriand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(int fd, char **buffer, char **stash)
{
	int	res;

	if (fd < 0 || BUFFER_SIZE < 1)
		return (-1);
	*buffer = malloc(sizeof(char) * BUFFER_SIZE);
	if (!(*buffer))
		return (-1);
	res = read(fd, *buffer, BUFFER_SIZE);
	if (res < 0)
	{
		if (*stash)
			free(*stash);
		*stash = NULL;
		return (-1);
	}
	return (res);
}

static int	ft_read(int fd, char **buffer, char **stash)
{
	int	res;

	res = ft_check(fd, buffer, stash);
	if (res < 0)
		return (0);
	if (!(*stash) && res > 0)
	{
		*stash = malloc(sizeof(char));
		if (!(*stash))
			return (0);
		(*stash)[0] = 0;
	}
	return (res);
}

static char	*ft_linedel(char *str)
{
	int	i;
	int	line;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	line = i;
	if (str[i] == '\0')
	{
		free(str);
		return (NULL);
	}
	i++;
	while (str[i])
	{
		str[i - line - 1] = str[i];
		i++;
	}
	str[i - line - 1] = '\0';
	if (str[0] == '\0')
	{
		free(str);
		return (NULL);
	}
	return (str);
}

static char	*gnl_strjoin(char const *s1, char const *s2, int res)
{
	char	*str;
	int		len_s1;
	int		i;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = 0;
	while (s1[len_s1])
		len_s1++;
	str = malloc(sizeof(char) * (len_s1 + res + 1));
	if (!str)
		return (NULL);
	i = -1;
	while (++i < len_s1)
		str[i] = s1[i];
	i = -1;
	while (++i < res)
		str[len_s1 + i] = s2[i];
	str[len_s1 + res] = 0;
	return (str);
}

/**
 * @brief Get the next line of a file descriptor.
 * @brief New one each time until the end of a document.
 * 
 * @param fd File descriptor. Need to be an opened file.
 * @return char* Current line
 */
char	*get_next_line(int fd)
{
	static char	*stash[1024];
	char		*temp;
	char		*buffer;
	int			res;

	res = ft_read(fd, &buffer, &stash[fd]);
	while (res > 0 || stash[fd])
	{
		temp = stash[fd];
		stash[fd] = gnl_strjoin(temp, buffer, res);
		free(temp);
		free(buffer);
		if (!stash[fd])
			return (NULL);
		if (!ft_gnlstrchr(stash[fd]) && res > 0)
		{
			res = ft_read(fd, &buffer, &stash[fd]);
			continue ;
		}
		temp = ft_get_line(stash[fd]);
		stash[fd] = ft_linedel(stash[fd]);
		return (temp);
	}
	ft_free_stash(&stash[fd], &buffer, res);
	return (NULL);
}
